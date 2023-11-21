#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm: Constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm: Destructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string filename)
{
    this->filename = filename;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
{
    std::cout << "ShrubberyCreationForm: Copy construtor called" << std::endl;
    *this = obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& obj)
{
    std::cout << "ShrubberyCreationForm: Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->filename = obj.filename;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::ofstream file(executor.getName() + "_shrubbery");

    if (file.is_open())
    {
        file << "ASCII trees\n";
        file.close();
    }
    else
        std::cout << "Error: open file failed" << std::endl;
}