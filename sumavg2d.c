#include<stdio.h>
int main(){
    int arr[5][5],r,c,i,j;
    float sum;  
    printf("Enter rows and columns");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the element in array");
            scanf("%d ",&arr[i][j]);
        }
    }
    sum=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum =sum +arr[i][j];
        }
    }
    float avg=0;
    float count = r*c;
    avg = sum/count;
    printf("%f is sum\n",sum);
    printf("%f is average",avg);
    return 0;
}

