// multifunction-calendar-c.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

void mainMenu()
{
	printf("------------------------\n");
	printf("-                      -\n");
	printf("-      ����������      -\n");
	printf("-                      -\n");
	printf("-        ���˵�        -\n");
	printf("-1.�������            -\n");
	printf("-2.�����ж�            -\n");
	printf("-3.����/ũ��ת��       -\n");
	printf("-4.������ѯ            -\n");
	printf("-5.����ͳ��            -\n");
	printf("-6.�˳�ϵͳ            -\n");
	printf("-                      -\n");
	printf("------------------------\n");
	printf("                        \n");
	printf("��ѡ��");
	CMyMenu cmy;
	cmy.choiceMenu();

}
int _tmain(int argc, _TCHAR* argv[])
{
	CMyMenu cmy;
	cmy.ShowMainMenu();
	return 0;
}


