// MainOne.cpp: 定义控制台应用程序的入口点。
	/*
	@DellHaven(刘学鹏)
	The code is for reference only. 
	Please do not use it in business.
*/
/*
	函数解决
		写一个for循环
			写一个函数(小写变成大写)返回对应小写字母
			并修改成对应的小写字母
	问题解意
		
	问题原因
		
*/

#include "stdafx.h"
/*		函数定义	*/
char fz(char ch);
void to_uppercase(char* str);
int main()
{
	char buf[] = "It is a good book";
	to_uppercase(buf);
}
void to_uppercase(char* str)
{
	for (int i = 0; i <17; i++)
	{
		char s =str[i];
		if (s >= 'a' && s <= 'z')
		{
			str[i]-=32;
		}
	}
}