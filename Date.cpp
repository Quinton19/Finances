#include "Date.h"

Date::Date(int yr, int mn, int dy)
{
	year = yr;
	month = mn;
	day = dy;
}

int Date::get_year()
{
	return year;
}

int Date::get_month()
{
	return month;
}

int Date::get_day()
{
	return day;
}

string Date::get_month_str()
{
	switch (month)
	{
		case 1:
			return "January";
		case 2:
			return "February";
		case 3:
			return "March";
		case 4:
			return "April";
		case 5:
			return "May";
		case 6:
			return "June";
		case 7:
			return "July";
		case 8:
			return "August";
		case 9:
			return "September";
		case 10:
			return "October";
		case 11:
			return "November";
		case 12:
			return "December";
		default:
			return "Smarch";
	}
}

string Date::get_date()
{
	string date = std::to_string(year) + "/" + std::to_string(month) + "/" + std::to_string(day);
	return date;
}

string Date::get_date_euro()
{
	string date = std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
	return date;
}

string Date::get_date_us()
{
	string date = std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
	return date;
}

string Date::get_date_long()
{
	string date = Date::get_month_str() + " " + std::to_string(day) + ", " + std::to_string(year);
	return date;
}

string Date::to_string()
{
	return Date::get_date();
}