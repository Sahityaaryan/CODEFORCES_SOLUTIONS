// #include <iostream>
// using namespace std;
// int main(){
//      int n;
//     int k;
//     cin>>n;
//      k=n;
    
    
//     int count=0,size;
//     while(n>0){
//         count++;
//         n=n/2;
//     } 

//     size=count;
    
//     int arr[count];
//     while(k>0){
//         arr[count-1]=k%2;
//         count--;
//         // cout<<arr[count-1];
//         k/=2;
//     }


//     int ind=0;
//     while(ind<size){
//         cout<<arr[ind];
//         ind++;
//     }
    
//     return 0;
// }

//much more effickient code by mam

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int ans=0;
    int power=1;
    while(n>0){
        int last_parity=n%2;
        ans+=last_parity*power;
        power*=10;
        n/=2;
    }
    cout<<ans;
            
    return 0;
}