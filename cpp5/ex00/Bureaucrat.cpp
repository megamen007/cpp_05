#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& newName, int newGrade)
{
    std::cout << "Parametrise Constructor Called" << std::endl;
    name = newName;
    grade = newGrade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    std::cout << "Bureaucrat copy assignment operator called" << std::endl;
    this->grade = copy.grade;
    this->name = copy.name;
    return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &New_Bureaucrat)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = New_Bureaucrat;
}

void Bureaucrat::setName(std::string newName)
{
    name = newName;
}

std::string Bureaucrat::getName()
{
    return this->name;
}

void Bureaucrat::setGrade(int newGrade)
{
    try
    {
        if (newGrade <= 150 && newGrade >= 1)
        {
            std::cout << "Grade are Approved ." << std::endl;
            this->grade = newGrade;
        }
        else
            throw Bureaucrat::GradeTooLowException();
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
        std::cout << "Grade are not Approved ." << std::endl;
    }
}

int Bureaucrat::getGrade()
{
    return this->grade; 
}

void Bureaucrat::incrementGrade()
{   
    try
    {
        if (grade > 1)
        {
            std::cout << "Decrement opperation are Approved ." << std::endl;
            grade--;
        }
        else
            throw Bureaucrat::GradeTooLowException();
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
        std::cout << "Decrement opperation are not Approved ." << std::endl;
    }
}

void  Bureaucrat::decrementGrade()
{
    try
    {
        if (grade < 150)
        {
            std::cout << "decrement opperation are Approved ." << std::endl;
            grade++;
        }
        else
            throw Bureaucrat::GradeTooLowException();
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
        std::cout << "decrement opperation are not Approved ." << std::endl;
    }
}

void Bureaucrat::display_Bureaucrat_status()
{
    std::cout << "Name : " << name << "  //  " << "Grade : " << grade << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor Called";
}
