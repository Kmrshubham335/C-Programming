#include<stdio.h>
int main(){
    int mark;
    char grade;
    printf("Enter the mark");
    scanf("%d",&mark);
    switch (mark/10)
    {
        case 9:
        case 10:
        grade='O';
        break;
        case 8:
        grade='E';
        break;
        case 7:
        grade='A';
        break;
        case 6:
        grade='B';
        break;
        case 5:
        grade='C';
        break;
        case 4:
        grade='D';
        break;
    default:
    grade='F';
        break;
    }
    printf("Grade=%c",grade);
    return 0;
}