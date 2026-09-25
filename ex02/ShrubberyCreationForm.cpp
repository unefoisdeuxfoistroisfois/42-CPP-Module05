#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(){
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src){
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs){
	std::cout << "ShrubberyCreationForm assignement constructor called" << std::endl;
	if (this != &rhs){
		AForm::operator=(rhs);
	}
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm(target + "_shrubbery", 145, 137){
  std::cout << "ShrubberyCreationForm target constructor called" << std::endl;

}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}
