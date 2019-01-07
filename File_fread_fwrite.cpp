// MainOne.cpp: 定义控制台应用程序的入口点。
#include "stdafx.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"
#include "stdio.h"
#include "math.h"

int print_read(char buffer[]);
void read();
void _save(char arr[], int count);

int print_read(char buffer[])
{
	/*
		显示输出
	*/
	int len = strlen(buffer);
	if (len < 0)
	{
		return printf("数组内没有数据 \n");
	}
	printf("有效数据: \n");
	for (int i = 0; i < len; i++)
	{
		printf("%c \n", buffer[i]);
	}
}
void read()
{
	/*
		读取数据并输出到控制台显示
	*/
	const char* filename = "D:/text.txt";
	FILE* fp = fopen(filename, "rb");
	char buffer[128];
	int n;	//实际有效数据
	while (! feof(fp))
	{
		n = fread(buffer, 1, 128, fp);
		if (n < 0)break;
	}
	print_read(buffer);
	fclose(fp);
}
void _save(char arr[],int count)
{
	const char* filename = "D:/text.txt";
	FILE* fp = fopen(filename, "wb");

	int reason = fwrite(arr, 1, count, fp);
	fclose(fp);
}
int main()
{
	//read();
	//_save();
	//printf("请输入一串字符(不要超过10位 :)");
	//	char buffer[128];
	//	int count = 128;
	//scanf("%s", &buffer);
	//	_save(buffer,count);
	return 0;
}