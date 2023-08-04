#include <stdio.h>
 
int main(){
    float perimeter,length, width, area;
    printf("Enter length of Rectangle\n");
    scanf("%f", &length);
    printf("Enter width of Rectangle\n");
    scanf("%f", &width);
    area = length * width;
    printf("Area of Rectangle : %f\n", area);
    perimeter = 2*(length + width);
    printf("Perimeter of Rectangle : %f\n", perimeter); 
    return 0;
}
