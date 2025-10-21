#include<iostream>
using namespace std;
void merge(int * arr,int s, int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *start1=new int[len1];
    int *start2=new int[len2];
    int mainArrayindex= s;
    for(int i=0;i<len1;i++){
        start1[i]=arr[mainArrayindex];
        mainArrayindex++;
    }
    mainArrayindex=mid+1;
    for(int i=0;i<len2;i++){
        start2[i]=arr[mainArrayindex];
        mainArrayindex++;
    }
    int index1=0;
    int index2=0;
    mainArrayindex=s;
    while(index1<len1&&index2<len2){
        if(start1[index1]<start2[index2])
        {
        arr[mainArrayindex]=start1[index1];
        mainArrayindex++;
        index1++;
        }
        else{
        arr[mainArrayindex]=start2[index2];
        mainArrayindex++;
        index2++;
        }
    }
    while(index1<len1){
        arr[mainArrayindex]=start1[index1];
        mainArrayindex++;
        index1++;
    }
    while(index2<len2){
        arr[mainArrayindex]=start2[index2];
        mainArrayindex++;
        index2++;
    }
}
void mergesort(int *arr,int s,int e){
    int mid=(s+e)/2;
        if(s>=e){
        return;
    }
    mergesort(arr,s,mid);

    mergesort(arr,mid+1,e);

    merge(arr,s,e);

}
int main(){
    int arr[15]={4,3,5,3,55,33,443,24,5,3,566,75,7,5,-45};
    int n=15;

    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}