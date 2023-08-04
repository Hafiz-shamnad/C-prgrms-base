#include <stdio.h>
 
int main() {
    int a,b;
 
    printf("Enter Number : ");
    scanf("%d", &a);
    printf("Enter Another Number");
    scanf("%d",&b);
     
    if (a == b) {
        printf("Both of the numbers are equal");
    }
return 0;
}
