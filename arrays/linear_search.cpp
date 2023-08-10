#include<iostream>
using namespace std;

bool Lsearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[100],size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    if(Lsearch(arr,size,key)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}