#include "Intern.hpp"
#include "Choice.hpp"

Intern::Intern(){};

Intern::Intern(const Intern &other)
{
	*this = other;
};

Form * Intern::makeForm(std::string form, std::string target)
{
	Choice S(1, "Shrubbery Creation Form");
	Choice P(2, "Presidential Pardon Form");
	Choice R(3, "Robotomy Request Form");
	Form *s;

	Choice st[3] = {S, P, R};
	for (size_t i = 0; i < 3; i++)
	{
		int j = form.compare(st[i].form);
		if (j == 0)
		{
			switch (st[i].num)
			{
			case 1:
				std::cout << "Intern creates Shrubbery Creation Form\n";
				s = new ShrubberyCreationForm(target);
				return s;
			case 2:
				std::cout << "Intern creates Presidential Pardon Form\n";
				s = new PresidentialPardonForm(target);
				return s;
			case 3:
				std::cout << "Intern creates Robotomy RequestForm\n";
				s = new RobotomyRequestForm(target);
				return s;
			}
		}
	}
	throw "Unknown form";
	return 0;
}
