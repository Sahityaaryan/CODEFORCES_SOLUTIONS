#include<stdio.h>
#include<limits.h>
int main(){
    int n;scanf("%d",&n);
   
    int arr[n];int count=0;
    for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
    for(int i=0;i<n;i++){
    int min=INT_MAX;
      int max=INT_MIN;
        for(int k=0;k<i;k++){
            if(min>arr[k]){min=arr[k];}
            if(max<arr[k]){max=arr[k];}
        }
        if(min>arr[i]){count++;}
        else if(max<arr[i]){count++;}  
        
    }
    printf("%d",(count-1));
    return 0;
}