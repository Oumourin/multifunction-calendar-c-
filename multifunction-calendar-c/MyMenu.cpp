#include "StdAfx.h"
#include "MyMenu.h"
#include "SearchDate.h"
#include "LunarSolarConverter.h"
#include "DateStatic.h"
#include "GetThrottle.h"
#include "GetLeap.h"
CMyMenu::CMyMenu(void)
{
}


CMyMenu::~CMyMenu(void)
{
}

//显示主菜单
void CMyMenu::ShowMainMenu()
{
	printf("------------------------\n");
	printf("-                      -\n");
	printf("-      万能日历表      -\n");
	printf("-                      -\n");
	printf("-        主菜单        -\n");
	printf("-1.输出月历            -\n");
	printf("-2.闰年判定            -\n");
	printf("-3.公历/农历转换       -\n");
	printf("-4.节气查询            -\n");
	printf("-5.日期统计            -\n");
	printf("-6.退出系统            -\n");
	printf("-                      -\n");
	printf("------------------------\n");
	printf("                        \n");
	printf("请选择：");
	choiceMenu();
}

//选择主菜单功能
void CMyMenu::choiceMenu()
{
	SearchDate sdd;//查询日历
	LunarSolarConverter lsc;//公历农历转换
	DateStatic ds;//日期统计
	GetThrottle gt;//获取节气信息
	GetLeap gl;//判断闰年
	int a;
	scanf("%d", &a);//等待输入数据
	printf("\n");
	switch (a)
	{
	case 1:
		system("cls");
		sdd.searchDate();//查询日历
		break;
	case 2:
		system("cls");
		gl.getLeap();//判断闰年
		break;
	case 3:
		system("cls");
		lsc.choiceLunar();//公历农历转换
		break;
	case 4:
		system("cls");
		gt.getThrottle();//获取节气信息
		break;
	case 5:
		system("cls");
		ds.getStatistics();//日期统计
		break;
	case 6:
		exit(0);//退出
	}

}
//返回主菜单
void CMyMenu::returnMenu()
{
	printf("1.返回主菜单  \n");
	printf("2.退出系统    \n");
	printf("请选择：\n");
	int t;
	scanf("%d", &t);
	if (t == 1)
	{
		system("cls");
		ShowMainMenu();//显示主菜单
	}
	else if (t == 2)
	{
		exit(0);//退出
	}
}

