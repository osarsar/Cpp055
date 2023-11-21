#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string filename;
        
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const& obj);
        PresidentialPardonForm& operator=(PresidentialPardonForm const& obj);
        PresidentialPardonForm(std::string filname);
        void execute(Bureaucrat const & executor) const;
};