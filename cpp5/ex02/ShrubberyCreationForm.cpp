#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145 , 137)
{
    std::cout << "Default Constructor Called" << std::endl;
    target = "Default" ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145 , 137)
{
    std::cout << "Parametrise Constructor Called" << std::endl;
    this->target = target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
    *this = copy ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &New_ShrubberyCreationForm)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    *this = New_ShrubberyCreationForm;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor Called" << std::endl;
}
