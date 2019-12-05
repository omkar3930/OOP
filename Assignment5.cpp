#include <iostream>
#include <exception>
using namespace std;

class city_exception:public exception
{
    const char* what() const throw()
    {
        return "\nCity is not Pune,Mumbai,Chennai or Bangalore....";
    }
};

class vehicle_exception:public exception
{
    const char* what() const throw()
    {
        return "\nVehicle is not 4-wheeler";
    }
};

int main()
{
    string city;
    int wheels;

    try
    {
        cout<<"\nEnter the city :";
        cin>>city;
        if(city!="Pune"&&city!="Mumbai"&&city!="Chennai"&&city!="Bangalore" )
        {
            city_exception c;
            throw c;
        }
        else
        {
            cout<<"City is "<<city<<endl;
        }
    }
    catch(exception& e)
    {
        cout<<e.what()<<endl;
    }

    try
    {
        cout<<"\nEnter the wheels :";
        cin>> wheels;
        if(wheels!=4 )
        {
            vehicle_exception v;
            throw v;
        }
        else
        {
            cout<<"Vehicle is "<<wheels<<"-wheeler"<<endl;
        }
    }
    catch(exception& e)
    {
        cout<<e.what()<<endl;
    }

    return 0;
}

