#include "Form.hpp"

Form::Form(std::string name_, int gr_sgn, int ex):sign(false), name(name_),
			grade_to_sign(gr_sgn), grade_to_ex(ex) 
{
	if (this->getGrade_to_sign() < 1)
	{
		throw Form::GradeTooHighException();
	}
	if (this->getGrade_to_sign() > 155)
	{
		throw Form::GradeTooLowException();
	}

	if (this->getGrade__to_ex() < 1)
	{
		throw Form::GradeTooHighException();
	}
	if (this->getGrade__to_ex() > 155)
	{
		throw Form::GradeTooLowException();
	}
};

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

Form::Form(const Form &other):sign(getSign()), name(other.getName()),
		grade_to_sign(other.getGrade_to_sign()),
		grade_to_ex(other.getGrade__to_ex()) {};

Form& Form::operator=(const Form &other)
{
	sign = other.getSign();
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Form &forma)
{
	std::string sign;
	sign = (forma.getSign()) ? "signed;" : "unsigned;";
	out << forma.getName() << " " << sign;
	out << " grade_to_sign = " << forma.getGrade_to_sign();
	out << "; grade_to_ex = " << forma.getGrade__to_ex() << "\n";
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