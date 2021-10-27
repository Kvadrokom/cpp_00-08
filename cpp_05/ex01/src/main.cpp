#include "Bureaucrat.hpp"
#include "Form.hpp"


int	main(void)
{	
	try
	{
		Form B("Form #1", 0, 1);
	}
	catch (std::exception &exception)
	{
		std::cerr  << exception.what() << "\n";
	}

	try
	{
		Form B("Form #1", 1, 156);
	}
	catch (std::exception &exception)
	{
		std::cerr  << exception.what() << "\n";
	}

	try
	{
		Bureaucrat B("Eric", 1);
		Form C("Form #1", 10, 10);
		std::cout << C;
		B.signForm(C);
		C.beSigned(B);
		std::cout << C;
	}
	catch (std::exception &exception)
	{
		std::cerr << exception.what() << "\n";
	}

	try
	{
		Bureaucrat B("Eric", 155);
		Form C("Form #1", 10, 10);
		C.beSigned(B);
	}
	catch (std::exception &exception)
	{
		std::cerr << exception.what() << "\n";
	}
	return (0);
}
