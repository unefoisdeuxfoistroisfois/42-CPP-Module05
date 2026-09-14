#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat {
	private : 
		const std::string _name;
		size_t _grade;

	public : 
		Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat &operator=(const Bureaucrat &rhs);

		Bureaucrat(std::string name, int grade);

		//get
		const std::string getName(void)const;
		const size_t getGrade(void)const;

		// Exceptions
		//class GradeTooHighException :: public std::exception{

		//}

		//class GradeTooLowException :: public std::exception{

		//}
		~Bureaucrat();
};

#endif