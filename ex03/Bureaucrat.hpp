#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class	AForm;

class	Bureaucrat {

	private:
		const std::string	m_name;
		int					m_grade;

	protected:

	public:
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& src);
		~Bureaucrat();

		Bureaucrat& operator=(const Bureaucrat& copy);

		std::string		getName() const;
		int				getGrade() const;

		void			incrementGrade();
		void			decrementGrade();

		void			signForm(AForm& form);

		void			executeForm(const AForm& form) const;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {return "Grade too high\n";}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {return "Grade too low\n";}
		};
};

	std::ostream&	operator<<(std::ostream& out, const Bureaucrat& copy);

#endif
