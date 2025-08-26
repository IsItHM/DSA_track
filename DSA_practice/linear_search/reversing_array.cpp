#include<iostream>
using namespace std;

void printArray(int arrr[],int n){
    cout<<"Array elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arrr[i]<<" ";
    }
}
void reversed_Array(int arrR[],int sizeR){
    int start=0;
    int end= sizeR-1;
    int temp=0;
    while(start<end){
        temp=arrR[start];
        arrR[start]=arrR[end];
        arrR[end]=temp;
        start++;
        end--;
    }
    cout<<"Reversed array: ";
    for(int j=0;j<sizeR;j++)
    {
        cout<<arrR[j]<<" ";
    }
}
int main(){
    int array_size;
    cout<<"array size: "<<" ";
    cin>>array_size;
    int arr[100];//initializing array size is a good practice;
    for(int i=0;i<array_size;i++)
    {
        cin>>arr[i];
    }
    printArray(arr,array_size);
    reversed_Array(arr,array_size);
}