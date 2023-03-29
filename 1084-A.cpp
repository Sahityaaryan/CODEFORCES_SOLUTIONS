#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        a=abs(a);
        b=abs(b);
        int steps=0;
        while(a!=0 && b!=0){
            a-=1;
            b-=1;
            steps+=2;
        }
        if(a==0 && b==0){
            cout<<steps<<"\n";
        }else{
            int axis=max(a,b);
            cout<<steps+2*axis-1<<"\n";
        }

    }
    return 0;
}