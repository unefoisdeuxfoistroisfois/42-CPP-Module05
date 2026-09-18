#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Default"), _signGrade(MAX_GRADE), _execGrade(MAX_GRADE) {
	std::cout << "Form default constructor called" << std::endl;

	this->_isSigned = false;
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

void Form::beSigned(Bureaucrat &signer){
	if (((int)signer.getGrade()) > this->_signGrade){
		throw(Form::GradeTooLowException());
	} else {
		this->_isSigned = true;
	}
}

std::ostream &operator<<(std::ostream &cout, const Form &form){
	cout << form.getName() << ", form signed: ";
	if (form.getIsSigned() == true){
		cout << "yes";
	} else {
		cout << "no";
	}
	cout << ", sign grade: " << form.getSignGrade()
			 << ", exec grade: " << form.getExecGrade();

	return (cout);
}

/**
 * A continuer apres
 */
//Form f("Contrat", 50, 30);   // Il faut imaginer les donnees entré par l'user
Form::Form(const std::string &name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade){
  std::cout << "Form parametric constructor called" << std::endl;

	this->_isSigned = false;

	if (signGrade < MIN_GRADE || execGrade < MIN_GRADE){
		throw (GradeTooHighException());// car il quitte directemetn et il envoie direct a un catch
    //GradeTooHighException();
	} else if (signGrade > MAX_GRADE || execGrade > MAX_GRADE){
		throw (GradeTooLowException());
	} 
}

const char *Form::GradeTooHighException::what() const throw(){

	return ("Grade : grade is too high");
}

const char *Form::GradeTooLowException::what() const throw(){

	return ("Grade : grade is too low");
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