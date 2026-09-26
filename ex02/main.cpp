#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat boss("Bradley", 10);
	ShrubberyCreationForm form("home");

	try {
		form.beSigned(boss);
		form.execute(boss);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}