#include<stdio.h>
int main(){
    int n,temp,r,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum){
        printf("The number is Armstrong number",sum);
    }
    else{
        printf("The number is not Armstrong",sum);
    }
    return 0;
}