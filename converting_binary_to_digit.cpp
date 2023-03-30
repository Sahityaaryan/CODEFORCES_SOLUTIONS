//my code __('really inefficient')

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//   cout<<"enter a number in binary=> ";
// int n;cin>>n;int k=n;
// int count=0;
//   while(n>0){
//     n/=10;
//     count++;
//   }
//   // cout<<count;
// int arr[count];

//   while(k>0){
//     static int l=0;
//     if(l<count){
//       int hg = k%10;
//      arr[l]=hg; 
//     l++;
//     }
//     k/=10;
//   }
//   int si=0;
//   int base_pow=0;
//   int num=0;
//   while(si<count){
//    int base = pow(2,base_pow);
//    int unit = arr[si]*base; 
//     si++;
//     base_pow++;
//     num+=unit;
//   }
//   cout<<"num=> "<<num;
// return 0;
// }


//efficient code by mam
#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n;cin>>n;
  int ans=0;
  int power=1;
  while(n>0){
    int lastDigit=n%10;
    ans+= lastDigit*power;
    power*=2;
    n/=10;
  }
cout<<ans<<"\n";
return 0;
}