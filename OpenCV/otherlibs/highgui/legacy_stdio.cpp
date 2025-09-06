#include "_highgui.h"
#if _MSC_VER>=1900
#include <stdio.h>
#include <ctype.h>
#ifdef __cplusplus
extern "C"
{
#endif
FILE _iob[3]={*stdin,*stdout,*stderr};
FILE* __p__iob=_iob;
FILE* __cdecl __iob_func()
{
	return _iob;
}
#undef _pctype
unsigned short const* __cdecl _pctype()
{
	return __pctype_func();
}
unsigned short const** __cdecl __p__pctype()
{
	static unsigned short const* sret=__pctype_func();
	return &sret;
}
#undef __mb_cur_max
int __cdecl __mb_cur_max()
{
	return ___mb_cur_max_func();
}
int* __cdecl __p___mb_cur_max()
{
	static int iret=___mb_cur_max_func();
	return &iret;
}
#ifdef __cplusplus
}
#endif
#endif