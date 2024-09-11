#include <AForm.hpp>
#include <fstream> 

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& cp);
		ShrubberyCreationForm(const ShrubberyCreationForm& cp);
		~ShrubberyCreationForm();

		ShrubberyCreationForm(const std::string& target);

		void execute(const Bureaucrat& executor) const;
};
