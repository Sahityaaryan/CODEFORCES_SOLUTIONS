#include<stdio.h>
#include<limits.h>
int main(){
    int a,b;scanf("%d %d",&a,&b);
    for(int i=1;i<INT_MAX;i++){
        if((i*a)%10==0){printf("%d",i);break;}
        else{
            int t=(i*a)-b;
            if(t%10==0){printf("%d",i);break;}
        }
    }
    return 0;
}