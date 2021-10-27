#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Form *i;
	Intern intern;
	try
	{
		i = intern.makeForm("Presidential Pardon Form", "R");
	}
	catch(char const* e)
	{
		std::cout << e << '\n';
		return 1;
	}
	std::cout << *i << "\n";

	delete i;
	return (0);
}
