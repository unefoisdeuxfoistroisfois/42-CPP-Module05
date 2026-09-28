#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(){
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src){
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs){
	std::cout << "PresidentialPardonForm assignement constructor called" << std::endl;
	if (this != &rhs){
		AForm::operator=(rhs);
	}
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm(target, 25, 5){
  std::cout << "PresidentialPardonForm target constructor called" << std::endl;

}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const{
	if (this->getIsSigned() == false)// on appel la get car c'est un private meme si il en herite et aussi this car on herite
		throw (AForm::NotSignedException());
	if ((int)executor.getGrade() > this->getExecGrade())
		throw (AForm::GradeTooLowException());
	else {
		std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;;
	}
}