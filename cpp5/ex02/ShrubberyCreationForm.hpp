#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
    //ShrubberyCreation canonical form
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string& newName,int execute_Grade, int new_sign_Grade);
    ShrubberyCreationForm(const ShrubberyCreationForm &New_ShrubberyCreationForm);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
    ~ShrubberyCreationForm();
}
#endif