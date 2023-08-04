#include <stdio.h>
int main (){
    int i,res=0,num,rem ,orgNum;
    printf("ENTER A NUMBER\n ");
    scanf("%d" ,&num);
    orgNum=num;
    i=0;
    while (num !=0) {
        rem = num % 10;
        res+= (rem*rem*rem);
        num/=10;
        i++;
}

    if (res == orgNum){
        printf("THE GIVEN NUMBER IS AMSTRONG \n");
    }else {
        printf("THE NUMBER IS NOT AMSTRONG \n");
}
    return 0;
}
