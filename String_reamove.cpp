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
函数解决
	
问题解意

问题原因

需求描述

*/

//定义一个结构体
/*
	内容为一个int的型id
*/
int remove_fun(char text[],int index)
{
	int len = strlen(text);
	if (index >= len)
	{
		printf("不能删除比本身还要大的数值！！！");
		return 0;
	}
	for (int i = index; i < len; i++)
	{
		text[i] = text[i + 1];
	}
	printf("删除成功");
}
int main()
{
	char arr[16] = "hello";	//字符样例
	int oper = 1;			//操作数
	remove_fun(arr,oper);	//计算函数(字符样例,操作数) 
	return 0;
}