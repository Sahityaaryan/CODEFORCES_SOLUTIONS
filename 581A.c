#include<stdio.h>
int main(){
    int min=-1;
    int a,b;scanf("%d %d",&a,&b);
    if(a>b){printf("%d",b);}
    else{printf("%d",a);}
    int  diff=b-a;
    if(diff<0){
        printf(" %d",(-diff)/2);
    }
    else{
        printf(" %d",(diff)/2);
    }
    return 0;
}