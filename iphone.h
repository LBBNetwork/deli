/*++

Copyright (C) 2011-2012, The Little Beige Box, http://www.beige-box.com
Licensed under the GNU General Public License v2.

File name:

    iphone.h

Abstract:

    Define serial numbers used for iPhones for libsandwich.

--*/

#ifndef _IPHONE_MODEL_DEFINITIONS_
#define _IPHONE_MODEL_DEFINITIONS_

//
// iPhone 4S (Black, Unknown), Demo Unit
//

#ifdef _BLACK_IPHONE_4S_UNKNOWN_DEMO
#define MG_SERIAL       "C39GHZRTDTF9"
#define MODEL_STRING    "N94AP"
#define DEVICE_NAME     "iPhone"
#define MACHINE_STRING  "iPhone4,1"
#define MG_MODEL        "MD282"
#endif

//
// iPhone 4 (Black, 16GB), Demo Unit
//

#ifdef _BLACK_IPHONE_4_16GB_DEMO
#define MG_SERIAL       "C39GHZRTDTF9"
#define MODEL_STRING    "N90AP"
#define DEVICE_NAME     "iPhone"
#define MACHINE_STRING  "iPhone3,1"
#define MG_MODEL        "MC069"
#endif

//
// MuscleNerd's iPhone 4S!
//

#ifdef _MUSCLENERD_IPHONE_4S
#define MG_SERIAL       "C35GJC8VDT9V"
#define MODEL_STRING    "N94AP"
#define DEVICE_NAME     "iPhone"
#define MACHINE_STRING  "iPhone4,1"
#define MG_MODEL        "MC918"
#endif

#endif
