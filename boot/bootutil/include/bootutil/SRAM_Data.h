/**
 *****************************************************************************************
 *	@file SRAM_Data.h
 *
 *	@brief This file has SRAM memory structure.
 *
 *  @details bkup_sram_t structure represents the whole SRAM memory region. This structure has nested structures called
 * as SRAM blocks.
 * mcuboot_app_shared_mem_t structure is the reserved area to share data between MCUboot and application. Location of
 * this structure should be untouched as same is being used by MCUboot. Use reserved space to add more elements.
 * Application can add more feature specific structures in bkup_sram_t after shared_data member, it is important to add
 * 16 bit CRC at the end of each nested structure (SRAM block). Backup SRAM module will take care of verifying and
 * updating the CRC and user don't need to calculate.
 *
 * For Example, typedef struct sample_sram_block
 *		{
 *			uint8_t element1;
 *			uint8_t element2;
 *			uint16_t crc;
 *		} sample_sram_block_t;
 *
 *		typedef struct bkup_sram
 *		{
 *			mcuboot_app_shared_mem_t shared_data;
 *			sample_sram_block_t new_block;
 *		} bkup_sram_t;

 *	@version C++ Style Guide Version 1.0
 *
 *	@copyright 2023 Eaton Corporation. All Rights Reserved.
 *
 *****************************************************************************************
 */
#ifndef SRAM_DATA_H
#define SRAM_DATA_H

#include <stdint.h>

/*
 *****************************************************************************************
 *		Globals
 *****************************************************************************************
 */

/**
 * @brief Structure used to define the data shared between mcuboot and application.
 */
typedef struct mcuboot_app_shared_mem
{
	uint8_t local_sign_status;
	uint8_t server_sign_status;
	uint8_t reserved[96];
	uint16_t crc;
} mcuboot_app_shared_mem_t;

/**
 * @brief Structure representing the complete data to store in SRAM memory.
 */
typedef struct bkup_sram
{
	/* mcuboot_app_shared_mem_t structure is the reserved area to share data between MCUboot and application. Location
	   of this structure should be at the start only bacause same is being used by MCUboot. Use reserved space to add
	   more elements for data sharing.*/
	mcuboot_app_shared_mem_t shared_data;

	/**** IMPORTANT ****
	 * Each sram block should have 16 bit CRC element, check the details in file header ***/

} bkup_sram_t;

#endif  /* SRAM_DATA_H */