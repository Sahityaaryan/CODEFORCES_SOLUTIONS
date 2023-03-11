#include<stdio.h>
int main(){
    int que=0;
    int a,b;scanf("%d %d",&a,&b);
    for(int i=1;i<=a;i++){
        int k=i*(i+1);
        int p=k/2;
        if((5*p + b)<= 240){
            que=i;
        }
    }
    printf("%d",que);
    return 0;
}