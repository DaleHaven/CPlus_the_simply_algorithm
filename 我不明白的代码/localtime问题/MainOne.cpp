// MainOne.cpp: 定义控制台应用程序的入口点。
#include "stdafx.h"
#include "string.h"
#include "stdlib.h"
#include "stdlib.h"
#include "time.h"
/*
	需求:
		打印输出当年"年"时间
*/
int main()
{
	time_t _tm = time(NULL);
	tm info = *localtime(&_tm);		//----<error
	/*
		以上写法会出现安全问题,官方文档说类型是这样的
		localtime_s(
			struct tm* _tm,
			const time_t *time
		);
	**/
	time_t newtime = time(NULL);
	tm info = *localtime_s(&newtime, //？？？);
	/*
		我这是按官方文档写的,问号处是我不会的,也是问题所在
	**/
		printf("The year: %d", info.tm_year);
	return 0;
}