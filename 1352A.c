#include<stdio.h>
int main(){
   int r;scanf("%d",&r);
   for(int k=0;k<r;k++){
    int len=0;
     int n;scanf("%d",&n);
        //the tenth thousandth unit
    int th1=n/10000;
    int th2=th1*10000;
    int th3=n-th2;
    if(th1!=0){len++;}
    //the thoussandth unit
    int a1= th3/1000;
    int a2= a1*1000;
    int a3= th3-a2;
    if(a1!=0){len++;}
     //the hundreth unit
     int b1=a3/100;int b3 = b1*100;int b2=a3-b3;
      if(b1!=0){len++;}
      //the tenth unit
     int c1=b2/10;int c3 = c1*10;int c2=b2-c3;
      if(c1!=0){len++;}
     //the first unit=c2
        if(c2!=0){len++;}
    printf("%d\n",len);
    if(b1!=0){printf("%d ",b3);}
    if(th1!=0){printf("%d ",th2);}
    if(a1!=0){printf("%d ",a2);}
    if(c1!=0){printf("%d ",c3);}
    if(c2!=0){printf("%d ",c2);}
    printf("\n");
   }
    return 0;
}