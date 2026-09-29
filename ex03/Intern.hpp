#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

class Intern{
	private : 

	public : 
		Intern();
		Intern(const Intern &src);
		Intern &operator=(const Intern &rhs);
		~Intern();

		// Fonctions
		AForm *makeForm(const std::string &nameForm, const std::string &targetForm);
};

#endif