#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

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

	std::cout << "--- ShrubberyCreationForm ---" << std::endl;
	ft_ShrubberyCreationForm();

	std::cout << std::endl << "--- RobotomyRequestForm ---" << std::endl;
	ft_RobotomyRequestForm();

	std::cout << std::endl << "--- PresidentialPardonForm ---" << std::endl;
	ft_PresidentialPardonForm();

	std::cout << std::endl << "--- Bureaucrat ---" << std::endl;
	ft_Bureaucrat();

	return (0);
}