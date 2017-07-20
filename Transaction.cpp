#include"Transaction.h"

Transaction::Transaction()
{
	amount = 546;
	category = "DEBUG";
}

Transaction::Transaction(Entity& e, Date& d, double a, string c)
{
	entity = e;
	date = d;
	amount = (int)(a * 100);
	category = c;
}

Entity& Transaction::get_entity()
{
	return entity;
}

Date& Transaction::get_date()
{
	return date;
}

double Transaction::get_amount()
{
	return amount / 100.0;
}

string Transaction::get_category()
{
	return category;
}