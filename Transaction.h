#include "Entity.h"
#include "Date.h"

class Transaction
{
	public:
		Transaction();
		Transaction(Entity& e, Date& d, double a, string c);

		Entity& get_entity();
		Date& get_date();
		double get_amount();
		string get_category();
	private:
		Entity entity;
		Date date;
		int amount;
		string category;

};