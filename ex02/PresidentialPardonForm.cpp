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