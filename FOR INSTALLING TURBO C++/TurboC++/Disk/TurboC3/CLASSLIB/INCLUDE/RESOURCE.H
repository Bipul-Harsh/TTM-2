/*------------------------------------------------------------------------*/
/*                                                                        */
/*  RESOURCE.H                                                            */
/*                                                                        */
/*  Copyright Borland International 1991                                  */
/*  All Rights Reserved                                                   */
/*                                                                        */
/*------------------------------------------------------------------------*/

#if !defined( __RESOURCE_H )
#define __RESOURCE_H

#if !defined( __LIMITS_H )
#include <Limits.h>
#endif  // __LIMITS_H

#if defined( __DLL__ )
#define WINDOWS_WEP_BUG     // no destructors for static objects in a DLL
#endif

const DEFAULT_HASH_TABLE_SIZE   = 111;
const DEFAULT_BAG_SIZE          =  29;
const DEFAULT_SET_SIZE          =  29;
const DEFAULT_DEQUE_SIZE        =  20;
const DEFAULT_QUEUE_SIZE        =  20;
const DEFAULT_STACK_SIZE        =  20;
const DEFAULT_ARRAY_SIZE        =  20;

#endif 
