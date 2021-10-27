#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	Form *F = new RobotomyRequestForm("R");
	Form *sh = new ShrubberyCreationForm("S");
	Form *pr = new PresidentialPardonForm("P");
	Form *tr = new ShrubberyCreationForm("D");

	std::cout << *F << std::endl;
	std::cout << *sh << std::endl;
	std::cout << *pr << std::endl;
	Bureaucrat B("Eric", 5);
	Bureaucrat C("Gary", 100);

	try
	{
		F->execute(B);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	try
	{
		B.signForm(*F);
		C.signForm(*sh);
		C.signForm(*pr);
		C.signForm(*tr);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		F->execute(C);
		B.executeForm(*F);
		B.executeForm(*sh);
		B.executeForm(*pr);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		C.executeForm(*F);
		C.executeForm(*tr);
		C.executeForm(*pr);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	delete F;
	delete sh;
	delete pr;
	delete tr;
	return (0);
}
