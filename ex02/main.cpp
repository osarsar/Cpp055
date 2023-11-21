#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() 
{
    ShrubberyCreationForm obj("home");
    RobotomyRequestForm robotomyForm("target");
    PresidentialPardonForm pardonForm("person");

    obj.action("home");
    robotomyForm.action("target");
    pardonForm.action("person");

    return 0;
}