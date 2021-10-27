#ifndef FORM_H
# define FORM_H

# include <string>
# include <iostream>
# include <iomanip>
# include <stdexcept>
class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
private:
	bool 				sign;
	std::string const 	name;
	int	const			grade_to_sign;
	int	const			grade_to_ex;
	std::string			target;


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

	class FormNotSignedException:public std::exception 
	{
		public:
			const char* what() const throw();
	};

public:
	Form(void);
	Form(std::string name_, int gr_sgn, int ex);
	virtual ~Form();

	std::string		getName() const;
	int 			getGrade_to_sign() const;
	int 			getGrade__to_ex() const;
	bool			getSign() const;
	void			setSign(bool znak);
	virtual void	action(void) const = 0;
	void			execute(Bureaucrat const & executor) const;
	void			setTarget(std::string target);
	std::string		getTarget(void) const;
	void			beSigned(const Bureaucrat& burea);
};

std::ostream &operator<<(std::ostream &out, const Form &forma);


#endif