#include "Bureaucrat.hpp"
#include "Form.hpp"

void testSignSuccess()
{
	std::cout << "\n=== SIGN SUCCESS TEST ===" << std::endl;

	Form form1("Contract", 50, 50);
	Bureaucrat boss("Bradley", 10);

	boss.signForm(form1);
}

void testSignFailure()
{
	std::cout << "\n=== SIGN FAILURE TEST ===" << std::endl;

	Form form1("Contract", 50, 50);
	Bureaucrat stagiaire("Divina", 100);

	stagiaire.signForm(form1);
}

void testSignExactGrade()
{
	std::cout << "\n=== SIGN EXACT GRADE TEST ===" << std::endl;

	Form form1("Contract", 50, 50);
	Bureaucrat exact("Exact", 50);

	exact.signForm(form1);
}

void testSignAlreadySigned()
{
	std::cout << "\n=== SIGN ALREADY SIGNED FORM TEST ===" << std::endl;

	Form form1("Contract", 50, 50);
	Bureaucrat boss("Bradley", 10);

	boss.signForm(form1);
	boss.signForm(form1);
}

void testInvalidFormCreation()
{
	std::cout << "\n=== INVALID FORM CREATION TEST ===" << std::endl;

	try{
		Form badForm1("Bad1", 0, 50);
	}catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	try{
		Form badForm2("Bad2", 50, 151);
	}catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}

void testFormDisplay()
{
	std::cout << "\n=== FORM DISPLAY TEST ===" << std::endl;

	Form form1("Contract", 50, 50);
	std::cout << form1 << std::endl;
}

int main()
{
	testSignSuccess();
	testSignFailure();
	testSignExactGrade();
	testSignAlreadySigned();
	testInvalidFormCreation();
	testFormDisplay();

	return (0);
}