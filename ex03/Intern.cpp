#include "Intern.hpp"

Intern::Intern(){
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &src){
	std::cout << "Intern copy constructor called" << std::endl;

	*this = src;
}

Intern &Intern::operator=(const Intern &rhs){
	std::cout << "Intern assignment operator called" << std::endl;

	if (this != &rhs){
		return (*this);
	}
	return (*this);
}

/*
AForm *createShrubbery(const std::string &target){
	ShrubberyCreationForm form(target);   // 1 créé ici, sur la pile
	return (&form);                        // 2 on retourne son adresse
	// 3 la fonction se termine ici
}
*/
// new allocation + héritage pour garder l'objet vivant

AForm *createPardon(const std::string &targetForm){
	return (new PresidentialPardonForm(targetForm));
}

AForm *createRobotomy(const std::string &targetForm){
	return (new RobotomyRequestForm(targetForm));
}

AForm *createShrubbery(const std::string &targetForm){
	return (new ShrubberyCreationForm(targetForm));
}

//int (*adf)(char, double);        // UN pointeur de fonction
//int (*adf[3])(char, double) = { &add, &sub, &mul };     // un TABLEAU de 3 pointeurs de fonction
AForm *Intern::makeForm(const std::string &nameForm, const std::string &targetForm){
	//tableau 1
	AForm *(*tabForm[3])(const std::string &) = {
		&createShrubbery,
		&createRobotomy,
		&createPardon
	};

	//tableau 2
	const std::string tabNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	for (int i = 0; i < 3; i++){
		if (nameForm == tabNames[i]){
			AForm *form = tabForm[i](targetForm);
			std::cout << " Intern creates " << nameForm << std::endl;
			return (form);
		}
	}
	std::cout << "Intern cannot create unknown form: " << nameForm << std::endl;
	return (NULL);
}

Intern::~Intern(){
	std::cout << "Intern destuctor called" << std::endl;
}