#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : m_name(name), m_grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : m_name(src.m_name), m_grade(src.m_grade)
{

}

Bureaucrat::~Bureaucrat()
{

}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	if (this != &copy)
		m_grade = copy.getGrade();
	return *this;
}

std::string		Bureaucrat::getName() const
{
	return m_name;
}

int		Bureaucrat::getGrade() const
{
	return m_grade;
}
void		Bureaucrat::incrementGrade()
{
	if (m_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	m_grade -= 1;
}

void		Bureaucrat::decrementGrade()
{
	if (m_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	m_grade += 1;
}
std::ostream&	operator<<(std::ostream& out, const Bureaucrat& copy)
{
	out << copy.getName() << ", bureaucrate grade " << copy.getGrade();
	return out;
}
