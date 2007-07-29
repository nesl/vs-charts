/*
 * Id:        (null)SEMTypes.h
 *
 * Function:  SEM Types Header File.
 *
 * Generated: Thu Jul 19 18:18:28 2007
 *
 * Coder 5, 4, 0, 1283
 * 
 * This is an automatically generated file. It will be overwritten by the Coder. 
 * 
 * DO NOT EDIT THE FILE! 
 */


#ifndef ___NULL_SEMTYPES_H
#define ___NULL_SEMTYPES_H


#define VS_CODER_GUID 0X01c1211a8


#include <limits.h>


#ifdef SE_EXPERTDLL
#define VS_FILE_TYPE FILE
#else
#define VS_FILE_TYPE void
#endif


#define VS_BOOL            unsigned char      
#define VS_UCHAR           unsigned char      
#define VS_SCHAR           signed char        
#define VS_UINT            unsigned int       
#define VS_INT             signed int         
#define VS_FLOAT           float              
#define VS_DOUBLE          double             
#define VS_VOID            void               
#define VS_VOIDPTR         void*              

#if (UCHAR_MAX >= 0x0ff)
#define VS_UINT8           unsigned char      
#define VS_INT8            signed char        
#elif (USHRT_MAX >= 0x0ff)
#define VS_UINT8           unsigned short     
#define VS_INT8            signed short       
#elif (UINT_MAX >= 0x0ff)
#define VS_UINT8           unsigned int       
#define VS_INT8            signed int         
#elif (ULONG_MAX >= 0x0ff)
#define VS_UINT8           unsigned long      
#define VS_INT8            signed long        
#else
#define VS_UINT8           (unsupported data type)
#define VS_INT8            (unsupported data type)
#endif

#define VS_UINT16_VAARG    VS_INT
#define VS_INT16_VAARG     VS_INT
#if (UCHAR_MAX >= 0x0ffff)
#define VS_UINT16          unsigned char      
#define VS_INT16           signed char        
#elif (USHRT_MAX >= 0x0ffff)
#define VS_UINT16          unsigned short     
#define VS_INT16           signed short       
#elif (UINT_MAX >= 0x0ffff)
#define VS_UINT16          unsigned int       
#define VS_INT16           signed int         
#elif (ULONG_MAX >= 0x0ffff)
#define VS_UINT16          unsigned long      
#define VS_INT16           signed long        
#undef VS_UINT16_VAARG
#undef VS_INT16_VAARG
#define VS_UINT16_VAARG    VS_INT16
#define VS_INT16_VAARG     VS_INT16
#else
#define VS_UINT16          (unsupported data type)
#define VS_INT16           (unsupported data type)
#endif

#define VS_UINT32_VAARG    VS_INT
#define VS_INT32_VAARG     VS_INT
#if (UCHAR_MAX >= 0x0ffffffffUL)
#define VS_UINT32          unsigned char      
#define VS_INT32           signed char        
#elif (USHRT_MAX >= 0x0ffffffffUL)
#define VS_UINT32          unsigned short     
#define VS_INT32           signed short       
#elif (UINT_MAX >= 0x0ffffffffUL)
#define VS_UINT32          unsigned int       
#define VS_INT32           signed int         
#elif (ULONG_MAX >= 0x0ffffffffUL)
#define VS_UINT32          unsigned long      
#define VS_INT32           signed long        
#undef VS_UINT32_VAARG
#undef VS_INT32_VAARG
#define VS_UINT32_VAARG    VS_INT32
#define VS_INT32_VAARG     VS_INT32
#else
#define VS_UINT32          (unsupported data type)
#define VS_INT32           (unsupported data type)
#endif


/*
 * SEM Variable Types.
 */
#define SEM_EVENT_TYPE                   VS_UINT8
#define SEM_ACTION_EXPRESSION_TYPE       VS_UINT8
#define SEM_GUARD_EXPRESSION_TYPE        VS_UINT8
#define SEM_EXPLANATION_TYPE             VS_UINT8
#define SEM_STATE_TYPE                   VS_UINT8
#define SEM_STATE_MACHINE_TYPE           VS_UINT8
#define SEM_INSTANCE_TYPE                VS_UINT8
#define SEM_RULE_INDEX_TYPE              VS_UINT8
#define SEM_INTERNAL_TYPE                VS_UINT8
#define SEM_SIGNAL_QUEUE_TYPE            VS_UINT8
#define SEM_ACTION_FUNCTION_TYPE         VS_UINT8
#define SEM_EVENT_GROUP_TYPE             VS_UINT8
#define SEM_EGTI_TYPE                    VS_UINT8
#define SEM_RULE_TABLE_INDEX_TYPE        VS_UINT8


#endif
