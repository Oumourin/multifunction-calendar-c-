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

//��ʾ���˵�
void CMyMenu::ShowMainMenu()
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
	choiceMenu();
}

//ѡ�����˵�����
void CMyMenu::choiceMenu()
{
	SearchDate sdd;//��ѯ����
	LunarSolarConverter lsc;//����ũ��ת��
	DateStatic ds;//����ͳ��
	GetThrottle gt;//��ȡ������Ϣ
	GetLeap gl;//�ж�����
	int a;
	scanf("%d", &a);//�ȴ���������
	printf("\n");
	switch (a)
	{
	case 1:
		system("cls");
		sdd.searchDate();//��ѯ����
		break;
	case 2:
		system("cls");
		gl.getLeap();//�ж�����
		break;
	case 3:
		system("cls");
		lsc.choiceLunar();//����ũ��ת��
		break;
	case 4:
		system("cls");
		gt.getThrottle();//��ȡ������Ϣ
		break;
	case 5:
		system("cls");
		ds.getStatistics();//����ͳ��
		break;
	case 6:
		exit(0);//�˳�
	}

}
//�������˵�
void CMyMenu::returnMenu()
{
	printf("1.�������˵�  \n");
	printf("2.�˳�ϵͳ    \n");
	printf("��ѡ��\n");
	int t;
	scanf("%d", &t);
	if (t == 1)
	{
		system("cls");
		ShowMainMenu();//��ʾ���˵�
	}
	else if (t == 2)
	{
		exit(0);//�˳�
	}
}

