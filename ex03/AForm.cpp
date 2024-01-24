#include "AForm.hpp"

AForm::AForm(const std::string& name, int gradeTosign, int gradeToExec) : m_name(name), m_gradeToSign(gradeTosign), m_gradeToExec(0)
{
	if (gradeTosign < 1)
		throw AForm::GradeTooHighException();
	if (gradeTosign > 150)
		throw AForm::GradeTooLowException();
}
// Aform::Aform(const std::string& name, int gradeTosign, int gradeToExec) : m_name(name), m_gradeToSign(gradeTosign), m_gradeToExec(gradeToExec)
// {
// 	if (gradeTosign < 1)
// 		throw Aform::GradeTooHighException();
// 	if (gradeTosign > 150)
// 		throw Aform::GradeTooLowException();
// 	if (gradeToExec < 1)
// 		throw Aform::GradeTooHighException();
// 	if (gradeToExec > 150)
// 		throw Aform::GradeTooLowException();
// }

AForm::AForm(const AForm& src) : m_name(src.m_name), m_gradeToSign(src.m_gradeToSign), m_gradeToExec(src.m_gradeToExec)
{

}
AForm::~AForm()
{

}

AForm& AForm::operator=(const AForm& copy)
{
	if (this != &copy)
		m_sign = copy.getSign();
	return *this;
}

std::string		AForm::getName() const
{
	return m_name;
}

bool			AForm::getSign() const
{
	return m_sign;
}

int				AForm::getGradeToSign() const
{
	return m_gradeToSign;
}

int				AForm::getGradeToExec() const
{
	return m_gradeToExec;
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > m_gradeToSign)
		throw AForm::GradeTooLowException();
	m_sign = true;
}

std::ostream&	operator<<( std::ostream& out, const AForm& copy ) {
	out << "Aform name: " << copy.getName() << std::endl
	<< "Grade to sign: " << copy.getGradeToSign() << std::endl
	<< "Grade to execute: " << copy.getGradeToExec();
	return out;
}
