#include "Bureaucrat.hpp"

void testValidGrades(){
	std::cout << "\n=== VALID GRADES TEST ===" << std::endl;

	Bureaucrat highest("Alice", 1);
	Bureaucrat middle("Bob", 75);
	Bureaucrat lowest("Charlie", 150);

	std::cout << highest << std::endl;
	std::cout << middle << std::endl;
	std::cout << lowest << std::endl;
}

void testInvalidGrades(){
	std::cout << "\n=== INVALID GRADES TEST ===" << std::endl;

	try{
		Bureaucrat tooHigh("Dave", 0);
		std::cout << tooHigh << std::endl;
	}catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	try{
		Bureaucrat tooLow("Eve", 151);
		std::cout << tooLow << std::endl;
	}catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}

void testIncrement()
{
	std::cout << "\n=== INCREMENT TEST ===" << std::endl;

	Bureaucrat bureaucrat("Frank", 2);

	std::cout << "Before increment: " << bureaucrat << std::endl;
	bureaucrat.incrementGrade();
	std::cout << "After increment:  " << bureaucrat << std::endl;

	try{
		bureaucrat.incrementGrade();
	}catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}

void testDecrement()
{
	std::cout << "\n=== DECREMENT TEST ===" << std::endl;

	Bureaucrat bureaucrat("Grace", 149);

	std::cout << "Before decrement: " << bureaucrat << std::endl;
	bureaucrat.decrementGrade();
	std::cout << "After decrement:  " << bureaucrat << std::endl;

	try{
		bureaucrat.decrementGrade();
	}catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}

void testCopy()
{
	std::cout << "\n=== COPY TEST ===" << std::endl;

	Bureaucrat original("Helen", 42);

	std::cout << "\n--- Copy constructor ---" << std::endl;
	Bureaucrat copy(original);
	std::cout << "Original: " << original << std::endl;
	std::cout << "Copy:     " << copy << std::endl;

	std::cout << "\n--- Assignment operator ---" << std::endl;
	Bureaucrat assigned("Ivan", 100);
	assigned = original;
	std::cout << "Original: " << original << std::endl;
	std::cout << "Assigned: " << assigned << std::endl;
	// Le grade est copie, mais le nom reste Ivan car _name est const.
}

int main()
{
	testValidGrades();
	testInvalidGrades();
	testIncrement();
	testDecrement();
	testCopy();

	return (0);
}

