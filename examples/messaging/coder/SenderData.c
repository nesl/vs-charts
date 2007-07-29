/*
 * Id:        SenderData.c
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
#include "SenderSEMLibB.h"


#if (VS_CODER_GUID != 0X00b9c35b0)
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


typedef struct
{
  VS_INT           VS_INTVar[0X00002];
} VSINTVARDATA;


/*
 * VS System Internal Variable Declaration.
 */
static VSINTVARDATA VSIntVar = 
{

  {
                 4,              4
  }
};


typedef union
{
  struct
  {
    VS_INT           VS_INTVar[0X00001];
  } DB1;
} VSDBDATA;


/*
 * VS System Double Buffer Variable Declaration.
 */
static VSDBDATA VSDBVar;


/*
 * SEM Deduct Function.
 */
unsigned char SenderSEM_Deduct (SEM_EVENT_TYPE EventNo, ...)
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
  case 1:
    VSDBVar.DB1.VS_INTVar[0] = (VS_INT) va_arg(ap, VS_INT);
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
  return (VS_BOOL)(VSIntVar.VS_INTVar[0X000] == VSDBVar.DB1.VS_INTVar[0]);
}


/*
 * Guard Expression Pointer Table.
 */
VS_GUARDEXPR_TYPE const SenderVSGuard[1] = 
{
  SenderVSGuard_0
};


/*
 * Action Expression Functions.
 */
VS_VOID SenderVSAction_1 (VS_VOID)
{
  VSIntVar.VS_INTVar[0X000] = VSIntVar.VS_INTVar[0X001] * 2;
}
VS_VOID SenderVSAction_2 (VS_VOID)
{
  packetmake_send(VSIntVar.VS_INTVar[0X001]);
}


/*
 * Action Expression Pointer Table.
 */
VS_ACTIONEXPR_TYPE const SenderVSAction[3] = 
{
  Red_LED_TOGGLE,
  SenderVSAction_1,
  SenderVSAction_2
};
