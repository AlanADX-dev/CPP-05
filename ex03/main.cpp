#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
		Intern		someRandomIntern;
		AForm*		rrf;

		// rrf = someRandomIntern.makeForm("robotomy", "Bender");

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		delete rrf;
}
