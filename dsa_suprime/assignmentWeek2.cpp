#include<iostream>
using namespace std;
int setKthBit(int N, int K)
    {
        int value ;
        int ans;
        value = 1<< K;
        ans = N | value;
        
        return ans;
        
    
}
int main(){

    int row ;
    int col,n;
     cout << "enter n :>";
    cin>>n;
    cout<< setKthBit(n,1) << endl;




    // int ans = 0;
    // while(n>0){
        
    //     int r = n%10;
    //     ans = ans*10 + r;
    //     n = n/10;

    // }
    // cout<<"reverse number is :"<< ans ;



     // solid half diamond
    // for(row = 0 ; row < n;row++){
    //     for(col = 0; col < row+1;col++){
    //         cout<<"*";
    //     }
        
    //     for(col =0; col < n-row;col++){
    //         cout<<" ";
    //     }
      
    //     cout<<endl;
    // }
    // for(row = 0 ; row < n;row++){
        
        
    //     for(col =0; col < n-row;col++){
    //         cout<<"*";
    //     }
      
    //     cout<<endl;
    // }


//      Q-3 numeric palindrome equilateral pyramid

//    for(row =0; row<n;row++){
//     for(col = 0 ; col < n-row;col++){
//         cout<<" ";
//     }
//     for(col = 1; col<= row ;col++){
//         cout<<col;
//     }
//     for(int col = row -1 ; col >=1; col-- ){
//         cout<<col;
//     }
//     cout<<endl;
//    }




    //     Q= 2 numric hollow inverted half pyramid

    // for(row =1; row <= n; row++){
    //     for(col = row; col <= n;col++){
    //         if(col == 1 || row == 1 ||  col == n || row == col ){
    //             cout<<col;
    //         }
    //         else
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }









    //  Q=1  hollow half pyramid

    // for(row =1; row <= n; row++){
    //     for(col = 1 ; col <= row; col++){
    //         if(row == col || row == n || col == 1){
    //             cout<<col;
    //         }
    //         else
    //         cout<<" ";
    //     }
    //     cout << endl;
    // }
    return 0;
}