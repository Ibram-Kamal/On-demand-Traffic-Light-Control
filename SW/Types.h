#ifndef  TYPES_H
#define  TYPES_H

typedef unsigned char uint8_t;

typedef signed char int8_t;

/*typedef unsigned short uint16_t;

typedef signed short int16_t;

typedef unsigned int uint32_t;

typedef signed int int32_t;*/

typedef unsigned long long uint64_t;

typedef signed long long int64_t;

#define NULL_PTR   ((void * )0)

typedef void (*pf)(void) ;

typedef enum {
	E_OK ,
	E_NOK,
	E_NOK_PARAM_OUT_OF_RANGE,
	E_NOK_PARAM_NULL_POINTER ,
	E_NOK_CONFIG_PARM_ERROR
}tenuErrorStatus;

#endif
