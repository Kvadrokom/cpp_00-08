#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm(const std::string& target_):Form("PresidentialPardonForm",
											25, 5)
{
	this->setTarget(target_);
}

PresidentialPardonForm::~PresidentialPardonForm(){};

void	PresidentialPardonForm::action(void) const
{
	
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox\n";

}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &R)
{
	this->setSign(R.getSign());
	this->setTarget(R.getTarget());
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &R)
{
	this->setSign(R.getSign());
	this->setTarget(R.getTarget());
}
