#include "Entity.h"

Entity::Entity()
{
	name = "DEBUG";
	balance = 0;
}

Entity::Entity(string n)
{
	name = n;
	balance = 0;
}

string Entity::get_name()
{
	return name;
}

double Entity::get_balance()
{
	return balance / 100.0;
}

void Entity::deposit(double in)
{
	if (in < 0)
		throw invalid_argument("Deposit amount is less than zero");

	balance += (int)(in * 100);
}

void Entity::withdraw(double out)
{
	if (out < 0)
		throw invalid_argument("Withdraw amount is less than zero");

	balance -= (int)(out * 100);
}