#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(){
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src){
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs){
	std::cout << "RobotomyRequestForm assignement constructor called" << std::endl;
	if (this != &rhs){
		AForm::operator=(rhs);
	}
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm(target, 72, 45){
  std::cout << "RobotomyRequestForm target constructor called" << std::endl;

}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}
