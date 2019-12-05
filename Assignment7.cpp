#include<iostream>
#include <list> 
#include <iterator> 
using namespace std; 
int showlist(list <int> l2) 
{ 
	list <int> :: iterator it; 
	for(it = l2.begin(); it != l2.end(); ++it) 
		cout<< *it<<"   " ;
	cout << '\n'; 
} 

int main() 
{ 
	int a,ch,ele,choice,cho;
	char e[]="EMPTY",f[]="NOT EMPTY";
	list <int> l1; 
	do
	{
		cout<<"-----------------------------------------"<<endl;
		cout<<"          1.INSERT            "<<endl;
		cout<<"          2.EMPTY STATUS            "<<endl;
		cout<<"          3.DISPLAY            "<<endl;
		cout<<"          4.REVERSE           "<<endl;
		cout<<"          5.SORT            "<<endl;
		cout<<"          6.REMOVE DUPLICATE            "<<endl;
		cout<<"-----------------------------------------"<<endl;
		cout<<"Enter Choice : ";
		cin>>cho;
		cout<<"-----------------------------------------"<<endl;
		switch (cho)
		{
			case 1:
				do
				{
					cout<<"Enter the element that you want to push in the list : ";
					cin>>ele;
					l1.push_back(ele);							//inserting in the list
					cout<<"-----------------------------------------"<<endl;
					cout<<"Enter 1 to enter another element and 0 to exit : ";
					cin>>ch;
					cout<<"-----------------------------------------"<<endl;
				}while(ch==1);
				break;
			
			case 2:
				a=l1.empty();
				if(a==1)		
					cout<<"List status : "<<e<<endl;					//list empty operation
				else
					cout<<"List status : "<<f<<endl;
				cout<<"-----------------------------------------"<<endl;
				break;
				
			case 3:
				cout << "List 1 is : "; 							//display operation
				showlist(l1);
				cout<<"-----------------------------------------"<<endl;
				break;
				
			case 4:
				cout << "List 1 in reversed order is : "; 					//list reverse operation
				l1.reverse(); 
				showlist(l1);
				cout<<"-----------------------------------------"<<endl;
				break;
				
			case 5:
				cout<<"List 1 in sorted form is : ";						//list sort operation
				l1.sort();
				showlist(l1);
				cout<<"-----------------------------------------"<<endl;
				break;
				
			case 6:
				cout<<"List after removing duplicate elements : ";				//unique operation
				l1.sort();
				l1.unique();
				showlist(l1);
				cout<<"-----------------------------------------"<<endl;
		}
		cout<<"Enter 1 to continue and 0 to exit : ";
		cin>>choice;
	}while(choice==1);
	return 0; 
}

