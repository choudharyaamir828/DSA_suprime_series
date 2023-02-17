#include<iostream>
using namespace std;
int  fun(int x = 0,int y = 0){
   
   return (x + y);
}
int main()
{
    // int a = 5 ;
    // int b = 3;
   

    // cout << (a&b) << endl;

    // cout << (a^b) << endl;

    // cout<< (~a) << endl;

    // cout<< (a|b) << endl;
    
    // cout<< (++a) * (++a) << endl; 

    /*
    char n;
    cout<<"enter number:";
    cin>>n;
     
     switch(n){
        case 'a':
            cout<<"first case " << endl;
            break;
        case 'b':
            cout<< " second case " << endl;
            break;
        case 'c':
            cout<< " third case" << endl;
            break;
        default:
             cout << " no case ";
     }
    
    */

   cout<< fun(5);
   return 0 ;


   
    

 
    
}