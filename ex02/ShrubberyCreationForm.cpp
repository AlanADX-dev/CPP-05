#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), m_target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : AForm(src), m_target(src.m_target)
{

}
ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& copy)
{
	return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (this->getSign() == false)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	std::ofstream infile(this->getName() + "_shrubbery");

	infile << "     *     " << std::endl;
	infile << "    { }    " << std::endl;
	infile << "   {   }   " << std::endl;
	infile << "  {     }  " << std::endl;
	infile << "    | |    " << std::endl;
	infile << "    | |    " << std::endl;
}
