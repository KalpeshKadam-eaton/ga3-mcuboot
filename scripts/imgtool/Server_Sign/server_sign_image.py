import sys
import os
import time
import subprocess
	
def eaton_server_sign(file_path, user_name, user_pwd):
    if file_path is None:
        print("zephyr.tmp.unusigned.bin not found")
        print("Process Terminated ")
        sys.exit()
    else:
        print("\n Input File: " + str(file_path) + "\n")
        output_file = os.path.realpath(os.path.join(file_path,'..','zephyr.tmp.signed.bin.p7b'))
        if user_name is None:
           username = input("Enter User Name (Eaton ID):")
        else :
           username = user_name
        if username.strip() =='':
            print("NO User Entered \n ")
            print(" Process Terminated ")
            sys.exit()
        else:
            server_home = os.environ.get('SIGNSERVER_HOME')
            worker = os.environ.get('SIGNSERVER_WORKER')
            if server_home == None or worker == None :
                print("Below enviornment variables are not found\n")

                print("SIGNSERVER_HOME  - should be the path of sign server utility installed on your system \n ")


                print("SIGNSERVER_WORKER - your product specific sign worker provided by CCoE \n ")
                print("Process Terminated ! ")
                sys.exit()
            else : 
                print("Value read from Environment Variable : \n 1. SIGNSERVER_HOME : " + str(server_home) + " \n 2. SIGNSERVER_WORKER : " + str(worker) + "\n")
                arr = os.listdir(server_home)
                if 'bin' in arr :
                    path = str(server_home) + "/bin"
                    
                    if user_pwd is None:
                        str_arg = "signclient.cmd signdocument -workername " + str(worker) + " -servlet " + "/signserver/worker/" + str(worker) + " -truststore " + str(server_home) + "/eaton-truststore.jks -truststorepwd eaton -infile " + str(file_path) + " -hosts signserverp3.tcc.etn.com,signserverp4.tcc.etn.com -port 8443 -username " + str(username) + " -outfile " + str(output_file)
                    else :
                        str_arg = "signclient.cmd signdocument -workername " + str(worker) + " -servlet " + "/signserver/worker/" + str(worker) + " -truststore " + str(server_home) + "/eaton-truststore.jks -truststorepwd eaton " + " -password " + str(user_pwd) + " -infile " + str(file_path) + " -hosts signserverp3.tcc.etn.com,signserverp4.tcc.etn.com -port 8443 -username " + str(username) + " -outfile " + str(output_file)
                    
                    os.chdir(path)
                    subprocess.run(str_arg)
                    openssl_command = "openssl asn1parse -inform DER -in " +str(output_file) + " > " +str(output_file) + ".txt"
                    print(str(openssl_command)+ "\n")
                    os.popen(openssl_command)
                    time.sleep(2)
                    outfile = os.path.realpath(os.path.join(file_path,'..','zephyr.tmp.signed.bin.p7b.txt'))
                    print(str(outfile))
                    file1 = open(outfile, 'r')
                    Lines = file1.readlines()
                    count = 0
                    address = None
                    # Strips the newline character
                    for line in Lines:
                        count += 1
                        if 'OCTET STRING' in line:
                            address = line.partition(':')[0]
                    if address is not None:
                        print("address : " + str(address))
                        sig_extract_cmd = "openssl asn1parse -inform DER -in " + str(output_file) + " -out " + str(output_file) + ".sig" + " -noout -strparse " + str(address)
                        subprocess.run(sig_extract_cmd)
                    else:
                        print("OCTET STRING not found in the output file.")
                        print("Process Terminated!")
                        sys.exit(1)
                else :
                    print("Please check the path for SIGNSERVER_HOME bin folder not found")

                    print("Process Terminated !")
