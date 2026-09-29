#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <ctime>

void ft_Intern(){
//	Intern someRandomIntern;
//	AForm* rrf;
//
//	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	Bureaucrat boss("Bradley", 10);
	Intern stagiaire;

	AForm *form1 = stagiaire.makeForm("robotomy request", "Bender");

	if (form1){
		boss.signForm(*form1);
		boss.executeForm(*form1);
		delete (form1);
	}

	AForm *form2 = stagiaire.makeForm("random form", "Clown");
	if (form2 == NULL){
		std::cout << "form2 est bien NULL" << std::endl;
	} else {
		delete (form2);
	}
	// doit retouner NULL
}

void ft_Bureaucrat(){
	Bureaucrat boss("Bradley", 10);
	ShrubberyCreationForm form("garden");

	boss.signForm(form);
	boss.executeForm(form);
}

void ft_PresidentialPardonForm(){
	Bureaucrat boss("Bradley", 10);
	PresidentialPardonForm form("Arthur Dent"); // ? est ce qu'il a un grade suffisant pour executer l'action du formulaire

	try {
		form.beSigned(boss);
		form.execute(boss);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void ft_RobotomyRequestForm(){
	Bureaucrat boss("Bradley", 10);
	RobotomyRequestForm form("Bender");

	try {
		form.beSigned(boss);
		form.execute(boss);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void ft_ShrubberyCreationForm(){
	Bureaucrat boss("Bradley", 10);
	ShrubberyCreationForm form("home");

	try {
		form.beSigned(boss);
		form.execute(boss);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
  std::srand(std::time(NULL));

//	std::cout << "--- ShrubberyCreationForm ---" << std::endl;
//	ft_ShrubberyCreationForm();
//
//	std::cout << std::endl << "--- RobotomyRequestForm ---" << std::endl;
//	ft_RobotomyRequestForm();
//
//	std::cout << std::endl << "--- PresidentialPardonForm ---" << std::endl;
//	ft_PresidentialPardonForm();
//
//	std::cout << std::endl << "--- Bureaucrat ---" << std::endl;
//	ft_Bureaucrat();

	ft_Intern();

	return (0);
}