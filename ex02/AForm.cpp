#include "AForm.hpp"

AForm::AForm() : name("HERO") , sgrade(1) , egrade(1)
{
    std::cout << "AForm: Constructor called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "AForm: Destructor called" << std::endl;
}
AForm::AForm(AForm const &obj) : name("HERO") ,sgrade(1) , egrade(1)
{
    std::cout << "AForm: Copy construtor called" << std::endl;
    *this = obj;
}

AForm& AForm::operator=(AForm const& obj)
{
    std::cout << "AForm: Copy assignment operator called" << std::endl;
    if (this != &obj)
    {}
        // this->egrade = obj.geteGrade();
        // this->sgrade = obj.getsGrade();
    return (*this);
}

std::ostream& operator<<(std::ostream &x, AForm const &obj)
{
    x << obj.getName() << " , AForm sgrade " << obj.getsGrade() << " , AForm egrade" << obj.getsGrade();
    return (x);
}

const std::string AForm::getName() const
{
    return (this->name);
}

int AForm::geteGrade(void) const
{
    return (this->egrade);
}

int AForm::getsGrade(void) const
{
    return (this->sgrade);
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("grade too High");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("grade too Low");
}
