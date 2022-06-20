#include<iostream>
using namespace std;


int main()
{
	// Create array with the help of new keyword to initailze dynamic memory in heap
	int *arr = new int(10);
	arr[0] = 2;
	arr[1] = 3;
	arr[2] = 4;
	arr[3] = 5;
	
	for(int i=0;i<4;i++)
	cout<<arr[i]<<" ";
	// Free memory hold by array 
	delete(arr);
}
