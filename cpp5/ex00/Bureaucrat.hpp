#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

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
        std::string getName();
        void setGrade(int Grade);
        void setName(std::string newName);
        int getGrade();
        void decrementGrade();
        void incrementGrade();
        void display_Bureaucrat_status();
};

#endif