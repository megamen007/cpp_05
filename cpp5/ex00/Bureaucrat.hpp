#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>
#include <string>
#include <fstream>
 
class Bureaucrat
{
    private:
        std::string name;
        int grade;
    public:
        //Canonical Form
        Bureaucrat();
        Bureaucrat(const std::string& newName, int newGrade);
        Bureaucrat(const Bureaucrat &New_Bureaucrat);
        Bureaucrat &operator=(const Bureaucrat &copy);
        ~Bureaucrat();
        //getters
        std::string getName();
        int getGrade();
        //setters
        void setName(std::string newName);
        void setGrade(int Grade);
        void decrementGrade();
        void incrementGrade();
        void display_Bureaucrat_status();
        //Custom exception class
        class GradeTooLowException{};
        //Insertion overload 
        std::ostream& operator<<(std::ostream& A) const
        {
            A << name << ", bureaucrat grade " << grade;
            return A;
        }
        
};

#endif