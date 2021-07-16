#include <stdio.h>
#include <stdlib.h>

int main (){

struct student
{
    char name [30];
    int id;

};

struct student std, *prt;

prt = &std;

printf("Enter Student ID : ");
scanf("%d" , &prt -> id);
printf("\n ");

printf("Your student ID is pointer : %d", prt -> id);
printf("\n ");
printf("Your student ID is struct: %d", std.id);




}