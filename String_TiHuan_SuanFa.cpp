// MainOne.cpp: 定义控制台应用程序的入口点。
	/*
	@DellHaven(刘学鹏)
	The code is for reference only. 
	Please do not use it in business.
*/
#include "stdafx.h"
#include "string.h"
#include "stdlib.h"
/*
问题解意
		
问题原因
	
需求描述
	
*/

//定义一个结构体
/*
	
*/
void th(const char* str)
{

	int len = strlen(str);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		char ch = str[i];
		if (ch=='/' && str[i+1]== 's')
		{
			printf("^_^");
			i=i + 1;
			continue;
		}
		else if(ch == '/' && str[i + 1] == 'f')
		{
			printf("@_@");
			i = i + 1;
			continue;
		}
		else if (ch == '/' && str[i + 1] == 'c')
		{
			printf("T_T");
			i = i + 1;
			continue;
		}
		else if (ch == '/' && str[i + 1] == '/')
		{
			printf("/");
			i = i + 1;
			continue;
		}
		printf("%c", str[i]);
	}
}
int main()
{	
	/*
		转换如下
			字符串中带有/s的话那就替换^_^
			字符串中带有/f的话那就替换@_@
			字符串中带有/c的话那就替换T_T
			字符串中带有//的话那就替换//
		算法解释
			读取每个字符,如果满足/s条件
				则就打印指定^_^
				并且始循环+1
				然后跳过本轮
	*/
	th("Thank you /s I will try /c my // best!");
	return 0;
}