#include "Transaction.h"
#include <iostream>

int main()
{
	cout << "TESTING IN PROGRESS\n";
	cout << "-----------------------------------\n";
	bool pass = true;
	string fail_messages = "";

	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	// Testing Entity class
	Entity entity("Test entity");

	if (entity.get_name().compare("Test entity") != 0)
	{
		pass = false;
		fail_messages += "Entity class: member function get_name() failed to return the correct name.\n";
	}

	if (entity.get_balance() != 0.0)
	{
		pass = false;
		fail_messages += "Entity class: member function get_balance() failed to return $0 before any deposits/withdraws.\n";
	}

	try
	{
		entity.deposit(-13.13);
		pass = false;
		fail_messages += "Entity class: member function deposit() failed to throw an error when attempting to deposit a negative value.\n";
	}
	catch (invalid_argument& e)
	{ }
	try
	{
		entity.deposit(13);
	}
	catch (invalid_argument& e)
	{
		pass = false;
		fail_messages += "Entity class: member function deposit() threw an invalid_argument error when it should not have.\n";
	}
	if (entity.get_balance() != 13.0)
	{
		pass = false;
		fail_messages += "Entity class: member function get_balance() failed to return the correct balance after a deposit.\n";
	}

	try
	{
		entity.withdraw(-27);
		pass = false;
		fail_messages += "Entity class: member function withdraw() failed to throw an error when attempting to withdraw a negative value.\n";
	}
	catch(invalid_argument& e)
	{ }
	try
	{
		entity.withdraw(27.50);
	}
	catch (invalid_argument& e)
	{
		pass = false;
		fail_messages += "Entity class: member function withdraw() threw an invalid_argument error when it should not have.\n";
	}
	if (entity.get_balance() != (13 - 27.50))
	{
		pass = false;
		fail_messages += "Entity class: member function get_balance() failed to return the correct balance after a withdraw.\n";
	}


	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	// Testing Date class
	Date date(1996, 9, 13);

	if (date.get_year() != 1996)
	{
		pass = false;
		fail_messages += "Date class: member function get_year() failed to return the correct year.\n";
	}

	if (date.get_month() != 9)
	{
		pass = false;
		fail_messages += "Date class: member function get_month() failed to return the correct month.\n";
	}

	if (date.get_day() != 13)
	{
		pass = false;
		fail_messages += "Date class: member function get_day() failed to return the correct day.\n";
	}

	if (date.get_month_str().compare("September") != 0)
	{
		pass = false;
		fail_messages += "Date class: member function get_month_str() failed to return the correct month.\n";
	}

	if (date.get_date().compare("1996/9/13") != 0)
	{
		pass = false;
		fail_messages += "Date class: member function get_date() failed to return the correct date.\n";
	}

	if (date.get_date_euro().compare("13/9/1996") != 0)
	{
		pass = false;
		fail_messages += "Date class: member function get_date_euro() failed to return the correct date.\n";
	}

	if (date.get_date_us().compare("9/13/1996") != 0)
	{
		pass = false;
		fail_messages += "Date class: member function get_date_us() failed to return the correct date.\n";
	}

	if (date.get_date_long().compare("September 13, 1996") != 0)
	{
		pass = false;
		fail_messages += "Date class: member function get_date_long() failed to return the correct date.\n";
	}

	if (date.to_string().compare("1996/9/13") != 0)
	{
		pass = false;
		fail_messages += "Date class: member function to_string() failed to return the correct output.\n";
	}


	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	// Testing Transaction class
	//Transaction transaction();
	//Entity trans_entity();
	//Date trans_date();

	//if(transaction.get_entity())


	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	// Final output
	if (!pass)
	{
		cout << "Result: Fail\n";
		cout << "Reason(s) for failure:\n" << fail_messages;
	}
	else
	{
		cout << "Result: Pass\n";
	}
}
