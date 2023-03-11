#include<stdio.h>
int main(){
    int offi=0,count=0;
    int n;scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a;scanf("%d",&a);
        if(a==-1){
            offi+=a;
            if(offi<0){
                count++;
                offi=0;
                }
        }
        else{offi+=a;}
    }
    printf("%d",count);
    return 0;
}