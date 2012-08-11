/*++

Copyright (C) 2011-2012, The Little Beige Box, http://www.beige-box.com
Licensed under the GNU General Public License v2.

File name:

    ipod.h

Abstract:

    Define serial numbers used for iPods for libsandwich.

--*/

#ifndef _IPOD_MODEL_DEFINITIONS_
#define _IPOD_MODEL_DEFINITIONS_

//
// White iPod touch 4G 8GB Demo Unit
//

#ifdef _WHITE_IPOD_TOUCH_4G_8GB_DEMO
#define MG_SERIAL       "CCQGDKAMDNQW"
#define MODEL_STRING    "N81AP"
#define DEVICE_NAME     "iPod"
#define MACHINE_STRING  "iPod4,1"
#define MG_MODEL        "MD057"
#endif

//
// Black iPod touch 4G 32GB Demo Unit
//

#ifdef _BLACK_IPOD_TOUCH_4G_32GB_DEMO
#define MG_SERIAL       "CCQGDKAMDNQW"
#define MODEL_STRING    "N81AP"
#define DEVICE_NAME     "iPod"
#define MACHINE_STRING  "iPod4,1"
#define MG_MODEL        "MC544"
#endif

//
// Black iPod touch 2G 16GB
//

#ifdef _BLACK_IPOD_TOUCH_2G_16GB
#define MG_SERIAL       "14841RAU203"
#define MODEL_STRING    "N72AP"
#define DEVICE_NAME     "iPod"
#define MACHINE_STRING  "iPod2,1"
#define MG_MODEL        "MB531"
#endif

#endif