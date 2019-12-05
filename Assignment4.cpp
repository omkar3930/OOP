
#include<iostream>
using namespace std;
template <class T>
class data_sort
{
	public:
	template <class X>
	void selection_sort()
	{
	int i,j,min,n;
	cout<<"Enter the number of elements to be sorted : ";
	cin>>n;
	X a[n];
	X temp;
	cout<<"Enter Elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	cout<<"Sorted List : ";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	}
};
int main()
{
data_sort<int>s1;
data_sort<float>s2;
int k;
r: cout<<"For which Values you want to do Sorting"<<endl;
cout<<"1.Integer 2.Float 3.Stop"<<endl;
cin>>k;
switch(k)
{
case 1:
s1.selection_sort<int>();
goto r;
case 2:
s2.selection_sort<float>();
goto r;
case 3:
break;
}
}
