#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string filename;
        
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const& obj);
        RobotomyRequestForm& operator=(RobotomyRequestForm const& obj);
        RobotomyRequestForm(std::string filname);
        void execute(Bureaucrat const & executor) const;
};