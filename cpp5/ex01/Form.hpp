#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
    private:
        std::string name;
        bool Is_signed;
        int  sign_grade;
        int  execute_grade;
    public:
        Form();
        Form(const std::string& newName,int execute_Grade, int new_sign_Grade);
        Form(const Form &New_Form);
        Form &operator=(const Form &copy);
        ~Form();
        //setters 
        void set_sign_Grade(int sign_Grade);
        void set_execute_Grade(int execute_Grade);
        void set_Form_Name(std::string newName);
        //getters
        bool get_is_signed();
        int get_sign_Grade();
        int get_execute_Grade();
        std::string get_Form_Name();
        //member functions
        void display_Form_status();
        void decrement_execute_Grade();
        void decrement_sign_Grade();
        void increment_sign_Grade();
        void increment_execute_Grade();
        void beSigned(Bureaucrat& Bureaucrat);
        //Custom Exception class
        class GradeTooHighException{};
        class GradeTooLowException{};
        //overload insertion
        std::ostream& operator<<(std::ostream& A) const
        {
            A << name << " Form name ";
            A << Is_signed << " signed status";
            A << sign_grade << " sign grade";
            A << execute_grade << "execute grade";
            return A;
        }
};

#endif