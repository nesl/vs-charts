/*
 * Id:        BlinkAction.h
 *
 * Function:  VS System Action Expression Pointer Table Header File.
 *
 * Generated: Fri Jul 20 14:14:49 2007
 *
 * Coder 5, 4, 0, 1283
 * 
 * This is an automatically generated file. It will be overwritten by the Coder. 
 * 
 * DO NOT EDIT THE FILE! 
 */


#ifndef __BLINKACTION_H
#define __BLINKACTION_H


/*
 * Include SEM Defines Header File.
 */
#include "SEMBDef.h"


#if (VS_CODER_GUID != 0X030ca9d91)
#error The generated file does not match the SEMTypes.h header file.
#endif


/*
 * Action Function Prototypes.
 */
extern VS_VOID LED_ALL_OFF (VS_VOID);
extern VS_VOID ToggleGREENLED (VS_VOID);
extern VS_VOID ToggleREDLED (VS_VOID);
extern VS_INT8 stop_timer (VS_UINT8 tid);
extern VS_INT8 try_timer (VS_UINT8 tid, VS_UINT32 interval, VS_UINT8 type);


/*
 * Action Expression Function Prototypes.
 */
extern VS_VOID BlinkVSAction_3 (VS_VOID);

extern VS_VOID BlinkVSAction_4 (VS_VOID);


/*
 * Action Expression Pointer Table.
 */
extern VS_ACTIONEXPR_TYPE const BlinkVSAction[5];


#endif
