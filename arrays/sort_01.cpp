#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void sort01(int arr[],int n){
    int left=0, right = n-1;
    while(left<right){
        while(arr[left]== 0){
            left++;
        }
        while(arr[right]==1){
            right--;
        }
        if(left<right){
            swap(arr[left],arr[right]);
        }
    }
    printArray(arr,n);
}

int main(){
    int arr[8]={1,1,1,0,0,1,0,0};
    cout<<"initial array : ";
    printArray(arr,8);
    cout<<"\nfinal array : ";
    sort01(arr, 8);
    return 0;
}