#include <stdio.h>
int main (){
    int i,j,arr[10],lim,a,temp;
    printf("ENTER LIMIT OF ARRAY");
    scanf("%d" , &lim);
    printf("ENTER VALUES OF ARRAY");
    for (i=0; i<lim ;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<lim-1;i++){
        for(j=0;j<lim-i-1;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("AFTER SORTING");
    for (i=0;i<lim;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
