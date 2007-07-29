/*
 * Id:        BlinkData.h
 *
 * Function:  VS System Data Header File.
 *
 * Generated: Fri Jul 20 14:14:49 2007
 *
 * Coder 5, 4, 0, 1283
 * 
 * This is an automatically generated file. It will be overwritten by the Coder. 
 * 
 * DO NOT EDIT THE FILE! 
 */


#ifndef __BLINKDATA_H
#define __BLINKDATA_H


/*
 * Include SEM Defines Header File.
 */
#include "SEMBDef.h"


#if (VS_CODER_GUID != 0X030ca9d91)
#error The generated file does not match the SEMTypes.h header file.
#endif


/*
 * Event Identifier Definitions.
 */
#define SE_RESET                         0X000  /*   0 */
#define Final                            0X001  /*   1 */
#define Init                             0X002  /*   2 */
#define TimeOut                          0X003  /*   3 */


/*
 * Constants.
 */
#define BLINK_ID                         ((VS_UINT8) 0)
#define TIMER_REPEAT                     ((VS_UINT8) 0)
#define TIMER_TICKS                      ((VS_UINT32) 1024)


#endif
