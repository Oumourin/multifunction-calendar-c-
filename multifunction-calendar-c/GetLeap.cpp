#include "StdAfx.h"
#include "GetLeap.h"
#include "SearchDate.h"

GetLeap::GetLeap(void)
{
}


GetLeap::~GetLeap(void)
{
}
void GetLeap::getLeap()
{
	SearchDate sdd;
	printf("请输入年份：");
	int year;
	scanf("%d", &year);
	if (sdd.isYear(year))
		printf("%d是闰年\n", year);
	else
	{
		printf("%d不是闰年\n", year);
	}
	CMyMenu cmy;
	cmy.returnMenu();
}
