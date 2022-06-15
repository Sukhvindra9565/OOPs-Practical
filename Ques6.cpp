#include<iostream>
using namespace std;


int main()
{
	int marks[5];
	int sum = 0;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the marks of all subject one by one"<<endl;
		cin>>marks[i];
		sum += marks[i];
	}
	int percent = sum/5;
	cout<<"\n\nYour percent is "<<percent<<endl;
	if(percent >= 90 && percent < 100)
	{
		cout<<"Your Grade is A"<<endl;
	}
	else if(percent >= 80 && percent < 90)
	{
		cout<<"Your Grade is B"<<endl;
	}
	else if(percent >= 70 && percent < 80)
	{
		cout<<"Your Grade is C"<<endl;
	}	
	else if(percent >= 60 && percent < 70)
	{
		cout<<"Your Grade is D"<<endl;
	}
	else if(percent >= 50 && percent < 60)
	{
		cout<<"Your Grade is E"<<endl;
	}
	else if(percent >= 40 && percent < 50)
	{
		cout<<"Your Grade is F"<<endl;
	}
	else
	{
		cout<<"\n\nYou Fail"<<endl;
	}
}
