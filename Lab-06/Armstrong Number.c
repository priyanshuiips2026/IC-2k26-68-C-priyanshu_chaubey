#include <stdio.h>

int main() {
    int n , rem ,temp , sum=0 ;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        rem = temp%10;
        sum=sum+rem*rem*rem;
        temp= temp/10;
    }
    if(sum==n){
      printf("It is a armstrong number ");
    }
    else
        printf("its is not a armstrong number ");

    
    return 0;
}
