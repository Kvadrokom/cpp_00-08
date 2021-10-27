#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target_):Form("ShrubberyCreationForm",
											145, 137)
{
	this->setTarget(target_);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){};

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &R)
{
	this->setSign(R.getSign());
	this->setTarget(R.getTarget());
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &R)
{
	this->setSign(R.getSign());
	this->setTarget(R.getTarget());
}

void	ShrubberyCreationForm::action(void) const
{
	std::ofstream	fout;
	fout.open(getTarget() + "_shrubbery");
	std::string tree[10] = {     
"			  /\\      ",
"		     /\\*\\     ",
"		    /\\O\\*\\    ",
"		   /*/\\/\\/\\   ",
"		  /\\O\\/\\*\\/\\  ",
"		 /\\*\\/\\*\\/\\/\\ ",
"		/\\O\\/\\/*/\\/O/\\  ",
"		      ||      ",
"		      ||      ",
"		      ||      ",
	};
	for (size_t i = 0; i < 10; i++)
	{
		fout << tree[i];
		fout << "\n";
	}
	fout.close();
}
