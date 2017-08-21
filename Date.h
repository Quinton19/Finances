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

		bool operator==(const Date& other);
		bool operator!=(const Date& other);
		bool operator<(const Date& other);
		bool operator>(const Date& other);
		bool operator<=(const Date& other);
		bool operator>=(const Date& other);

		Date& operator++();
		Date operator++(int);
		Date& operator--();
		Date operator--(int);
		
		void add(int days);
		void subtract(int days);
	private:
		int year;
		int month;
		int day;
};