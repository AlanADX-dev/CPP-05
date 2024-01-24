#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), m_target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : AForm(src), m_target(src.m_target)
{

}
RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& copy)
{
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	else
	{
		static int  i;
		if ( i % 2 == 0 )
			std::cout << "BRRRRRRRRRZZZZZZZZZZz " << m_target << " has been robotomized!" << std::endl;
		else
			std::cout << "Robotomy failed! " << m_target << " is still alive." << std::endl;
		i++;
	}
}
