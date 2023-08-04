#include <stdio.h>
int main (){
    int i,key,arr[10],lim,flag;
    printf("Enter a limit for array elements \n");
    scanf("%d",&lim);
    printf("Enter values for array \n");
    for (i=0 ;i<lim ;i++ ) {
        scanf("%d",&arr[i]);
}
    printf("Enter key to be searched\n");
    scanf("%d",&key);
    for (i=0;i<lim ;i++ ) {
        if (arr[i]==key) {
            printf("Element found at position number : %d " , i+1);
        }else {
            flag++;
        }
}
    if (flag==lim) {
    printf("Element not found in array within the limit");
}
    return 0;
}
