#include<iostream>
using namespace std;

void reverse(int *arr,int index,int n)
{
	if(index < n/2)
	{
		swap(arr[index],arr[n-index-1]);
		reverse(arr,index+1,n);
	}
}
int main()
{
	int arr[] = {1,2,3,4,5};
	int n = 5;
	cout<<"Original Array"<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<"\nReverse Array"<<endl;
	reverse(arr,0,n);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";

}
