#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form {

	private:
		const std::string	m_name;
		bool				m_sign;
		const int			m_gradeToSign;
		const int			m_gradeToExec;

	protected:

	public:
		Form();
		Form(const std::string& name, int gradeToSign);
		Form(const std::string& name, int gradeToSign, int gradeToExec);
		Form(const Form& src);
		~Form();

		Form& operator=(const Form& copy);

		std::string		getName() const;
		bool			getSign() const;
		int				getGradeToSign() const;
		int				getGradeToExec() const;

		void			beSigned(const Bureaucrat& bureaucrat);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {return "Grade too high\n";}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() throw () {return "Grade too low\n";}
		};

};

	std::ostream&	operator<<(std::ostream& out, const Form& copy);

#endif
