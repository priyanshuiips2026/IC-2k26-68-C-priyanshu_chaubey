#include <stdio.h>

int main() {
  int marks[5];
    for(int i=1;i<=5; i++ ){
        printf("Enter marks %d : ",i);
        scanf("%d",&marks[i]);
    }
    for(int i=1 ; i<=5 ; i++){
        printf("Marks %d : %d \n",i,marks[i]);
    }
    
    return 0;
}
