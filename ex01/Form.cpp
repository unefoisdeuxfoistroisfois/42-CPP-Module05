#include "Form.hpp"

Form::Form() : _name("Default"), _signGrade(MAX_GRADE), _execGrade(MAX_GRADE) {
	std::cout << "Form default constructor called" << std::endl;

	bool _isSigned = false;
}

Form::Form(const Form &src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade) {
	std::cout << "Form copy constructor called" << std::endl;

	this->_isSigned = src._isSigned;
}

Form &Form::operator=(const Form &rhs){
	if (this != &rhs){
		this->_isSigned = rhs._isSigned;
	}

	return (*this);
}

/**
 * A corriger
 */
std::ostream &operator<<(std::ostream &cout, const Form &form, const Bureaucrat &bureaucrat)
{
    cout << bureaucrat.getName() << ", form grade " << form.getGrade() << ".";

    return (cout);
}

/**
 * A continuer apres
 */
Form::Form(const std::string &name, int signGrade, int execGrade){
  std::cout << "Form parametric constructor called" << std::endl;

}

std::string Form::getName() const{
	return (this->_name);
}

bool Form::getIsSigned() const{
	return (this->_isSigned);
}

int Form::getSignGrade() const{
	return (this->_signGrade);
}

int Form::getExecGrade() const{
	return (this->_execGrade);
}

Form::~Form(){
	std::cout << "Form destructor called" << std::endl;
}