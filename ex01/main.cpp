#include "Bureaucrat.hpp"

int main( void )
{

	try {
		Bureaucrat bureaucrat("Bob ", 15);
		Form form("secret defense form",1);

		bureaucrat.signForm(form);

		std::cout << form << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
