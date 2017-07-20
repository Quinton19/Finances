//#define __USE_MINGW_ANSI_STDIO 0

using namespace std;
#include <string>
class Date
{
	public:
		Date();
		Date(int yr, int mn, int dy);

		int get_year();
		int get_month();
		int get_day();
		string get_month_str();
		string get_date();
		string get_date_euro();
		string get_date_us();
		string get_date_long();
		string to_string();
	private:
		int year;
		int month;
		int day;
};