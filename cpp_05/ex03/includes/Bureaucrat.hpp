#ifndef BUREA_H
# define BUREA_H

# include <string>
# include <iostream>
# include <iomanip>
# include <stdexcept>
class Form;
# include "Form.hpp"

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;

public:
	class GradeTooHighException:public std::exception 
	{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException:public std::exception 
	{
		public:
			const char* what() const throw();
	};

public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat& operator=(const Bureaucrat &other);
	~Bureaucrat();

	const std::string	getName() const;
	int 				getGrade() const;
	void				decGrade();
	void				incGrade();

	void	signForm(Form& forma) const;
	void	executeForm(Form const & form);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &burea);

#endif