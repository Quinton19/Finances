using namespace std;

#ifndef __ENTITY__
#define __ENTITY__ 1
class Entity
{
	public:
		Entity();
		Entity(string n);

		string getName();
		double getBalance();

		void deposit(double in);
		void withdraw(double out);
	private:
		string name;
		int balance;
};
#endif