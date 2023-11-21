#pragma once

#include "Bureaucrat.hpp"

class AForm
{
    private:
        const std::string name;
        bool sign;
        const int sgrade;
        const int egrade;
    
    public:
        AForm();
        ~AForm();
        AForm(AForm const &obj);
        AForm& operator=(AForm const &obj);

        const std::string getName() const;
        int getsGrade() const;
        int geteGrade() const;

        void beSigned(Bureaucrat obj);
        void signAForm(void);
        
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class UnsignedFormException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class UnauthorizedExecutionException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class UnauthorizedSignException  : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        virtual void execute(Bureaucrat const & executor) const = 0;
};
