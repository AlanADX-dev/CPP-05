#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class	RobotomyRequestForm : public AForm {

	private:
		std::string		m_target;

	protected:

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& src);
		~RobotomyRequestForm();

		RobotomyRequestForm& operator=(RobotomyRequestForm& copy);

		void			execute(const Bureaucrat& executor) const;


};


#endif
