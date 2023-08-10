#include<iostream>
using namespace std;

void rev(int arr[],int size){
    int start=0,end=size-1;
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++,end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    rev(arr,5);
    return 0;
}