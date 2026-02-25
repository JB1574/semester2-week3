
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Joel Benjamin
 * ID:201922915
 */
#include <stdio.h>
 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250; 
   float NI = 8;
   float Tax_rate = 15;

    // calculate the deductions and final take-home salary
   float NI_contribution = salary * (NI/100);
   float salary_with_NI = salary - NI_contribution; // money left after ni contritibution
   float money_left_tax = 0; // the money that is left that is to be taxed

   if (salary_with_NI>12500) {
      money_left_tax = salary_with_NI - 12500;
   }

   float tax_contribution = money_left_tax * (Tax_rate/100);
   float take_home_salary = salary_with_NI - tax_contribution;
    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",NI_contribution);
    printf("Tax contribution £%.2f\n",tax_contribution);
    printf("Take home salary £%.2f\n",take_home_salary);

    return 0;
 }