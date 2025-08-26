#include<iostream>
using namespace std;
int binary(int arrB[],int sizeB,int targetB){

    int start=0;
    int end= sizeB-1;
    int mid;

    while(start<=end)
    {
        mid= start+((end-start)/2);
        if(arrB[mid]==targetB){
            return mid;
        }
        else if(targetB>arrB[mid])
        {
                start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[100],size,target,result;
    cout<<"size of the array: ";
    cin>>size;

    cout<<"input the elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"value of the element you want to search in the array: ";
    cin>>target;

    result=binary(arr,size,target);
    if(result== -1){
        cout<<"desired element not found";
    }
    else{
        cout<<" desired element exists in index: "<<result;
    }
}