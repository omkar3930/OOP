#include <iostream>

using namespace std;

class Complex
      {
             private:
                int r,i;

             public:
                //Function to read the input data..............................................................
                 void getdata()
                 {
                     cout<<"Enter the real and imaginary part of complex no.: ";
                     cin>>r>>i;
                     cout<<"Given Complex Number="<<r<<"+"<<i<<"i"<<endl;
                 }
                //Two display function for addition && multiplication respectively...............................
                 void display2()
                 {
                     cout<<"\nAddition of two complex no.= "<<r<<"+"<<i<<"i"<<endl;
                 }
                 void display1()
                 {
                     cout<<"\nMultiplication of two complex no.= "<<r<<"+"<<i<<"i"<<endl;
                 }
             //Operator overloading function for addition........................................................
                 Complex operator +(Complex c)
                 {
                     Complex m;
                     m.r= r+c.r;
                     m.i= i+c.i;
                     return m;
                 }
            //Operator overloading function for multiplication.....................................................
                 Complex operator *(Complex c)
                 {
                     int v1,v2,v3,v4;
                     v1=r*c.r;
                     v2=-1*(i*c.i);
                     v3=r*c.i;
                     v4=i*c.r;

                     c.r=v1+v2;
                     c.i=v3+v4;

                     return c;
                 }

      };
int main()
{
    Complex c1,c2,c3,c4;

    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.display2();
    c4=c1*c2;
    c4.display1();
    return 0;
}
