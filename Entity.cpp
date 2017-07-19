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

string Entity::getName()
{
	return name;
}

double Entity::getBalance()
{
	return balance / 100.0;
}

void Entity::deposit(double in)
{
	balance += (int)(in * 100);
}

void Entity::withdraw(double out)
{
	balance -= (int)(out * 100);
}