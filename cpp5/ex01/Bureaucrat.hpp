#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <Form.hpp>
#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string& newName, int newGrade);
        Bureaucrat(const Bureaucrat &New_Bureaucrat);
        Bureaucrat &operator=(const Bureaucrat &copy);
        ~Bureaucrat();
        //setters
        void setGrade(int Grade);
        void setName(std::string newName);
        //getters
        int getGrade();
        std::string getName();
        //member functions
        void decrementGrade();
        void incrementGrade();
        void display_Bureaucrat_status();
        void beSigned(Bureaucrat A);
        void signForm(Form A);
};

#endif