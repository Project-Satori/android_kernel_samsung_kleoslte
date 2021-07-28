/* mnote-pentax-tag.h
 *
 * Copyright (c) 2002, 2003 Lutz Mueller <lutz@users.sourceforge.net>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details. 
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301  USA.
 */

#ifndef __MNOTE_PENTAX_TAG_H__
#define __MNOTE_PENTAX_TAG_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*
 * Missing features which are probably in the unknowns somewhere ...
 * 1/ AF Area (Wide, Spot, Free)
 * 2/ AE Metering (Multi segment, Centre-weighted, Spot)
 * 3/ 
 */

enum _MnotePentaxTag {
	MNOTE_PENTAX_TAG_MODE		= 0x0001,
	MNOTE_PENTAX_TAG_QUALITY	= 0x0002,
	MNOTE_PENTAX_TAG_FOCUS		= 0x0003,
	MNOTE_PENTAX_TAG_FLASH		= 0x0004,
	MNOTE_PENTAX_TAG_UNKNOWN_05	= 0x0005,
	MNOTE_PENTAX_TAG_UNKNOWN_06	= 0x0006,
	MNOTE_PENTAX_TAG_WHITE_BALANCE	= 0x0007,
	MNOTE_PENTAX_TAG_UNKNOWN_08	= 0x0008,
	MNOTE_PENTAX_TAG_UNKNOWN_09	= 0x0009,
	MNOTE_PENTAX_TAG_ZOOM		= 0x000a,
	MNOTE_PENTAX_TAG_SHARPNESS	= 0x000b,
	MNOTE_PENTAX_TAG_CONTRAST	= 0x000c,
	MNOTE_PENTAX_TAG_SATURATION	= 0x000d,
	MNOTE_PENTAX_TAG_UNKNOWN_14	= 0x000e,
	MNOTE_PENTAX_TAG_UNKNOWN_15	= 0x000f,
	MNOTE_PENTAX_TAG_UNKNOWN_16	= 0x0010,
	MNOTE_PENTAX_TAG_UNKNOWN_17	= 0x0011,
	MNOTE_PENTAX_TAG_UNKNOWN_18	= 0x0012,
	MNOTE_PENTAX_TAG_UNKNOWN_19	= 0x0013,
	MNOTE_PENTAX_TAG_ISO_SPEED	= 0x0014,
	MNOTE_PENTAX_TAG_UNKNOWN_21	= 0x0015,
	MNOTE_PENTAX_TAG_COLOR		= 0x0017,
	MNOTE_PENTAX_TAG_UNKNOWN_24	= 0x0018,
	MNOTE_PENTAX_TAG_UNKNOWN_25	= 0x0019,
	MNOTE_PENTAX_TAG_PRINTIM	= 0x0e00,
	MNOTE_PENTAX_TAG_TZ_CITY	= 0x1000,
	MNOTE_PENTAX_TAG_TZ_DST		= 0x1001,

	/* Pentax v2, v3: real values + our proprietary base to distinguish from v1 */
	MNOTE_PENTAX2_TAG_BASE              = 0x4000,
	MNOTE_PENTAX2_TAG_MODE		    = 0x0001 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_PREVIEW_SIZE      = 0x0002 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_PREVIEW_LENGTH    = 0x0003 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_PREVIEW_START     = 0x0004 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_MODEL_ID          = 0x0005 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_DATE              = 0x0006 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_TIME              = 0x0007 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_QUALITY           = 0x0008 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_IMAGE_SIZE        = 0x0009 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_PICTURE_MODE      = 0x000b + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_FLASH_MODE        = 0x000c + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_FOCUS_MODE        = 0x000d + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_AFPOINT_SELECTED  = 0x000e + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_AUTO_AFPOINT      = 0x000f + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_FOCUS_POSITION    = 0x0010 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_EXPOSURE_TIME     = 0x0012 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_FNUMBER           = 0x0013 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_ISO               = 0x0014 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_EXPOSURE_COMPENSATION = 0x0016 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_METERING_MODE     = 0x0017 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_AUTO_BRACKETING   = 0x0018 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_WHITE_BALANCE     = 0x0019 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_WHITE_BALANCE_MODE= 0x001a + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_BLUE_BALANCE      = 0x001b + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_RED_BALANCE       = 0x001c + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_FOCAL_LENGTH      = 0x001d + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_DIGITAL_ZOOM      = 0x001e + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_SATURATION        = 0x001f + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_CONTRAST          = 0x0020 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_SHARPNESS         = 0x0021 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_WORLDTIME_LOCATION = 0x0022 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_HOMETOWN_CITY     = 0x0023 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_DESTINATION_CITY  = 0x0024 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_HOMETOWN_DST      = 0x0025 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_DESTINATION_DST   = 0x0026 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_FRAME_NUMBER      = 0x0029 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_IMAGE_PROCESSING  = 0x0032 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_PICTURE_MODE2     = 0x0033 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_DRIVE_MODE        = 0x0034 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_COLOR_SPACE       = 0x0037 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_IMAGE_AREA_OFFSET = 0x0038 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_RAW_IMAGE_SIZE    = 0x0039 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_AFPOINTS_USED     = 0x003c + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_LENS_TYPE         = 0x003f + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_CAMERA_TEMPERATURE = 0x0047 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_NOISE_REDUCTION   = 0x0049 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_FLASH_EXPOSURE_COMP = 0x004d + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_IMAGE_TONE        = 0x004f + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_SHAKE_REDUCTION_INFO = 0x005c + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_BLACK_POINT       = 0x0200 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_WHITE_POINT       = 0x0201 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_AE_INFO           = 0x0206 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_LENS_INFO         = 0x0207 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_FLASH_INFO        = 0x0208 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_CAMERA_INFO       = 0x0215 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_BATTERY_INFO      = 0x0216 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_HOMETOWN_CITY_CODE = 0x1000 + MNOTE_PENTAX2_TAG_BASE,
	MNOTE_PENTAX2_TAG_DESTINATION_CITY_CODE = 0x1001 + MNOTE_PENTAX2_TAG_BASE,

	/* Casio v2: some Casio v2 tags match Pentax v2 tags */
	MNOTE_CASIO2_TAG_BASE               = MNOTE_PENTAX2_TAG_BASE,
	MNOTE_CASIO2_TAG_PREVIEW_START      = 0x2000 + MNOTE_CASIO2_TAG_BASE,
	MNOTE_CASIO2_TAG_WHITE_BALANCE_BIAS = 0x2011 + MNOTE_CASIO2_TAG_BASE,
	MNOTE_CASIO2_TAG_WHITE_BALANCE      = 0x2012 + MNOTE_CASIO2_TAG_BASE,
	MNOTE_CASIO2_TAG_OBJECT_DISTANCE    = 0x2022 + MNOTE_CASIO2_TAG_BASE,
	MNOTE_CASIO2_TAG_FLASH_DISTANCE     = 0x2034 + MNOTE_CASIO2_TAG_BASE,
	MNOTE_CASIO2_TAG_RECORD_MODE        = 0x3000 + MNOTE_CASIO2_TAG_BASE,
	MNOTE_CASIO2_TAG_SELF_TIMER         = 0x3001 + MNOTE_CASIO2_TAG_BASE,
	MNOTE_CASIO2_TAG_QUALITY            = 0x3002 + MNOTE_CASIO2_TAG_BASE,
	MNOTE_CASIO2_TAG_FOCUS_MODE         = 0x3003 + MNOTE_CASIO2_TAG_BASE,
	MNOTE_CASIO2_TAG_TIME_ZONE          = 0x3006 + MNOTE_CASIO2_TAG_BASE,
	MNOTE_CASIO2_TAG_BESTSHOT_MODE      = 0x3007 + MNOTE_CASIO2_TAG_BASE,
	MNOTE_CASIO2_TAG_CCS_ISO_SENSITIVITY = 0x3014 + MNOTE_CASIO2_TAG_BASE,
	MNOTE_CASIO2_TAG_COLOR_MODE         = 0x3015 + MNOTE_CASIO2_TAG_BASE,
	MNOTE_CASIO2_TAG_ENHANCEMENT        = 0x3016 + MNOTE_CASIO2_TAG_BASE,
	MNOTE_CASIO2_TAG_FINER              = 0x3017 + MNOTE_CASIO2_TAG_BASE
};
typedef enum _MnotePentaxTag MnotePentaxTag;

const char *mnote_pentax_tag_get_name        (MnotePentaxTag tag);
const char *mnote_pentax_tag_get_title       (MnotePentaxTag tag);
const char *mnote_pentax_tag_get_description (MnotePentaxTag tag);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __MNOTE_PENTAX_TAG_H__ */
