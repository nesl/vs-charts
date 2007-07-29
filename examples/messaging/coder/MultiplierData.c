/*
 * Id:        MultiplierData.c
 *
 * Function:  VS System Data Source File.
 *
 * Generated: Fri Jul 20 05:00:13 2007
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
#include "MultiplierSEMLibB.h"


#if (VS_CODER_GUID != 0X01d2a6478)
#error The generated file does not match the SEMTypes.h header file.
#endif


/*
 * Include VS System Data Header File.
 */
#include "MultiplierData.h"


/*
 * Include VS System Action Expression Pointer Table File.
 */
#include "MultiplierAction.h"


#include <stdarg.h>


typedef union
{
  struct
  {
    VS_VOIDPTR       VS_VOIDPTRVar[0X00001];
  } DB1;
} VSDBDATA;


/*
 * VS System Double Buffer Variable Declaration.
 */
static VSDBDATA VSDBVar;


/*
 * SEM Deduct Function.
 */
unsigned char MultiplierSEM_Deduct (SEM_EVENT_TYPE EventNo, ...)
{
  va_list ap;

  va_start(ap, EventNo);
  if (VS_NOF_EVENTS <= EventNo) {
    return (SES_RANGE_ERR);
  }
  SEMMultiplier.EventNo = EventNo;
  SEMMultiplier.State = 0x02; /* STATE_SEM_PREPARE */
#if (VS_NOF_EVENT_GROUPS != 0)
  SEMMultiplier.DIt = 2;
#endif
  switch (EventNo)
  {
  case 1:
    VSDBVar.DB1.VS_VOIDPTRVar[0] = (VS_VOIDPTR) va_arg(ap, VS_VOIDPTR);
    break;

  default:
    break;
  }

  va_end(ap);
  return (SES_OKAY);
}


/*
 * Action Expression Functions.
 */
VS_VOID MultiplierVSAction_0 (VS_VOID)
{
  resend(VSDBVar.DB1.VS_VOIDPTRVar[0]);
}


/*
 * Action Expression Pointer Table.
 */
VS_ACTIONEXPR_TYPE const MultiplierVSAction[1] = 
{
  MultiplierVSAction_0
};
