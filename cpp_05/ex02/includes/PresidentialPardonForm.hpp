#ifndef PPF_H
# define PPF_H

class PresidentialPardonForm;
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class PresidentialPardonForm:public Form
{

public:
	PresidentialPardonForm(const std::string& target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &R);
	PresidentialPardonForm& operator=(PresidentialPardonForm &R);

	void	action(void) const;
};

#endif