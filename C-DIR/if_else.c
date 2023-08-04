
#include <stdio.h>
 
int main() {
    int num1;
 
    printf("Enter Number : ");
    scanf("%d", &num1);
     
    if (num1%2 == 0) {
        printf("You entered an even number");
    } else {
        printf("You entered an odd number");
    }
return 0 ;   
}
