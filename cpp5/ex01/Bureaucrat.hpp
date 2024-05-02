#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form;

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
        void signForm(Form& form);
        //overload insertion
        std::ostream& operator<<(std::ostream& A) const
        {
            A << name << ", bureaucrat grade " << grade;
            return A;
        }
};

#endif