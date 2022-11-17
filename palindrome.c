#include<stdio.h>
int main(){
    int n,temp,rev,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rev=n%10;
        sum=(10*sum)+rev;
        n=n/10;
    }
    if(temp==sum){
        printf("The number is palindrome number",sum);
    }
    else{
        printf("The number is not palindrome",sum);
    }
    return 0;
}