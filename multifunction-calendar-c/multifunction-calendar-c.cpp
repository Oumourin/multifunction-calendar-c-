// multifunction-calendar-c.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

void mainMenu()
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
	CMyMenu cmy;
	cmy.choiceMenu();

}
int _tmain(int argc, _TCHAR* argv[])
{
	CMyMenu cmy;
	cmy.ShowMainMenu();
	return 0;
}


