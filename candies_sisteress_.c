#include<stdio.h>
int main(){
   long int a;scanf("%ld",&a);
   int arr[a];
   for(long int i=0;i<a;i++){
     long int n;scanf("%ld",&n);
    //  if(n<=1){printf(arr[i]=0);continue;}
     if(n<=1){printf("\n0");continue;}
    int count=0;
    for(long int k=1;k<n;k++){
        int b=n-k;
        if(k>b){ count++;}
    }
    // if(count!=0){arr[i]=count;}
    if(count!=0){printf("%ld",count);}

   }
//    for(int i=0;i<a;i++){printf("\n%d",arr[i]);}
    return 0;
}