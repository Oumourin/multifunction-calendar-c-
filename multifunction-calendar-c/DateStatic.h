#pragma once
class DateStatic//����ͳ��
{
public:
	DateStatic(void);
	~DateStatic(void);
	int getBirthday();
	int getTotalDay(int year1, int month1, int day1, int year2, int month2, int day2);
	int getDayOfMonth(int year, int month);
	void getInformation();
	void CaculateWeekDay(int y, int m, int d);
	void getHoliday();
	void getStatistics();
	void sonMenu();
};

