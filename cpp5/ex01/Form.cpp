#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
{
    std::cout << "Default Constructor Called" << std::endl;
    Is_signed = false;
}

Form::Form(const std::string& newName, int new_execute_Grade, int new_sign_Grade)
{
    std::cout << "Parametrise Constructor Called" << std::endl;
    Is_signed = false;
    name = newName;
    execute_grade = new_execute_Grade;
    sign_grade = new_sign_Grade;

}

Form &Form::operator=(const Form &copy)
{
    std::cout << "Form copy assignment operator called" << std::endl;
    this->sign_grade = copy.sign_grade;
    this->execute_grade = copy.execute_grade;
    this->name = copy.name;
    return *this;
}

Form::Form(const Form &New_Form)
{
    std::cout << "Form copy constructor called" << std::endl;
    *this = New_Form;
}

Form::~Form()
{
    std::cout << "Form Destructor Called" << std::endl;
}

void Form::set_execute_Grade(int new_execute_Grade)
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

void Form::set_sign_Grade(int new_sign_Grade)
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

int Form::get_sign_Grade()
{
    return this->sign_grade; 
}

int Form::get_execute_Grade()
{
    return this->execute_grade; 
}

void Form::increment_sign_Grade()
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

void Form::increment_execute_Grade()
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

void  Form::decrement_sign_Grade()
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

void  Form::decrement_execute_Grade()
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
bool Form::get_is_signed()
{
    return this->Is_signed;
}
std::string Form::get_Form_Name()
{
    return this->name;
}
void Form::set_Form_Name(std::string newName)
{
    name = newName;
}
void Form::beSigned(Bureaucrat& Bureaucrat)
{
    if (Bureaucrat.getGrade() <= sign_grade)
        Is_signed = true;
    else
        Is_signed = false;
}

void Form::display_Form_status()
{
    std::cout << "Form Name : " << name << std::endl;
    std::cout << "Sign Grade: " << sign_grade << std::endl ;
    std::cout << "Execute Grade:" << execute_grade<< std::endl;
    std::cout << "Is signed Value:" << Is_signed << std::endl;
}