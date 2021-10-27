#include "Bureaucrat.hpp"

int	main(void)
{	
	try
	{
		Bureaucrat B("Eric", 0);
	}
	catch(std::exception &error)
	{
		std::cerr << error.what() << '\n';
	}

	try
	{
		Bureaucrat B("Eric", 156);
	}
	catch(std::exception& error)
	{
		std::cerr << error.what() << '\n';
	}
	

	try
	{
		Bureaucrat B("Eric", 1);
		std::cout << B;
		B.incGrade();
	}
	catch(std::exception& error)
	{
		std::cerr << error.what() << '\n';
	}


	try
	{
		Bureaucrat B("Eric", 155);
		B.decGrade();
	}
	catch(std::exception& error)
	{
		std::cerr << error.what() << '\n';
	}
	

	return (0);
}
