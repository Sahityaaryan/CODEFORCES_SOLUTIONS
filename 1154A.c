#include<stdio.h>
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    //bubble sort
    for(int k=0;k<4;k++){
        for(int i=0;i<4;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    }
   int a= -arr[3] + (arr[0] + arr[2]);
   int b= -arr[3] + (arr[1] + arr[2]);
   int c= -arr[3] + (arr[1] + arr[0]);
   
   printf("%d %d %d",a,b,c);
    return 0;
}