#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat B;
    B.setName("BEE");
    B.setGrade(1);
    B.decrementGrade();
    B.getGrade();
    B.getName();
    B.display_Bureaucrat_status();
}