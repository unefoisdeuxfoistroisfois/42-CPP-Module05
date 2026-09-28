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

void RobotomyRequestForm::execute(const Bureaucrat &executor) const{
	if (this->getIsSigned() == false)// on appel la get car c'est un private meme si il en herite et aussi this car on herite
		throw (AForm::NotSignedException());
	if ((int)executor.getGrade() > this->getExecGrade())
		throw (AForm::GradeTooLowException());
	else {
		std::cout << "*** VRRRRRRRR ***" << std::endl;
		if (std::rand() % 2 == 1){
			std::cout << this->getName() << " has been robotomized successfully" << std::endl;;
		} else {
			std::cout << " Robotomized failed " << std::endl;
		}
	}
}

