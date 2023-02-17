#include<iostream>
using namespace std;
void printlist(int n){
   int i;
   for(i =0 ; i< n ;i++){
    cout << i << " ";
   }
    
}
int maxi(int a, int b, int c){      // a,b,c perameter
    if(a>b && a > c){
        return a;
    }
    else if (b > a && b > c){
        return b;
    }
    else{
        return c;
    }
}

char get_grade(int n){

    if(n >= 90 && n <= 100){
        return 'A';
    }   
    else if (n >= 80 && n < 90){
        return 'B';
    }
    else if (n >= 70  && n <= 80 ){
        return 'C';
    }
    else if( n >= 60){
        return 'D';
    }
    else{
        return 'E';
    }
}
  // find grade using switch

char grade1(int num){
    switch(num){
        case 10:
        case 9:
            return 'A';
            break;
        case 8:
            return 'B';
            break;
        case 7:
            return 'C';
            break;
        case 6:
            return 'D';
            break;
        default:
            return 'E';
    }
}

int main(){


    //int n;
   // cout <<"enter number:";
   // cin>>n;
    //printlist(n);           // n argument 

    // int maxnum;
   // maxnum = maxi(3,1,5);
  //  cout<<" maximum number "<< maxnum << endl;

   // int grade;
   // cout<< "enter grade :";
    //cin>>grade;
  //  cout<<" your grade is : " << get_grade(grade) << endl;

  
 // for(int i =0;i<= 100;i++){
 //   cout << " grade for marks "<<i << " is " << grade1(i/10) << endl;
 // }


 // print votiog age

 int age;
 cout <<"enter age";
 cin>>age;
 (age>=18)?cout<<"can voting":cout<<"can not voting";
  


  int a =5;
  int b = 10;
  cout<< ((++a)*(--b))<<endl;
  cout<<((++a)*(b--))<<endl;
  cout<<((a++)*(--b))<<endl;
  cout<<((a++)*(b--))<<endl;


    
    

    return 0;
}