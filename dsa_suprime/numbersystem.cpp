#include<iostream>
#include<cmath>
using namespace std;


  int binarytodecimal(int n){
    int ans;
    int i = 0; 
    while(n > 0){

    int bit = n % 10;
    ans = bit*pow(2,i++) + ans;
    n = n/10;
    }
    return ans;

  }


// int decimaltobinary(int n){   // divison method
 
//     int binaryno = 0;
//     int i =0;
//     while(n > 0){
//         int bit = n % 2;
        
//         binaryno = bit*pow(10,i++) + binaryno;
//         n = n/2;
//     }
//     return binaryno;

// }

  // bitwise method

//   int decimaltobinarym2(int n){
//     int ans;
//     int i = 0; 
//     while(n > 0){

//     int bit = n & 1;
//     ans = bit*pow(10,i++) + ans;
//     n = n>>1;
//     }
//     return ans;

//   }
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
     
    cout<<"number is : "<< binarytodecimal(n)<<endl;



    // cout << " number is " << decimaltobinarym2(n);




    // int num;
    // num = decimaltobinary(n);
    // cout<< "number is :"<< num <<endl;

    return 0;
    
}