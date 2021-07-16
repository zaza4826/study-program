#include <stdio.h>
#include <string.h>   

int main(){

    struct student
    {
        char name[30];
        char lastname[30];
        int age;
    };

    struct classroom
    { 
        char name[30];
        char level[30];
        struct student std;
        
    };

    //Code//
    
    struct student std;
    strcpy(std.name,"Napop");
    strcpy(std.lastname,"Ponsen");
    std.age = 19;

    struct classroom class;
    strcpy(class.name,"CED");
    strcpy(class.level,"1");
    

    printf("Class Name       :  %s \n",class.name);
    printf("Level            :  %s \n",class.level);
    printf("Student Name     :  %s \n",std.name);
    printf("Student Lastname :  %s \n",std.lastname);
    printf("Student Age      :  %d \n",std.age);




    return 0;

}