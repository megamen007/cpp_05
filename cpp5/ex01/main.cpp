#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Form A;
    Bureaucrat B;
    A.set_Form_Name("attestation");
    B.setName("Kane");
    A.set_execute_Grade(99);
    A.set_sign_Grade(77);
    B.setGrade(15);
    B.getGrade();
    B.getName();
    B.display_Bureaucrat_status();
    A.display_Form_status();
}