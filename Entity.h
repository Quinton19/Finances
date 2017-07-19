using namespace std;
#include<string>
#include <stdexcept>

#ifndef __ENTITY__
#define __ENTITY__ 1
class Entity
{
	public:
		Entity();
		Entity(string n);

		string get_name();
		double get_balance();

		void deposit(double in);
		void withdraw(double out);
	private:
		string name;
		int balance;
};
#endif