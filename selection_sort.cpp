#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int n,mini=0;
    cout<<"Enter the number of elements";
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cout<<"enter the number"<<" ";
        cin>>num;
        arr.push_back(num);
    }
    //For arranging in ascending order
    for(int i=0;i<n;i++){
         mini=i;
         for(int j=i;j<n;j++){
            if(arr[j]<mini) mini=j;
         }
    swap(arr[mini],arr[i]);
    }
     cout<<"After sorting:"<<"   ";
    for(int i=0;i<n;i++) cout<<arr[i]<<"    ";
    return 0;
    }