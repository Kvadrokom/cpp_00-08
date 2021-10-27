#ifndef SCF_H
# define SCF_H

class ShrubberyCreationForm;
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class ShrubberyCreationForm:public Form
{

public:
	ShrubberyCreationForm(const std::string& target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &R);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm &R);

	void	action(void) const;
};

#endif