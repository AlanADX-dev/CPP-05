#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern& src)
{
	*this = src;
}

Intern& Intern::operator=(const Intern& copy)
{
	return (*this);
}

Intern::~Intern()
{

}

AForm*		Intern::makeForm(std::string name, std::string target)
{
	std::string formNames[] = {
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	};
	AForm*	forms[] = {
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target),
		new ShrubberyCreationForm(target)
	};

	AForm* result = nullptr;

	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			result = forms[i];
			forms[i] = nullptr;
			break;
		}
	}
	for (int i = 0; i < 3; i++)
			delete forms[i];
	if (!result)
	{
		std::cout << "Intern cannot create " << name << " form" << std::endl;
	}

	return result;
}



