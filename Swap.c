#include<stdio.h>
int main(){
    int a=4;
    int b=2;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("value of a after swaping:=%d\n",a);
    printf("value of b after swaping:=%d\n",b);
    return 0;
}
