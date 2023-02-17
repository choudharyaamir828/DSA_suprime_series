#include<iostream>
using namespace std;

void printarry(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void fun(int arr[],int size){
    arr[0] = arr[0] + 10;
    printarry(arr,size);
}

int find_key(int arr[],int size,int key){
    for(int i =0; i<size;i++){
        if(arr[i] == key){
            return 1;
            break;
        }
    }
    return 0;
}


int main(){

    int arr[30] = {4,5,6,7,8,9,13,15,16,17};
    int size = 10;
    int i = 0;
    int j = size-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }




    // int arr[30]  = {4,5,6,7,8,9,19,12};
    // int size = 8;
    // int i =0;
    // int j = size-1;
    // while(i<j){
       
    //     cout<<arr[i]<<" ";
    //     cout<<arr[j] <<" ";
    //     i++;
    //     j--;
    // }




     
    //find minimum value

    // int arr[50] = {2,4,1,6,8,-3,9,0};
    // int size = 8;
    // int min = INT_MAX;
    // for(int i =0;i<size ;i++){
    //     if(arr[i]<min){
    //         min = arr[i];
    //     }
    // }
    // cout<< " minimum number ->"<<min<<endl;



            // find maximum number
    // int arr[50] = {2,4,1,6,8,9,0};
    // int size = 7;
    // int max = INT_MIN;   
    // for(int i =0;i<size;i++){
    //     if(arr[i]> max){
    //         max = arr[i];
    //     }
    // }
    // cout<<"maximum number ->"<<max <<endl;






    // int arr[20] = {1,0,1,0,0,0,1,1,0,1,1,0,3,5,6,0,8,9};
    // int size = 18;

    // int cnt1=0;
    // int cnt2=0;
    // for(int i = 0;i<size;i++){
    //     if(arr[i] == 0){
    //         cnt1++;
    //     }
    //     if(arr[i] == 1){
    //         cnt2++;
    //     }
    // }
    // cout<<"number of zero ->"<<cnt1<<endl;
    // cout<<"number of one ->"<<cnt2 <<endl;









      // linear search
    // int arr[5] = {4,5,6,7};
    // int size = 5;
    // int key;
    // cout<<"enter the key you want to find :";
    // cin>>key;
    // find_key(arr,size,key);
    
    // if(find_key(arr,size,key)){
    //     cout<<"element found";
    // }
    // else{
    //     cout<<"element not found";
    // }



    //  int arr[10] = {5,10};
    //  int size = 2;
    //   fun(arr, size);
    //   cout<<endl;
    //  for(int i=0 ; i < size; i++){
    //     cout<< arr[i] << " ";
    //  }

    
    // int arr[5] = {1,3,5,7,9};
    // for(int i = 0;i<5;i++){
    //     arr[i] = 1;
    // }
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" "; 
    // }





    // int arr[100];
    // int n;
    // cout<<"how many number you want =>";
    // cin>>n;
    // for(int i =0 ;i<n;i++){
    //     cin>>arr[i];
    // }
    //  for(int i =0 ;i<n;i++){
    //     cout<<2*arr[i]<< " ";
    // }




    // int arr[10] ;
    
    // for(int i =0;i<10;i++){
    //     cout<<"enter array :"<<i <<"->";
    //     cin>>arr[i];
    // }
    // for(int i = 0 ;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }
   



    // int arr[20];
    // cout<<"array created successfully"<<endl;
    // cout<<arr<<endl;
    // cout<<&arr << endl;

     
    return 0;
}