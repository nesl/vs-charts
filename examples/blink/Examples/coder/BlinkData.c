/*
 * Id:        BlinkData.c
 *
 * Function:  VS System Data Source File.
 *
 * Generated: Fri Jul 20 14:14:49 2007
 *
 * Coder 5, 4, 0, 1283
 * 
 * This is an automatically generated file. It will be overwritten by the Coder. 
 * 
 * DO NOT EDIT THE FILE! 
 */


/*
 * Include SEM Library Header File.
 */
#include "SEMLibB.h"


#if (VS_CODER_GUID != 0X030ca9d91)
#error The generated file does not match the SEMTypes.h header file.
#endif


/*
 * Include VS System Data Header File.
 */
#include "BlinkData.h"


/*
 * Include VS System Action Expression Pointer Table File.
 */
#include "BlinkAction.h"


#include <stdarg.h>


/*
 * Action Expression Functions.
 */
VS_VOID BlinkVSAction_3 (VS_VOID)
{
  try_timer(0, 1024, 0);
}
VS_VOID BlinkVSAction_4 (VS_VOID)
{
  stop_timer(0);
}


/*
 * Action Expression Pointer Table.
 */
VS_ACTIONEXPR_TYPE const BlinkVSAction[5] = 
{
  LED_ALL_OFF,
  ToggleGREENLED,
  ToggleREDLED,
  BlinkVSAction_3,
  BlinkVSAction_4
};
