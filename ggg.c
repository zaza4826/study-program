// 2/2/2021

#include <stdio.h>

void main(){
//-----ตัวแปร-----//
    float score;
//-----ตัวแปร-----//

//-----Input-----//
    printf("Input Your Score : ");
    scanf("%f",&score);
//-----Input-----//

//-----Process-----//
    if (score >= 80){
        printf("Grade A ");
    }else if(score >= 70)
    {
        printf("Grade B");
    }
    else if(score >= 60)
    {
        printf("Grade C");
    }else if(score >= 50)
    {
        printf("Grade D");

    }else if(score <= 49)
    printf("Grade F");
}