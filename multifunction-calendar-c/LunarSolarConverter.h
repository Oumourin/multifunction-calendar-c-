#pragma once
class LunarSolarConverter//公历农历转换
{
public:
	LunarSolarConverter(void);
	~LunarSolarConverter(void);
	void Lunar2Solar();
	void Solar2Lunar();
	int LunarCalendar(int year, int month, int day);
	void choiceLunar();
	void getLunar();
	void lanurToNew();
};

