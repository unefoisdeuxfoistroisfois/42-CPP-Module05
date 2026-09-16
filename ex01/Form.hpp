#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form{
	private :
		const std::string _name;
		bool _isSigned;
		const int _signGrade;
		const int _execGrade;

		static const int MIN_GRADE = 1;
		static const int MAX_GRADE = 150;

	public : 
		Form();
		Form(const Form &src);
		Form &operator=(const Form &rhs);
		Form(const std::string &name, int signGrade, int execGrade);

		//fontions
		void beSigned(Bureaucrat &signer);

		//get
		std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

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

		~Form();
};

std::ostream &operator<<(std::ostream &cout, const Form &form);

#endif