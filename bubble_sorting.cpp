#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int n;
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
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) swap(arr[i],arr[j]);
        }
    }
    cout<<"After sorting:"<<"   ";
    for(int i=0;i<n;i++) cout<<arr[i]<<"    ";
    return 0;
}