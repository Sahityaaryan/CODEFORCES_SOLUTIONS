#include<stdio.h>
#include<math.h>
int main(){
   int arr[3];
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    //bubble sort
    for(int k=0;k<3;k++){
        for(int i=0;i<3;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    }
    int d1= arr[1]-arr[0];
    int d2= arr[2]-arr[1];    
    printf("%d",d1+d2);
    return 0;
}