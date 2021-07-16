#include <stdio.h>

void main(){

int num ; //ตัวแปร
int i2 ;

// Process//
    printf("Input number : ");
    scanf("%d" ,&num);

    printf("Input number : ");
    scanf("%d" ,&i2);

for(int i=1 ;i <= i2 ; i++){

    printf("\n%d * %d   =  %d",num,i,num*i);
}
// Process//

}