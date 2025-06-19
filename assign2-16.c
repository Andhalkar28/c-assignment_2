// 16. Write a program to accept marks for three subjects and find the total marks secured , average and also display the class obtained. (Class I – above %, class II – % to %, pass class – % to % and fail otherwise)
#include <stdio.h>
#include<string.h>

int main()
{
    int roll;
    char sub1[100], sub2[100], sub3[100], name[100], grade[20];
    float m1, m2, m3, total, avg;

    // accepting sub & their marks
    printf("Enter Student Detail \n");
    printf("Enter Roll No: \n");
    scanf("%d", &roll);

    printf("Enter Student Name : \n");
    scanf("%s", &name);

    printf("Enter Subjrct 1 : \n");
    scanf("%s", &sub1);
    printf("Enter Subjrct 2 : \n");
    scanf("%s", &sub2);
    printf("Enter Subjrct 3 : \n");
    scanf("%s", &sub3);

    printf("Enter Marks 1 : \n");
    scanf("%f", &m1);
    printf("Enter Marks 2 : \n");
    scanf("%f", &m2);
    printf("Enter Marks 3 : \n");
    scanf("%f", &m3);
    // logic part here using if else ladder

    total = m1 + m2 + m3;
    avg = total / 3;

    if (avg <= 100 && avg > 90)
        strcpy(grade , "CLASS-I");

    else if (avg < 90 && avg > 80)
        strcpy(grade , "CLASS-II");

    else if (avg < 80 && avg > 70)
       strcpy( grade , "CLASS-III");

    else if (avg < 70 && avg > 50)
       strcpy( grade , "CLASS-IV");

    else if (avg < 50 && avg > 35)
       strcpy( grade , "CLASS-PASS");

    else
        strcpy(grade , "FAIL !!! ");

    // printing all sub marks and avg ,total & grade

    printf("roll no: %d", roll);
    printf("\n NAME: %s", name);

    printf("\n SUBJECT 1: %s", sub1);
    printf("\n SUBJECT 2: %s", sub2);
    printf("\n SUBJECT 3: %s", sub3);

    printf("\n MARKS 1: %.2f", m1);
    printf("\n MARKS 2: %.2f", m2);
    printf("\n MARKS 3: %.2f", m3);

    printf("\n TOTAL :%.2f", total);
    printf("\n AVERAGE :%.2f", avg);
    printf("\n GRADE :%s", grade);

    return 0;
}