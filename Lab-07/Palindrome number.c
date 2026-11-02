
#include <stdio.h>

int main() {
    int n,rem,temp, result=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        rem=temp%10;
        result = (result * 10) + rem;
        temp=temp/10;
    }
    if(result==n){
        printf("It is a palindrome number ");
    }
    else 
        printf("It is not a palindrome number ");
    
    
        
    

    
    return 0;
}
