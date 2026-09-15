#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat {
	private : 
		const std::string _name;
		size_t _grade;

		static const int MIN_GRADE = 1;
		static const int MAX_GRADE = 150;

	public : 
		Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat &operator=(const Bureaucrat &rhs);

		Bureaucrat(const std::string &name, int grade);
		void incrementGrade();
		void decrementGrade();

		//get
		const std::string getName(void)const;
		size_t getGrade(void)const;

		// Exceptions
		class GradeTooHighException : public std::exception{
			public:
				virtual const char *what() const throw();
				//const char * what() const exemple du livre.
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char *what() const throw();
				//const char * what() const exemple du livre.
		};

		~Bureaucrat();
};

//  car bureaucrat << cout n'existe pas
std::ostream &operator<<(std::ostream &cout, const Bureaucrat &bureaucrat);

#endif