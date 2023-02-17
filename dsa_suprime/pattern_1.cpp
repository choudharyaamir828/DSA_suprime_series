#include<iostream>
using namespace std;
int main()
{
    int row , col;
    int i,k=0;
    int n ;
    cout << "enter number :";
    cin>> n;

/*
    *
    **
    ***
    ****
    *****

    for(row = 0 ; row < n; row++){
        for(col =0; col < row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    */

/*
******
*****
****
***
**
*

 for(row = 0; row < n; row++){
    for(col = 0; col < n-row ; col++){
        cout<< "*";
    }
    cout << endl;
 }

*/

/*
      * 
     * * 
    * * * 
   * * * * 
  * * * * * 
 * * * * * * 
* * * * * * * 


  for(row = 0 ;row < n; row++){
    for(col = 0; col <n-row-1;col++){
        cout<<" ";
    }
    for(col = 0; col<row+1;col++){
        cout<<"* ";
    }
    cout<<endl;
  }
  
  */

/*
enter number :10
*        
**       
* *      
*  *     
*   *    
*    *   
*     *  
*      * 
*       *
*********


 for(row = 0; row<n;row++){
    for(col =0; col<n-1;col++){
        if(col==0 || row==n-1 || row==col){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
 }

 */


/*
* * * * * * * * * * 
 * * * * * * * * * 
  * * * * * * * * 
   * * * * * * * 
    * * * * * * 
     * * * * * 
      * * * * 
       * * * 
        * * 
         * 

for(row =0;row<n;row++){
   for(col =0;col<row;col++){
    cout<<" ";
   }
   for(col=0;col<(n-row);col++){
    cout<<"* ";
   }
    cout<<endl;
}
 
 */

/*

           * 
          * * 
         * * * 
        * * * * 
       * * * * * 
      * * * * * * 
     * * * * * * * 
    * * * * * * * * 
   * * * * * * * * * 
  * * * * * * * * * * 
 * * * * * * * * * * * 
* * * * * * * * * * * * 
* * * * * * * * * * * * 
 * * * * * * * * * * * 
  * * * * * * * * * * 
   * * * * * * * * * 
    * * * * * * * * 
     * * * * * * * 
      * * * * * * 
       * * * * * 
        * * * * 
         * * * 
          * * 
           * 

for(row = 0 ;row < n; row++){
    for(col = 0; col <n-row-1;col++){
        cout<<" ";
    }
    for(col = 0; col<row+1;col++){
        cout<<"* ";
    }
    cout<<endl;
  }
  for(row =0;row<n;row++){
   for(col =0;col<row;col++){
    cout<<" ";
   }
   for(col=0;col<(n-row);col++){
    cout<<"* ";
   }
    cout<<endl;
}

 */

 /*
      * 
    *  * 
   *    * 
  *      * 
 *        * 
*          * 
*         *
 *       *
  *     *
   *   *
    * *
     *

  for(row=0; row<n;row++){
    for(col=0;col<(n-row-1);col++){       //for space
        cout<<" ";
    }
  
    for(col=0;col<(2*row+1);col++){       //for star for first char
        if(col ==0){
            cout<<"* ";
        }
        else if(col== 2*row){      ///last char star
            cout<<"* ";
        }
        else{
            cout<<" ";
        }
        
    }
    cout<<endl;
}
for(row=0;row<n;row++){
    for(col=0;col<row;col++){
        cout<<" ";
    }
    for(col=0;col<(2*n-2*row-1);col++){
        if(col==0 || col == (2*n - 2*row -2)){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
   */

/*
enter number :6
******  ******
*****    *****
****      ****
***        ***
**          **
*            *
*           *
**         **
***       ***
****     ****
*****   *****
****** ******
  
 for(row=0;row<n;row++){
    for(col=0;col<n-row;col++){
        cout<<"*";
    }
    for(col=0;col<row+1;col++){
        cout<<"  ";
    }
    for(col=0;col<n-row;col++){
        cout<<"*";
    }
    cout<<endl;
 }
 for(row=0;row<n;row++){
    for(col=0;col<row+1;col++){
        cout<<"*";
    }
    for(col=0;col<(2*n-2*row-1);col++){
        cout<<" ";
    }
    for(col=0;col<row+1;col++){
        cout<<"*";
    }
    cout<<endl;
 }


*/

/*
enter number :6
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
ABCDEFEDCBA

for(row=0;row<n;row++){
    for(col=0;col<row+1;col++){
        int ans = col+1;
        char ch = ans + 'A' -1;
        cout<<ch;
    }
    col = col-1;
    for(col=row;col>0;col--){
        int ans = col;
        char ch = ans + 'A'-1;
        cout<< ch;
    }
    cout<<endl;
}

*/
 
}