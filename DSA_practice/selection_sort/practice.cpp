#include<iostream>
using namespace std;
void printArray(int arrp[],int size)
{
    for(int j=0;j<size;j++)
    {
        cout<<arrp[j]<<" ";
    }
}
void sorty(int arrs[],int sizes)
{
    for(int i=0;i<sizes;i++)
    {
        int mini=i;
        for(int j=i+1;j<sizes;j++)
        {
            if(arrs[j]<arrs[mini])
            {
                mini=j;
            }

        }
        swap(arrs[mini],arrs[i]);
    }
    printArray(arrs,sizes);
}
int main(){
    int n;
    int arr[50];
    cout<<"size of the array:";
    cin>>n;
    cout<<"array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the array is:";
    printArray(arr,n);
    cout<<"\nthe sorted array is:";
    sorty(arr,n);
}