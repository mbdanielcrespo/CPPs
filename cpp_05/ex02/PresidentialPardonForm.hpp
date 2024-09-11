#pragma once
#include <AForm.hpp>

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& cp);
		PresidentialPardonForm(const PresidentialPardonForm& cp);
		~PresidentialPardonForm();

		PresidentialPardonForm(const std::string& target);

		void execute(const Bureaucrat& executor) const;
};
