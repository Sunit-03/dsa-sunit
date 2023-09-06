#include<iostream>
using namespace std;

int binSearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if (arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int even[8]={1,3,5,7,9,12,50,66};
    int odd[5]={1,2,3,6,7};
    cout<<binSearch(even, 8 ,66)<<endl;
    cout<<binSearch(odd, 5 ,6);
    return 0;
}