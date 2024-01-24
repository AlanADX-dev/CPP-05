#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class	PresidentialPardonForm : public AForm {

	private:
		std::string		m_target;

	protected:

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& src);
		~PresidentialPardonForm();

		PresidentialPardonForm& operator=(PresidentialPardonForm& copy);

		void			execute(const Bureaucrat& executor) const;


};


#endif
