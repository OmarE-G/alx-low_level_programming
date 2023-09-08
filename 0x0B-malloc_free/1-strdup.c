#include<stdio.h>
#include<stdlib.h>
#ifdef __STDC_ALLOC_LIB__
#define __STDC_WANT_LIB_EXT2__ 1
#else
#define _POSIX_C_SOURCE 200809L
#include <string.h>
/**
* _strdup - makes an array
*@str: str
*Return:ptr
*/


char *_strdup(char *str)
{

	return (strdup(str));

}
