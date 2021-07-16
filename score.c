#include <stdio.h>
// ส่วนที่1 เรียก Library

void main()
{
    // ส่วนที่ 2 fn

    //---------ตัวแปร-------------//
        int   std1, std1_math, std1_programing, std1_science
            , std2, std2_math, std2_programing, std2_science
            , std3, std3_math, std3_programing, std3_science;

    //---------ตัวแปร--------------//

    //---------รับข้อมูล-------------//
        printf("********************************************\n");
        printf("Plaese input score same line \n");
        printf("Subject=> 1.Math 2.Programing 3.Science \n");
        printf("Student 1 :");
        scanf(" %d %d %d", &std1_math, &std1_programing, &std1_science);
        printf("Student 2 :");
        scanf(" %d %d %d", &std2_math, &std2_programing, &std2_science);
        printf("Student 3 :");
        scanf(" %d %d %d", &std3_math, &std3_programing, &std3_science);

    //---------รับข้อมูล-------------//

    //---------คำนวณ-------------//
        std1 = std1_math + std1_programing + std1_science;
        std2 = std2_math + std2_programing + std2_science;
        std3 = std3_math + std3_programing + std3_science;

    //-----------คำนวณ-------------//

    //---------แสดงผล-------------//
        printf("********************************************\n");
        printf("Total Score\n");
        printf("Student 1: %d\n", std1);
        printf("Student 2: %d\n", std2);
        printf("Student 3: %d\n", std3);
        printf("********************************************");
    //---------แสดงผล-------------//
}