#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm {

	private:
		const std::string	m_name;
		bool				m_sign;
		const int			m_gradeToSign;
		const int			m_gradeToExec;

	protected:

	public:
		AForm();
		AForm(const std::string& name, int gradeToSign);
		AForm(const std::string& name, int gradeToSign, int gradeToExec);
		AForm(const AForm& src);
		~AForm();

		AForm& operator=(const AForm& copy);

		std::string		getName() const;
		bool			getSign() const;
		int				getGradeToSign() const;
		int				getGradeToExec() const;

		void			beSigned(const Bureaucrat& bureaucrat);

		virtual void			execute(const Bureaucrat& executor) const = 0;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {return "Grade too high\n";}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {return "Grade too low\n";}
		};

		class NotSignedException : public std::exception {
			public:
				virtual const char* what() const throw() {return "Form not signed\n";}
		};

};

	std::ostream&	operator<<(std::ostream& out, const AForm& copy);

#endif
