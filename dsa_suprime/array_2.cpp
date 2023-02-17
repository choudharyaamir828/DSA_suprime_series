#include<iostream>
using namespace std;
#include<vector>
int find_unique(vector<int>arr){
    int ans = 0;
    for(int i =0;i<arr.size();i++){
        ans = ans ^ arr[i];
    }

    return ans;
}
int main()
{
      vector<int>arr{1,0,0,0,1,0,1,1,1,0,};
      int i = 0;
      int start = 0;
      int end = arr.size() -1;
      while(start<= end){
        if(arr[start] == 0){
            swap(arr[start],arr[i]);
        }
        else{
            swap(arr[start],arr[end]);
        }
        i++;
        start++;
        end--;

      }
      for(auto value: arr){
        cout<< value << " ";
      }









    //     // triple number num

    // vector<int>arr{10,20,30,40};
	 
    //   int sum = 80;
     
    //  for(int i = 0;i<arr.size();i++){
        
    //     int element1 = arr[i];
    //     for(int j=i+1; j<arr.size();j++)
    //     {
    //         int element2 = arr[j];
    //         for(int k =j+1;k<arr.size();k++){
    //             int element3 = arr[k];
    //             if(element1 + element2 + element3 == sum){
    //                 cout<<"( "<<element1<<","<<element2<<","<<element3<<")"<<endl;
    //             }
    //         }
            
    //     }    
    //  }




    //     vector<int>a{1,2,3,4,5,7,2,8};
	 
    //   int sum = 9;
     
    //  for(int i = 0;i<a.size();i++){
       
    //     int element = a[i];
    //     for(int j=i+1; j<a.size();j++)
    //     {
    //         if(a[i]+a[j] == sum){
    //             cout<<"pair found ("<<a[i]<<","<<a[j]<<")"<<endl;
    //         }
            
    //     }
    //  }
    // for(auto value :a){
    //     cout<< value <<" ";   // second way to print vector
    // }


    //  vector<int> a{1,2,3,4,6,8};
    //  vector<int>b{3,4,9,10};
     
    //  vector<int>arr;
     
    //  for(int i = 0;i<a.size();i++){
       
    //     int element = a[i];
    //     for(int j=0; j<b.size();j++)
    //     {
    //         if(element == b[j]){
                  
    //             b[j] = -1;          // for repeated number
    //             arr.push_back(a[i]);
    //         }
    //     }
    //  }
    //  for(int i =0;i<arr.size();i++){
    //     cout<<arr[i]<< " ";
    //  }
    //  cout<<endl;

    // for(auto value : arr){
    //     cout<< value <<" ";   // second way to print vector
    // }

    //   unian of two array

    // int arr1[] = {3,4,5,6,7};
    // int arr2[] = {12,13,1,14,15};
    // vector<int>arr;
    // for(int i =0;i<5;i++){
    //     arr.push_back(arr1[i]);
    // }
    // for(int i =0;i<5;i++){
    //     arr.push_back(arr2[i]);
    // }
    // for(int i =0;i<arr.size();i++){
    //     cout<<arr[i]<< " ";
    // }




     // find unique element
    //   int n;
    //   int unique_number;
    // cout<< " enter the number ->";
    // cin>>n;

    //  vector<int> arr(n);
    //  for(int i=0; i<arr.size();i++){
    //     cin>>arr[i];
    //  }

    //  unique_number = find_unique(arr);

    //  cout<< "unique number is ->" << unique_number << endl;






    // int n;
    // cout<< " enter the number ->";
    // cin>>n;

    //  vector<int> arr(n);
    
    //  for(int i=0; i<arr.size(); i++){
    //     cin>>arr[i];
    //  }
    //  for(int i =0; i< arr.size() ; i++){
    //     cout<< arr[i]<< " ";
    //  }
     




    // vector<int>arr{3,4,5,6,7,8,9};
    // cout<<"enter element ->";
    
    //     for(int i =0;i<arr.size();i++){
    //     cout<< arr[i]<<" ";
    // }
    // cout<<arr.size() << endl;
    // cout<<arr.capacity() << endl;
    // cout<< arr.empty() << endl;
    // cout<< arr.at(3) << endl;
    // cout<< arr.front() << endl;
    // cout<< arr.back() << endl;







    // vector<int> v;
    // cout<<v.size() << endl;
    // cout<<v.capacity()<<endl;
    // v.push_back(4);
    // v.push_back(5);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    

    return 0;
}