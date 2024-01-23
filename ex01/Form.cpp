#include "Form.hpp"

Form::Form(const std::string& name, int gradeTosign) : m_name(name), m_gradeToSign(gradeTosign), m_gradeToExec(0)
{
	if (gradeTosign < 1)
		throw Form::GradeTooHighException();
	if (gradeTosign > 150)
		throw Form::GradeTooLowException();
}
// Form::Form(const std::string& name, int gradeTosign, int gradeToExec) : m_name(name), m_gradeToSign(gradeTosign), m_gradeToExec(gradeToExec)
// {
// 	if (gradeTosign < 1)
// 		throw Form::GradeTooHighException();
// 	if (gradeTosign > 150)
// 		throw Form::GradeTooLowException();
// 	if (gradeToExec < 1)
// 		throw Form::GradeTooHighException();
// 	if (gradeToExec > 150)
// 		throw Form::GradeTooLowException();
// }

Form::Form(const Form& src) : m_name(src.m_name), m_gradeToSign(src.m_gradeToSign), m_gradeToExec(src.m_gradeToExec)
{

}
Form::~Form()
{

}

Form& Form::operator=(const Form& copy)
{
	if (this != &copy)
		m_sign = copy.getSign();
	return *this;
}

std::string		Form::getName() const
{
	return m_name;
}

bool			Form::getSign() const
{
	return m_sign;
}

int				Form::getGradeToSign() const
{
	return m_gradeToSign;
}

int				Form::getGradeToExec() const
{
	return m_gradeToExec;
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > m_gradeToSign)
		throw Form::GradeTooLowException();
	m_sign = true;
}

std::ostream&	operator<<( std::ostream& out, const Form& copy ) {
	out << "Form name: " << copy.getName() << std::endl
	<< "Grade to sign: " << copy.getGradeToSign() << std::endl
	<< "Grade to execute: " << copy.getGradeToExec();
	return out;
}
