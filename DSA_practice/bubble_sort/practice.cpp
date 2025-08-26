#include<iostream>
using namespace std;
void printArray(int arrP[],int sizeP)
{
    
    for(int i=0;i<sizeP;i++)
    {
        cout<<arrP[i]<<" ";
    }
}
void sorty(int arrs[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arrs[j]>arrs[j+1])
            swap(arrs[j],arrs[j+1]);
        }
    }
    cout<<"\nthe sorted array is: ";
    printArray(arrs,n);
}
int main(){
    int n,arra[50];
    cout<<"size of the array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }
    cout<<"the array is: ";
    printArray(arra,n);
    sorty(arra,n);
}