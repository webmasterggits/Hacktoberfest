// Largest element in an array

#include<iostream>
using namespace std;

int largestelement(int arr[],int n){

     int max=arr[0];
     for(int i=1;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
     }
     return max;
}

int main(){

int n;
cout<<"Enter the size of array\n";
cin>>n;
int arr[n];
cout<<"Enter array element\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
cout<<"Largest element in an array :"<<largestelement(arr,n);

return 0;
}
