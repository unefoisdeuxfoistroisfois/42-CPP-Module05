#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>

class ShrubberyCreationForm : public AForm {
	private :

	public :  
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

		ShrubberyCreationForm(const std::string &target);
		~ShrubberyCreationForm();

		void execute(const Bureaucrat &excutor) const;
};

#endif