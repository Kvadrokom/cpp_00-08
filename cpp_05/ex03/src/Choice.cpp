# include "Choice.hpp"

Choice::Choice(int num_, std::string form_) : num(num_), form(form_){};

Choice::Choice(const Choice &other)
{
	num = other.num;
	form = other.form;
}

Choice& Choice::operator=(const Choice &other)
{
	num = other.num;
	form = other.form;
	return *this;
}