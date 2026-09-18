#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("Default"), _signGrade(MAX_GRADE), _execGrade(MAX_GRADE) {
	std::cout << "AForm default constructor called" << std::endl;

	this->_isSigned = false;
}

AForm::AForm(const AForm &src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade) {
	std::cout << "AForm copy constructor called" << std::endl;

	this->_isSigned = src._isSigned;
}

AForm &AForm::operator=(const AForm &rhs){
	if (this != &rhs){
		this->_isSigned = rhs._isSigned;
	}

	return (*this);
}

void AForm::beSigned(Bureaucrat &signer){
	if (((int)signer.getGrade()) > this->_signGrade){
		throw(AForm::GradeTooLowException());
	} else {
		this->_isSigned = true;
	}
}

std::ostream &operator<<(std::ostream &cout, const AForm &form){
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
AForm::AForm(const std::string &name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade){
  std::cout << "AForm parametric constructor called" << std::endl;

	this->_isSigned = false;

	if (signGrade < MIN_GRADE || execGrade < MIN_GRADE){
		throw (GradeTooHighException());// car il quitte directemetn et il envoie direct a un catch
    //GradeTooHighException();
	} else if (signGrade > MAX_GRADE || execGrade > MAX_GRADE){
		throw (GradeTooLowException());
	} 
}

const char *AForm::GradeTooHighException::what() const throw(){

	return ("Grade : grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw(){

	return ("Grade : grade is too low");
}

std::string AForm::getName() const{
	return (this->_name);
}

bool AForm::getIsSigned() const{
	return (this->_isSigned);
}

int AForm::getSignGrade() const{
	return (this->_signGrade);
}

int AForm::getExecGrade() const{
	return (this->_execGrade);
}

AForm::~AForm(){
	std::cout << "AForm destructor called" << std::endl;
}