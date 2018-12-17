#pragma once
class CCalendarConversion
{
public:
	CCalendarConversion(void);
	~CCalendarConversion(void);
	void Lunar2Solar();
	void Solar2Lunar();
	int LunarCalendar(int year, int month, int day);
	void choiceLunar();
	void getLunar();
	void lanurToNew();
};

