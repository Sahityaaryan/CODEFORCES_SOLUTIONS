#include<stdio.h>
int main(){
    int k;scanf("%d",&k);
    for(int i=0;i<k;i++){
        int n;scanf("%d",&n);
        int a=n/2 +1;
        int b=n-a;
        printf("%d\n",b);
    }
    return 0;
}