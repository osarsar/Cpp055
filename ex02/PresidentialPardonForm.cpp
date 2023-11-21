#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm: Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm: Destructor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string filename)
{
    this->filename = filename;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
{
    std::cout << "PresidentialPardonForm: Copy construtor called" << std::endl;
    *this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& obj)
{
    std::cout << "PresidentialPardonForm: Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->filename = obj.filename;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    std::cout << executor << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}