#ifndef RRF_H
# define RRF_H

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class RobotomyRequestForm:public Form
{

public:
	RobotomyRequestForm(const std::string& target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &R);
	RobotomyRequestForm& operator=(RobotomyRequestForm &R);

	void	action(void) const;
};

#endif