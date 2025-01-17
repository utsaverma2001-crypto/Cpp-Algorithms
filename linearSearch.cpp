#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key) return i;
    }
    return -1;
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;cin>>key;
    int idx = linearSearch(arr,n,key);
    if(idx != -1){
        cout<<"Element found at index: "<<idx<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    
    return 0;
}