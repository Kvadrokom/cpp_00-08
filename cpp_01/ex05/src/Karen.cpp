#include "Karen.hpp"

void Karen::complain( std::string level )
{
	typedef void(Karen::* Ptr)();
	Ptr ptr[4];
	int i = 0;
	int cmp;
	std::string _level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	ptr[0] = &Karen::debug;
	ptr[1] = &Karen::info;
	ptr[2] = &Karen::warning;
	ptr[3] = &Karen::error;
	while (i < 4)
	{
		cmp = level.compare(_level[i]);
		switch (cmp)
		{
		case 0:
			(this->*ptr[i])();
			return;
		}
		i++;
	}
}

void Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL - double - cheese - triple";
	std::cout << " - pickle - special - ketchup burger.";
	std::cout << " I just love it !\n";
}

void Karen::info( void )
{
	std::cout << "I cannot believe adding extrabacon cost more money. ";
	std::cout << "You don’t put enough. ";
	std::cout << "If you did I would not have to ask for it!\n";
}

void Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming here for years and you just started";
	std::cout << " working here last month.\n";

}

void Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}
