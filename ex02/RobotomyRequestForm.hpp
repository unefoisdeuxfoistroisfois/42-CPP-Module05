#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>

class RobotomyRequestForm : public AForm{
	private :

	public :
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

		RobotomyRequestForm(const std::string &target);
		~RobotomyRequestForm();

		void execute(const Bureaucrat &executor) const;
};

#endif