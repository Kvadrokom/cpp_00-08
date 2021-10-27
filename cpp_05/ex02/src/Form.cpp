#include "Form.hpp"

Form::Form(void) : sign(false), name("Form"), grade_to_sign(1),
				   grade_to_ex(1), target("Target"){};

Form::Form(const std::string name_, int gr_sgn, int ex):sign(false), name(name_),
			grade_to_sign(gr_sgn), grade_to_ex(ex) {};

Form::~Form(){};

std::string	Form::getName() const
{
	return name;
}

int 	Form::getGrade_to_sign() const
{
	return grade_to_sign;
}

int 	Form::getGrade__to_ex() const
{
	return grade_to_ex;
}

std::ostream &operator<<(std::ostream &out, const Form &forma)
{
	std::string sign;
	sign = (forma.getSign()) ? "signed;" : "unsigned;";
	out << forma.getName() << " " << sign;
	out << " grade_to_sign = " << forma.getGrade_to_sign();
	out << "; grade_to_ex = " << forma.getGrade__to_ex();
	out << "; target = " << forma.getTarget() << "\n";
	return out;
}

void		Form::setSign(bool znak)
{
	sign = znak;
}

void	Form::Form::beSigned(const Bureaucrat& burea)
{
	if (burea.getGrade() > this->getGrade_to_sign())
	{
		throw Form::GradeTooLowException();
	}
	this->setSign(true);
}

bool	Form::getSign() const
{
	return sign;
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Error : Too low grade");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Error : Too high grade");
}

void	Form::setTarget(std::string target_)
{
	target = target_;
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (this->getSign() == false)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGrade__to_ex())
		throw Bureaucrat::GradeTooLowException();
	this->action();
}

std::string	Form::getTarget(void) const
{
	return target;
}

const char* Form::FormNotSignedException::what() const throw()
{
	return ("Error : Form not sign");
}