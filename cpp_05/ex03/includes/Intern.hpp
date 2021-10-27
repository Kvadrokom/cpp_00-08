#ifndef INTERN_H
# define INTERN_H

# include <string>
# include <iostream>
# include <iomanip>
# include <stdexcept>
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
#include "Choice.hpp"

class Intern
{

public:
	Intern();
	Intern(const Intern &other);

	Form *makeForm(std::string form, std::string target);
};

#endif