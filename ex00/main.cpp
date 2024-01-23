#include "Bureaucrat.hpp"

int		main()
{
	try {
		Bureaucrat bureaucrat("Bob", 150);

		std::cout << bureaucrat << std::endl;
		bureaucrat.decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
}
