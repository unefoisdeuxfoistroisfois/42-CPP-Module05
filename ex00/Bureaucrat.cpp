#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) { // les const toujours en liste
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name){
	std::cout << "Bureaucrat copy constructor called" << std::endl;

	this->_grade = src._grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs){
	std::cout << "Bureaucrat assignement operator called" << std::endl;

	if (this != &rhs){
		this->_grade = rhs._grade;
	}

	return (*this);
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name){

	if (grade < 1){
		throw (GradeTooHighException());
	} else if (grade > 150){
		throw (GradeTooLowException());
	} else{
		this->_grade = grade;
	}
}

std::ostream &operator<<(std::ostream &cout, Bureaucrat const &bureaucrat)
{
    cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";

    return (cout);
}

// getter
const std::string	Bureaucrat::getName() const{

	return (this->_name);
}

const size_t	Bureaucrat::getGrade() const{

	return (this->_grade);
}

Bureaucrat::~Bureaucrat(){

	std::cout << "Bureaucrat destructor called" << std::endl;
}

