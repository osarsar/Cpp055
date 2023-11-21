#include "Form.hpp"

Form::Form() : name("HERO") , egrade(1), sgrade(1) 
{
    std::cout << "Form: Constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Form: Destructor called" << std::endl;
}
Form::Form(Form const &obj)
{
    std::cout << "Form: Copy construtor called" << std::endl;
    *this = obj;
}

Form& Form::operator=(Form const& obj)
{
    std::cout << "Form: Copy assignment operator called" << std::endl;
    if (this != &obj)
        // this->egrade = obj.geteGrade();
        // this->sgrade = obj.getsGrade();
    return (*this);
}

std::ostream& operator<<(std::ostream &x, Form const &obj)
{
    x << obj.getName() << " , Form sgrade " << obj.getsGrade() << " , Form egrade" << obj.getsGrade();
    return (x);
}

const std::string Form::getName() const
{
    return (this->name);
}

const int Form::geteGrade(void) const
{
    return (this->egrade);
}

const int Form::getsGrade(void) const
{
    return (this->sgrade);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("grade too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("grade too Low");
}

void Form::beSigned(const Bureaucrat& b)
{
	if (this->sign)
		return;
	if (this->sgrade > b.getGrade())
		throw GradeTooLowException();
	this->sign = true;
};

void Form::signForm()
{
    if (this->sign)
        std::cout << "Signed" << std::endl;
    else
        std::cout << "couldn't sign" << std::endl;
}