// ConsoleApplication4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

FILE *fin, *fout;
int main()
{
	errno_t err;
	err = fopen_s(&fin, "xxx.in", "r");
	if (err == 0)
	{
		printf("The file'xxx.in'was opened\n");
	}
	else
	{
		printf("The file'xxx.in'was not opened\n");
	}
	err = fopen_s(&fout, "xxx.out", "w");
	if (err == 0)
	{
		printf("The file'xxx.out'was opened\n");
	}
	else
	{
		printf("The file'xxx.out'was not opened\n");
	}

	fprintf(fout, "正确\n");
	getchar();
    return 0;
}

