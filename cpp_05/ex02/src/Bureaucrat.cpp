#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string _name, int grade_):
						name(_name), grade(grade_)
{
	if (this->getGrade() < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	if (this->getGrade() > 155)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& other):name(other.name)
{
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	grade = other.grade;
	return *this;
}

const std::string Bureaucrat::getName() const
{
	return name;
}

int	Bureaucrat::getGrade() const
{
	return grade;
}

Bureaucrat::~Bureaucrat(){};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &burea)
{
	out << burea.getName() << " bureaucrat grade " << burea.getGrade();
	out << "\n";
	return out;
}

void	Bureaucrat::decGrade()
{
	grade += 1;
	if (this->getGrade() > 155)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

void	Bureaucrat::incGrade()
{
	grade -= 1;
	if (this->getGrade() < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
}

void	Bureaucrat::signForm(Form& forma) const
{
	if (this->getGrade() > forma.getGrade_to_sign())
	{
		std::cout << "Bureaucrat " << this->getName();
		std::cout << " can't signs this form,";
		std::cout << " because of low grade\n";
		return ;
	}
	forma.setSign(true);
	std::cout << "Bureaucrat " << this->getName();
	std::cout << " signs " <<forma.getName() << " \n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error : Too low grade");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error : Too high grade");
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " can\'t execute ";
		std::cout << form.getName() << "\n";
		return ;
	}
	std::cout << this->getName() << " executes ";
	std::cout << form.getName() << "\n";
}