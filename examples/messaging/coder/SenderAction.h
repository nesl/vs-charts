/*
 * Id:        SenderAction.h
 *
 * Function:  VS System Action Expression Pointer Table Header File.
 *
 * Generated: Fri Jul 20 05:00:13 2007
 *
 * Coder 5, 4, 0, 1283
 * 
 * This is an automatically generated file. It will be overwritten by the Coder. 
 * 
 * DO NOT EDIT THE FILE! 
 */


#ifndef __SENDERACTION_H
#define __SENDERACTION_H


/*
 * Include SEM Defines Header File.
 */
#include "SenderSEMBDef.h"


#if (VS_CODER_GUID != 0X00b9c35b0)
#error The generated file does not match the SEMTypes.h header file.
#endif


/*
 * Action Function Prototypes.
 */
extern VS_VOID Red_LED_TOGGLE (VS_VOID);
extern VS_VOID packetmake_send (VS_INT inp);


/*
 * Action Expression Function Prototypes.
 */
extern VS_VOID SenderVSAction_1 (VS_VOID);

extern VS_VOID SenderVSAction_2 (VS_VOID);


/*
 * Action Expression Pointer Table.
 */
extern VS_ACTIONEXPR_TYPE const SenderVSAction[3];


#endif
