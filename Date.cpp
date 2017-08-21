#include "Date.h"

Date::Date()
{
	year = 1970;
	month = 1;
	day = 1;
}

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

bool Date::operator==(const Date & other)
{
	Date o = other;
	if (o.get_year() == year && o.get_month() == month && o.get_day() == day)
		return true;
	else
		return false;
}

bool Date::operator!=(const Date & other)
{
	return !(*this == other);
}

bool Date::operator<(const Date & other)
{
	Date o = other;
	if (year < o.get_year())
		return true;
	else if (month < o.get_month())
		return true;
	else if (day < o.get_day())
		return true;
	else
		return false;
}

bool Date::operator>(const Date & other)
{
	Date o = other;
	if (year > o.get_year())
		return true;
	else if (month > o.get_month())
		return true;
	else if (day > o.get_day())
		return true;
	else
		return false;
}

bool Date::operator<=(const Date & other)
{
	return (*this < other) || (*this == other);
}

bool Date::operator>=(const Date & other)
{
	return (*this > other) || (*this == other);
}

Date& Date::operator++()
{
	if (month == 12 && day == 31)
	{
		year++;
		month = 1;
		day = 1;
	}
	else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day == 31)
	{
		month++;
		day = 1;
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 30)
	{
		month++;
		day = 1;
	}
	else if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) && month == 2 && day == 28)
	{
		day++;
	}
	else if (month == 2 && (day == 28 || day == 29))
	{
		month++;
		day = 1;
	}
	else
	{
		day++;
	}

	return *this;
}

Date Date::operator++(int)
{
	Date result(*this);
	++(*this);
	return result;
}

Date& Date::operator--()
{
	if (month == 1 && day == 1)
	{
		year--;
		month = 12;
		day = 31;
	}
	else if ((month == 2 || month == 4 || month == 6 || month == 8 || month == 9 || month == 11) && day == 1)
	{
		month--;
		day = 31;
	}
	else if ((month == 5 || month == 7 || month == 10 || month == 12) && day == 1)
	{
		month--;
		day = 30;
	}
	else if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) && month == 3 && day == 1)
	{
		month--;
		day = 29;
	}
	else if (month == 3 && day == 1)
	{
		month--;
		day = 28;
	}
	else
	{
		day--;
	}

	return *this;
}

Date Date::operator--(int)
{
	Date result(*this);
	--(*this);
	return result;
}

void Date::add(int days)
{
	for (int i = 0; i < days; i++)
		(*this)++;
}

void Date::subtract(int days)
{
	for (int i = 0; i < days; i++)
		(*this)--;
}
