#pragma once
#include <AForm.hpp>

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& cp);
		RobotomyRequestForm(const RobotomyRequestForm& cp);
		~RobotomyRequestForm();

		RobotomyRequestForm(const std::string& target);

		void execute(const Bureaucrat& executor) const;
};
