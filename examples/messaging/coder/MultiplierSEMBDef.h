/*
 * Id:        MultiplierSEMBDef.h
 *
 * Function:  SEM Defines Header File.
 *
 * Generated: Fri Jul 20 05:00:13 2007
 *
 * Coder 5, 4, 0, 1283
 * 
 * This is an automatically generated file. It will be overwritten by the Coder. 
 * 
 * DO NOT EDIT THE FILE! 
 */


#ifndef __MULTIPLIERSEMBDEF_H
#define __MULTIPLIERSEMBDEF_H


/*
 * Include SEM Types Header File.
 */
#include "MultiplierSEMTypes.h"


#if (VS_CODER_GUID != 0X01d2a6478)
#error The generated file does not match the SEMTypes.h header file.
#endif


/*
 * Number of Identifiers.
 */
#define VS_NOF_ACTION_EXPRESSIONS        0X001  /*   1 */
#define VS_NOF_ACTION_FUNCTIONS          0X000  /*   0 */
#define VS_NOF_EVENT_GROUPS              0X000  /*   0 */
#define VS_NOF_EVENTS                    0X003  /*   3 */
#define VS_NOF_EXTERNAL_VARIABLES        0X000  /*   0 */
#define VS_NOF_GUARD_EXPRESSIONS         0X000  /*   0 */
#define VS_NOF_INSTANCES                 0X001  /*   1 */
#define VS_NOF_INTERNAL_VARIABLES        0X000  /*   0 */
#define VS_NOF_SIGNALS                   0X000  /*   0 */
#define VS_NOF_STATE_MACHINES            0X001  /*   1 */
#define VS_NOF_STATES                    0X003  /*   3 */


/*
 * Undefined State.
 */
#define STATE_UNDEFINED                  0X0FF  /* 255 */


/*
 * Undefined Event.
 */
#define EVENT_UNDEFINED                  0X0FF  /* 255 */


/*
 * Undefined Event Group.
 */
#define EVENT_GROUP_UNDEFINED            0X0FF  /* 255 */


/*
 * Event Termination ID.
 */
#define EVENT_TERMINATION_ID             0X0FF  /* 255 */


/*
 * Action Expression Termination ID.
 */
#define ACTION_EXPRESSION_TERMINATION_ID 0X0FF  /* 255 */
#define ACTION_FPT_NAME MultiplierVSAction


/*
 * Functional expression type definitions
 */
typedef VS_BOOL (* VS_GUARDEXPR_TYPE) (VS_VOID);
typedef VS_VOID (* VS_ACTIONEXPR_TYPE) (VS_VOID);


/*
 * SEM Library Datatype Definition.
 */
typedef struct SEMDATAMultiplier
{
  VS_UINT8                                      Status;
  VS_UINT8                                      State;
  VS_UINT8                                      DIt;
  VS_UINT8                                      nAction;
  SEM_EVENT_TYPE                                EventNo;
  SEM_RULE_INDEX_TYPE                           _iRI;
  SEM_RULE_TABLE_INDEX_TYPE                     iFirstR;
  SEM_RULE_TABLE_INDEX_TYPE                     iLastR;
  SEM_STATE_TYPE                                CSV[VS_NOF_STATE_MACHINES];
  SEM_STATE_TYPE                                WSV[VS_NOF_STATE_MACHINES];
} SEMDATAMultiplier;


/*
 * VS System Datatype Definition.
 */
typedef struct
{
  VS_UINT8       SMI[0X003];
  VS_UINT8       RD[0X00c];
  VS_UINT8       RI[0X003];
  VS_UINT8       RTI[0X004];
} VSDATAMultiplier;


/*
 * Data External Declaration.
 */
extern VSDATAMultiplier const Multiplier;

extern SEMDATAMultiplier SEMMultiplier;


/*
 * Action Expression Collection Macro.
 */
#define VSAction                       MultiplierVSAction


#endif