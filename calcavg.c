//THIS IS A VERY SIMPLE APP 
//#C
//this app can find avg of 3 scores only.
//#c Projects(easy)

#include<stdio.h>
#include<stdlib.h>

void avg(int *x , int *y , int *z);

int main (void) {
    printf("CALC THE AVG OF 3 NUMBERS USINF POINTERS AND FUNCTIONS") ; 


    int a = 99; 
    int b = 100 ;
    int c = 98 ; 
    
    printf("\n\nANSWER:-") ; 
 avg(&a , &b , &c);


}

void avg(int *x , int *y , int *z) {
    int sum = *x + *y + *z ;
    int calc = sum/3 ;
    printf("\n%i\n", calc) ;
}
