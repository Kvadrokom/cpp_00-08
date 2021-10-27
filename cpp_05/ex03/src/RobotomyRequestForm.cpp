#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target_):Form("RobotomyRequestForm",
											72, 45) 
{
	this->setTarget(target_);
};

void	RobotomyRequestForm::action(void) const
{
	std::srand(std::time(nullptr));
	bool	ran = rand()%2;
	std::cout << "\"Some drilling noises\"\n";
	ran == true ? std::cout << this->getTarget() << " has been robotomized successfully\n" : 
	std::cout << "It’s a failure\n";;
}

RobotomyRequestForm::~RobotomyRequestForm(){};

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &R)
{
	this->setSign(R.getSign());
	this->setTarget(R.getTarget());
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &R)
{
	this->setSign(R.getSign());
	this->setTarget(R.getTarget());
}
