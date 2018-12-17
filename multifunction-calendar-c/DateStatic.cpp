#include "StdAfx.h"
#include "DateStatic.h"
#include "SearchDate.h"

DateStatic::DateStatic(void)
{
}


DateStatic::~DateStatic(void)
{
}
int DateStatic::getBirthday()
{
	int year1, month1, day1;
	int year2, month2, day2;
	do
	{
		printf("\n输入出生日期（输入格式1998-11-11）: ");
		scanf("%d-%d-%d", &year1, &month1, &day1);
	} while (year1 <0 || month1<1 || month1>12 || day1<1 || day1> getDayOfMonth(year1, month1));
	do
	{
		printf("\n\n\n输入要计算的日期（输入格式2000-11-11）: ");
		scanf("%d-%d-%d", &year2, &month2, &day2);
	} while (year2 <0 || year2 <year1 || month2<1 || month2>12 || day2<1 || day2> getDayOfMonth(year2, month2));
	printf("\n距离出生过了: %ld  days \n\n\n", getTotalDay(year1, month1, day1, year2, month2, day2));

	CMyMenu cmy;
	cmy.returnMenu();
	return 0;
}

void DateStatic::getInformation()
{
	printf("请输入日期(输入格式2000-01-01)：");
	int year, month, day;
	int sum, i;
	int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	scanf("%d-%d-%d", &year, &month, &day);
	printf("%d-%d-%d", year, month, day);
	if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
	{
		months[1] += 1;
	}
	sum = 0;
	for (i = 1; i < month; i++)
	{
		sum += months[i - 1];
	}
	sum += day;
	printf("是该年的第%d天，", sum);
	CaculateWeekDay(year, month, day);
	printf("\n");
	CMyMenu cmy;
	cmy.returnMenu();
}

void DateStatic::getHoliday()
{
	int year, month, day;
	int temp = -1;
	printf("输入需要计算的日期：（日期格式：2000-01-01）");
	do
	{
		scanf("%d-%d-%d", &year, &month, &day);
	} while (year<0 || month <= 0 || month>12 || day <= 0 || day>31);
	switch (month)
	{
	case 1:
	case 2:
	case 3:
	case 4:temp = getTotalDay(year, month, day, year, 5, 1);
		break;
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:temp = getTotalDay(year, month, day, year, 10, 1);
		break;
	case 10:
	case 11:
	case 12:
		temp = getTotalDay(year, month, day, year + 1, 1, 1);
	default:
		break;
	}
	if (temp == -1)
	{
		printf("日期输入错误");
	}
	else
	{
		printf("距离最近假期还有：%d\n", temp);
	}
	CMyMenu cmy;
	cmy.returnMenu();
}
void DateStatic::getStatistics()
{
	printf("1.统计出生至今的天数\n");
	printf("2.统计距离某日期最近的节假日的天数\n");
	printf("3.统计某日期是该年第几天星期几\n");
	printf("请输入：\n");
	sonMenu();
}

void DateStatic::sonMenu()
{
	char b;
	scanf("%d", &b);
	printf("\n");
	switch (b)
	{
	case 1:
		system("cls");
		getBirthday();
		break;
	case 2:
		system("cls");
		getHoliday();
		break;
	case 3:
		system("cls");
		getInformation();
		break;
	}
}
int DateStatic::getTotalDay(int year1, int month1, int day1, int year2, int month2, int day2)
{
	SearchDate sdd;
	long total = 0;
	for (int year = year1; year < year2; year++)
	{
		total = total + 365;
		if (sdd.isYear(year) == 1)
			total++;
	}
	for (int month = 1; month < month2; month++)
	{
		total = total + getDayOfMonth(year2, month);
	}
	total = total + day2;
	for (int month = 1; month < month1; month++)
	{
		total = total - getDayOfMonth(year1, month);
	}
	return total - day1;
}
int DateStatic::getDayOfMonth(int year, int month)
{
	SearchDate sdd;
	int dayArr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	return (month == 2 && sdd.isYear(year) == 1) ? dayArr[month] + 1 : dayArr[month];
}

void  DateStatic::CaculateWeekDay(int year, int month, int day)
{
	if (month == 1 || month == 2)
	{
		month += 12;
		year--;
	}
	int iWeek = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
	switch (iWeek)
	{
	case 0: printf("星期一\n"); break;
	case 1: printf("星期二\n"); break;
	case 2: printf("星期三\n"); break;
	case 3: printf("星期四\n"); break;
	case 4: printf("星期五\n"); break;
	case 5: printf("星期六\n"); break;
	case 6: printf("星期日\n"); break;

	}
}