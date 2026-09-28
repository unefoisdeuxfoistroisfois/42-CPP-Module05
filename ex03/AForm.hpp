#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm{
	private :
		const std::string _name;
		bool _isSigned;
		const int _signGrade;
		const int _execGrade;

		static const int MIN_GRADE = 1;
		static const int MAX_GRADE = 150;

	public : 
		AForm();
		AForm(const AForm &src);
		AForm &operator=(const AForm &rhs);

		AForm(const std::string &name, int signGrade, int execGrade);

		//fontions
		void beSigned(Bureaucrat &signer);
		virtual void execute(const Bureaucrat &executor) const = 0; // classe abstraite

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

		class NotSignedException : public std::exception{
			public:
				virtual const char *what() const throw();
		};

		~AForm();
};

std::ostream &operator<<(std::ostream &cout, const AForm &form);

#endif