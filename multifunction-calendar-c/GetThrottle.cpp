#include "StdAfx.h"
#include "GetThrottle.h"


GetThrottle::GetThrottle(void)
{
}


GetThrottle::~GetThrottle(void)
{
}
void GetThrottle::getThrottle()
{
	double f20[24] = { 6.11,20.84,4.15,19.0698,5.6744,21.624,5.59 ,
		20.888,6.318,21.86,6.5 ,22.20 ,7.928,23.65 ,8.35 ,23.95,
		8.44,23.822,9.098,24.218,8.218,23.08,7.9 ,22.60 };
	double f21[24] = { 5.4055,20.11 ,3.87 ,18.73,5.63 ,20.646,
		4.81 ,20.1  ,5.52 ,21.04,5.678,21.37,7.108,22.83 ,7.5  ,
		23.13,7.646,23.042,8.318,23.438,7.438,22.36,7.18 ,21.94 };
	int year, m;
	int tian = 0;
	printf("������Ҫ��ѯ�����:\n");
	scanf("%d", &year);
	if (year<1940 || year >2040)
	{
		printf("���볬���ƶ���Χ\n\n");
	}
	printf("\n");
	printf("��ѡ����Ҫ��ѯ�Ľ���\n");
	printf(" ������������������������������������������ "); printf("\n");
	printf("\n");
	printf(" \t1.С��\t2.��\t3.����\t4.��ˮ\n");
	printf("\n");
	printf(" \t5.����\t6.����\t7.����\t8.����\n");
	printf("\n");
	printf(" \t9.����\t10.С��\t11.â��\t12.����\t\n");
	printf("\n");
	printf(" \t13.С��\t14.����\t15.����\t16.����\t\n"); printf("\n");
	printf(" \t17.��¶\t18.���\t19.��¶\t20.˪��\n");
	printf("\n");
	printf(" \t21.����\t22.Сѩ\t23.��ѩ\t24.����\n");
	printf("\n");
	printf(" ������������������������������������������ \n"); scanf("%d", &m);
	int iL = 0;
	int iY = 0;
	int iD = 0;
	int iM = 0;
	if (year<2000)
	{
		iY = year - 1900;
		if (m<5)
		{
			iL = (iY - 1) / 4;
		}
		else
		{
			iL = iY / 4;
		}
		iD = (double)iY*0.2422 + f20[m - 1] - iL;
		iM = (m + 1) / 2;
		if (year == 1982 && m == 1)
		{
			iD--;
		}
		if (year == 1982 && m == 4)
		{
			iD--;
		}
		if (year == 1978 && m == 22)
		{
			iD++;
		}
		if (year == 1954 && m == 23)
		{
			iD++;
		}
	}
	else
	{
		iY = year - 2000;
		if (m<5)
		{
			iL = (iY - 1) / 4;
		}
		else
		{
			iL = iY / 4;
		}
		iD = (double)iY *0.2422 + f21[m - 1] - iL; iM = (m + 1) / 2;
		if (year == 2019 && m == 1)
		{
			iD--;
		}
		if (year == 2008 && m == 10)
		{
			iD++;
		}
		if (year == 2016 && m == 13)
		{
			iD++;
		}
		if (year == 2002 && m == 15)
		{
			iD++;
		}
		if (year == 2021 && m == 24)
		{
			iD--;
		}
	}
	printf("����%d��%d��%d��\n", year, iM, iD);
	CMyMenu cmy;
	cmy.returnMenu();
}
