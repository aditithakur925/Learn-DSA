#include<iostream>
using namespace std;
void reverseArray(int arr[],int n)
{
    int st=0;
    int end=n-1;
   while(st<end)
   {
    swap(arr[st],arr[end]);
    st++;
    end--;
   }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(int);
    cout<<"Original Array:"<<endl;
    for(int i:arr)
    cout<<i<<" ";
reverseArray(arr,n);
    cout<<"Reversed Array:"<<endl;
    for(int i:arr)
    cout<<i<<" ";

}