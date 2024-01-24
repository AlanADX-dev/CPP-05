#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {

	private:

	protected:

	public:
		Intern();
		Intern(const Intern& src);
		~Intern();

		Intern& operator=(const Intern& copy);

		AForm*	makeForm(std::string Name, std::string target);
};

#endif
