#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm: Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm: Destructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string filename)
{
    this->filename = filename;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
{
    std::cout << "RobotomyRequestForm: Copy construtor called" << std::endl;
    *this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& obj)
{
    std::cout << "RobotomyRequestForm: Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->filename = obj.filename;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    std::cout << "Making drilling noises..." << std::endl;
    if (rand() % 2 == 0) 
        std::cout << executor << " has been robotomized successfully." << std::endl;
    else 
        std::cout << "Robotomy failed for " << executor << "." << std::endl;
}