#include<iostream>
using namespace std;

class shape    //declaration of base class shape
{
   protected:
          double x,y;
   public:
         virtual void getdata()
               {
                 cin>>x;
                 cin>>y;
               }
};
class rectangle:public shape   //declaration of derived class rectangle from base class shape
{
   public:
       void area_rect()
              {
               cout<<"Area of rectangle is : "<<x*y<<endl;
              }
};
class triangle:public shape     //declaration of derived class triangle from base class shape
{
   public:
       void area_tri()
              {
                cout<<"Area of Triangle is : "<<0.5*x*y<<endl;
              }
};

int main()
{
    int m;
    shape *p=NULL;
    rectangle s1;
    triangle s2;
    cout <<"Enter the choice:";
    cin>>m;
    switch(m)
    {
        case 1:
               cout<<"Enter the Length and breadth of Rectangle"<<endl;
               p=&s1;
               p->getdata();
               s1.area_rect();
               break;

        case 2:
              cout<<"Enter the Base and Height of Triangle"<<endl;
              p=&s2;
              p->getdata();
              s2.area_tri();
              break;

    }

    return 0;
}
