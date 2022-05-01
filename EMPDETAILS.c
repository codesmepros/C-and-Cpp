//Author: Vikram Srinivas
//#c 
//U CAN FETCH THE EMP DETAILS USING THIS APP 

#include<stdio.h>
#include<stdlib.h>

struct Emp{
    char name[50];
    char date[50];
    float salary; 

};

int main () {
    struct Emp emp = {"Mike" , "1/1/2022" , 32000.00f};

printf ("Emp name: %s", emp.name);
printf("\nEmp date: %s",emp.date ) ;
printf("\nEmp salary: %.2f", emp.salary);

printf("\nEnter EMP details:\n");
printf("Name:");
scanf("%s", emp.name) ;
printf("\nHire Date:");
scanf("%s", emp);
printf("\nSalary:");
scanf("%f", &emp.salary);


printf("\n YOU ENTERED:");

printf ("\n\nEmp name: %s", emp.name);
printf("\n\nEmp date: %s",emp.date ) ;
printf("\n\nEmp salary: %.2f", emp.salary);

return 0 ;
}
