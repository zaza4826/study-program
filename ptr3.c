#include<stdio.h>
int addfive(int *p){

   // printf("\nValue : %d ",*p+5);
    *p = *p+5;
    
    return *p;

}
void main(void){

int num = 5 ;

//addfive(&num);

printf("%d" , addfive(&num));

}