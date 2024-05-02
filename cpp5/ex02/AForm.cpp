#include "AAForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
{
    std::cout << "Default Constructor Called" << std::endl;
    Is_signed = false;
}

AForm::AForm(const std::string& newName, int new_execute_Grade, int new_sign_Grade)
{
    std::cout << "Parametrise Constructor Called" << std::endl;
    Is_signed = false;
    name = newName;
    execute_grade = new_execute_Grade;
    sign_grade = new_sign_Grade;

}

AForm &AForm::operator=(const AForm &copy)
{
    std::cout << "AForm copy assignment operator called" << std::endl;
    this->sign_grade = copy.sign_grade;
    this->execute_grade = copy.execute_grade;
    this->name = copy.name;
    return *this;
}

AForm::AForm(const AForm &New_AForm)
{
    std::cout << "AForm copy constructor called" << std::endl;
    *this = New_AForm;
}

AForm::~AForm()
{
    std::cout << "AForm Destructor Called" << std::endl;
}

void AForm::set_execute_Grade(int new_execute_Grade)
{
    try
    {
        if (new_execute_Grade <= 150 && new_execute_Grade >= 1)
        {
            std::cout << "Grade are Approved ." << std::endl;
            this->execute_grade = new_execute_Grade;
        }
        else
            throw 999;
    }
    catch (int exception)
    {
        std::cout << " Execute Grade are not Approved ." << std::endl;
    }
}

void AForm::set_sign_Grade(int new_sign_Grade)
{
    try
    {
        if (new_sign_Grade <= 150 && new_sign_Grade >= 1)
        {
            std::cout << " Sign Grade are Approved ." << std::endl;
            this->sign_grade = new_sign_Grade;
        }
        else
            throw 999;
    }
    catch (int exception)
    {
        std::cout << "Grade are not Approved ." << std::endl;
    }
}

int AForm::get_sign_Grade()
{
    return this->sign_grade; 
}

int AForm::get_execute_Grade()
{
    return this->execute_grade; 
}

void AForm::increment_sign_Grade()
{   
    try
    {
        if (sign_grade > 1)
        {
            std::cout << "increment opperation are Approved ." << std::endl;
            sign_grade--;
        }
        else
            throw 999;
    }
    catch (int exception)
    {
        std::cout << "increment opperation are not Approved ." << std::endl;
    }
}

void AForm::increment_execute_Grade()
{   
    try
    {
        if (execute_grade > 1)
        {
            std::cout << "increment opperation are Approved ." << std::endl;
            execute_grade--;
        }
        else
            throw 999;
    }
    catch (int exception)
    {
        std::cout << "increment opperation are not Approved ." << std::endl;
    }
}

void  AForm::decrement_sign_Grade()
{
    try
    {
        if (sign_grade < 150)
        {
            std::cout << "decrement opperation are Approved ." << std::endl;
            sign_grade++;
        }
        else
            throw 999;
    }
    catch (int exception)
    {
        std::cout << "decrement opperation are not Approved ." << std::endl;
    }
}

void  AForm::decrement_execute_Grade()
{
    try
    {
        if (execute_grade < 150)
        {
            std::cout << "decrement opperation are Approved ." << std::endl;
            execute_grade++;
        }
        else
            throw 999;
    }
    catch (int exception)
    {
        std::cout << "decrement opperation are not Approved ." << std::endl;
    }
}
bool AForm::get_is_signed()
{
    return this->Is_signed;
}
std::string AForm::get_AForm_Name()
{
    return this->name;
}
void AForm::set_AForm_Name(std::string newName)
{
    name = newName;
}
void AForm::beSigned(Bureaucrat& Bureaucrat)
{
    if (Bureaucrat.getGrade() <= sign_grade)
        Is_signed = true;
    else
        Is_signed = false;
}

void AForm::display_AForm_status()
{
    std::cout << "AForm Name : " << name << std::endl;
    std::cout << "Sign Grade: " << sign_grade << std::endl ;
    std::cout << "Execute Grade:" << execute_grade<< std::endl;
    std::cout << "Is signed Value:" << Is_signed << std::endl;
}