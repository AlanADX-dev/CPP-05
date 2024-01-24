#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5), m_target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm(src), m_target(src.m_target)
{

}
PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& copy)
{
	return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	 if ( executor.getGrade() > this->getGradeToExec() )
        throw AForm::GradeTooLowException();
    else {
	std::cout << m_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}
