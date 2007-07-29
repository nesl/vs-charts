/*
 * Id:        SenderData.c
 *
 * Function:  VS System Data Source File.
 *
 * Generated: Thu Jul 19 18:18:28 2007
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
#include "(null)SEMLibB.h"


#if (VS_CODER_GUID != 0X01c1211a8)
#error The generated file does not match the SEMTypes.h header file.
#endif


/*
 * Include VS System Data Header File.
 */
#include "SenderData.h"


/*
 * Include VS System Action Expression Pointer Table File.
 */
#include "SenderAction.h"


#include <stdarg.h>


typedef union
{
  struct
  {
    VS_INT           VS_INTVar[0X00001];
  } DB2;
} VSDBDATA;


/*
 * VS System Double Buffer Variable Declaration.
 */
static VSDBDATA VSDBVar;


/*
 * SEM Deduct Function.
 */
unsigned char SEM_Deduct (SEM_EVENT_TYPE EventNo, ...)
{
  va_list ap;

  va_start(ap, EventNo);
  if (VS_NOF_EVENTS <= EventNo) {
    return (SES_RANGE_ERR);
  }
  SEMSender.EventNo = EventNo;
  SEMSender.State = 0x02; /* STATE_SEM_PREPARE */
#if (VS_NOF_EVENT_GROUPS != 0)
  SEMSender.DIt = 2;
#endif
  switch (EventNo)
  {
  case 2:
    VSDBVar.DB2.VS_INTVar[0] = (VS_INT) va_arg(ap, VS_INT);
    break;

  default:
    break;
  }

  va_end(ap);
  return (SES_OKAY);
}


/*
 * Guard Expression Functions.
 */
static VS_BOOL SenderVSGuard_0 (VS_VOID)
{
  return (VS_BOOL)(VSDBVar.DB2.VS_INTVar[0] == 4);
}


/*
 * Guard Expression Pointer Table.
 */
VS_GUARDEXPR_TYPE const SenderVSGuard[1] = 
{
  SenderVSGuard_0
};


/*
 * Action Expression Pointer Table.
 */
VS_ACTIONEXPR_TYPE const SenderVSAction[2] = 
{
  Red_LED_TOGGLE,
  packetmake_send
};
