#ifndef  ROBOTOMYREQUESTFORM_HPP
#define  ROBOTOMYREQUESTFORM_HPP

#include <iostream>

class RobotomyRequestForm{
	public :

	private :
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

		RobotomyRequestForm(const std::string &target);
		~RobotomyRequestForm();

};

#endif