#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
class GenericVector {
	private:
		vector<int> data;
	public:
		void accept();
		void display();
		void modify();
		void multiply();
};

template <typename T>
void GenericVector<T>::accept() {
	cout << "  Enter Value : ";
	T element;
	cin >> element;
	data.push_back(element);
}

template <typename T>
void GenericVector<T>::display() {
	cout << "  Vector : ";
	for (int i = 0; i < data.size(); i++)
	 {
		cout << data[i]<<"   ";
	 }
	 cout<<endl;
}

template<typename T>
void GenericVector<T>::modify()
{
  int pos;
  T newel;
  cout<<"\nEnter the position you want to modify :\n ";
  cin>>pos;
  cout<<"\nEnter the New Element : ";
  cin>>newel;
  data[pos-1]=newel;
}
 template<typename T>
 void GenericVector<T>::multiply()
{
  int scalar;
  cout<<"\nEnter the Scalar with which you want to multiply : ";
  cin>>scalar;
  for(int i=0;i<data.size();i++)
  {
    data[i]=data[i]*scalar;
  }
}
int main() {
	GenericVector<int> v;
	int choice;
	while (1) {
		cout << "  1. Insert Element\n";
		cout << "  2. Modify Element\n"; 
		cout << "  3. Multiply by Scaler Value\n";
		cout << "  4. Display Vector\n";
		cout << "  5. Exit \n";
		cout << "  Enter Option : ";
		cin >> choice;

		switch (choice) {
			case 1:	v.accept();
				break;
			case 2:	v.modify();
				break;
			case 3: v.multiply();
				break;
			case 4: v.display();
				break;	
			case 5: exit(0);
				break;
			default: cout << "  Entered wrong option.";
		}
	}
}
