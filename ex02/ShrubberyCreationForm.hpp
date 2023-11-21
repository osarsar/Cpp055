#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string filename;
        
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const& obj);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const& obj);
        ShrubberyCreationForm(std::string filname);
        void execute(Bureaucrat const & executor) const;
};