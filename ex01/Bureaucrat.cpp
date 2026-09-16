#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(MAX_GRADE) { // les const toujours en liste
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

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name){
  std::cout << "Bureaucrat parametric constructor called" << std::endl;

	if (grade < MIN_GRADE){
		throw (GradeTooHighException());// car il quitte directemetn et il envoie direct a un catch
    //GradeTooHighException();
	} else if (grade > MAX_GRADE){
		throw (GradeTooLowException());
	} else{
		this->_grade = grade;
	}
}

std::ostream &operator<<(std::ostream &cout, const Bureaucrat &bureaucrat){
    cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";

    return (cout);
}


const char *Bureaucrat::GradeTooHighException::what() const throw(){

	return ("Bureaucrat : grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){

	return ("Bureaucrat : grade is too low");
}

void	Bureaucrat::incrementGrade(){

	if (_grade - 1 < MIN_GRADE){
		throw (GradeTooHighException());
	} else{
		this->_grade = this->_grade - 1;
	}
}

void Bureaucrat::decrementGrade(){
	if (this->_grade + 1 > MAX_GRADE){
		throw (GradeTooLowException());
	} else{
		this->_grade = this->_grade + 1;
	}
}

// getter
const std::string	Bureaucrat::getName() const{

	return (this->_name);
}

size_t	Bureaucrat::getGrade() const{

	return (this->_grade);
}

Bureaucrat::~Bureaucrat(){

	std::cout << "Bureaucrat destructor called" << std::endl;
}