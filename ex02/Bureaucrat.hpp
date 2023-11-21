#pragma once

#include <iostream>
#include <fstream>

class Bureaucrat
{
    private:
        const std::string   name;
        int grade;

    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const &obj);
        Bureaucrat& operator=(Bureaucrat const &obj);

        const std::string getName() const;
        int getGrade() const;
        void setGrade(int grade);

        void incre_grade(void);
        void decre_grade(void);
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
};

std::ostream& operator<<(std::ostream &x, Bureaucrat const &obj);


//const
//const name