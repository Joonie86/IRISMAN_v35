#ifndef _MODULES_H
#define _MODULES_H

#define PLUGIN_ISO "%s/sprx_iso"
#define SIZE_SPRX_ISO 14184   //old: 13688 //13856

extern const unsigned char sprx_iso[SIZE_SPRX_ISO];

#define PLUGIN_SM "%s/sprx_sm" // note: it is also defined as sprx_iso from main.c
#define SIZE_SPRX_SM 9216

extern const unsigned char sprx_sm[SIZE_SPRX_SM];

#endif
