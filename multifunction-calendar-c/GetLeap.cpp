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
	printf("��������ݣ�");
	int year;
	scanf("%d", &year);
	if (sdd.isYear(year))
		printf("%d������\n", year);
	else
	{
		printf("%d��������\n", year);
	}
	CMyMenu cmy;
	cmy.returnMenu();
}
