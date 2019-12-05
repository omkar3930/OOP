// EMPLOYEE DATBASE………………………….

#include <iostream>
#include<string.h>
using namespace std;

class employee
{
  private:
      int l=0;
      char empid[10];
      char name[20];
      long int salary;
      char add[50];
      int dd,mm,yyyy;
      char mob_no[12];
      char des[30];
      char bg[5];
  public:
   void get_data();
   void display_data();

};

void  employee::get_data()
{
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the id:";
    cin>>empid;
    cout<<"Enter the salary:";
    cin>>salary;
    cout<<"Enter the address:";
    cin>>add;
 // VALIDATIONS FOR DATE OF BIRTH............................
    int flag1=0;
    while(flag1==0)
    {
     cout<<"Enter the Birth Date:"<<endl;
     cout<<"Date:";
     cin>>dd;
     cout<<"Month:";
     cin>>mm;
     cout<<"Year:";
     cin>>yyyy;
     cout<<dd<<"-"<<mm<<"-"<<yyyy<<endl;
     if(dd>31 || mm>12 || yyyy>2000)
     {
         flag1=0;
         cout<<"Invalid DOB...............Enter the valid DOB:)"<<endl;
         continue;
     }
     flag1=1;
    }

 // VALIDATIONS FOR MOBILE NUMBER.......................
    int flag2=0;
    while(flag2==0)
    {
    cout<<"Enter the mobile no.:";
    cin>>mob_no;
    l=strlen(mob_no);
    if(l<10 || l>10)
    {
      flag2=0;
      cout<<"Invalid Mobile Number...............Enter the valid mobile number:)"<<endl;
      continue;
    }
    flag2=1;
    }
 //VALIDATIONS FOR DESIGNATION......................
    char s1[20]="Security";
    char s2[20]="Worker";
    char s3[20]="Supervisor";
    char s4[20]="Production_Manager";
    char s5[20]="Purchase_Manager";
    char s6[25]="Maintianance_Manager";
    char s7[20]="Managing_Director";
    int x=1,y=1,z=1,u=1,v=1,w=1,t=1;
    int flag3;
    do
    {
    cout<<"Enter the designation:";
    cin>>des;
    x=strcmp(des,s1);
    y=strcmp(des,s2);
    z=strcmp(des,s3);
    u=strcmp(des,s4);
    v=strcmp(des,s5);
    w=strcmp(des,s6);
    t=strcmp(des,s7);
    if(x==0 || y==0 || z==0|| u==0 || v==0 || w==0 || t==0 )
    {
     flag3=1;
    }
    else
    {
    flag3=2;
    cout<<"Enter Valid Designations.....!!!!!!!!!"<<endl;
    }
    }while(flag3!=1);

    //VALIDATIONS FOR BLOOD GROUP......................

    char s8[20]="O+";
    char s9[20]="O-";
    char s10[20]="A+";
    char s11[20]="A-";
    char s12[20]="B+";
    char s13[25]="B-";
    char s14[20]="AB-";
    char s15[20]="AB+";
    int a=1,b=1,c=1,d=1,e=1,f=1,g=1,h=1;
    int flag4=0;
    do
    {
    cout<<"Enter the blood group:";
    cin>>des;
    a=strcmp(des,s8);
    b=strcmp(des,s9);
    c=strcmp(des,s10);
    d=strcmp(des,s11);
    e=strcmp(des,s12);
    f=strcmp(des,s13);
    g=strcmp(des,s14);
    h=strcmp(des,s15);
    if(a==0 || b==0 || c==0|| d==0 || e==0 || f==0 || g==0 || h==0)
    {
     flag4=1;
    }
    else
    {
    flag4=2;
    cout<<"Enter Valid Designations.....!!!!!!!!!"<<endl;
    }
    }while(flag4!=1);

    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
}
void employee::display_data()
{
   cout<<"\n\n******************************************************"<<endl;

    cout<<"Employee id:"<<empid<<endl;
    cout<<"Employee Name:"<<name<<endl;
    cout<<"Employee Salary:"<<salary<<endl;
    cout<<"Employee Address:"<<add<<endl;
    cout<<"Employee D.O.B:"<<dd<<"-"<<mm<<"-"<<yyyy<<endl;
    cout<<"Employee Blood Group:"<<bg<<endl;
    cout<<"Employee Mobile:"<<mob_no<<endl;
    cout<<"Employee Designation:"<<des<<endl;
}

int main()
{
 int i,n;
 employee e[10];
 cout<<"Enter the no. of employee:";
 cin>>n;
 cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
 for (i=0;i<n;i++)
 {
     e[i].get_data();
 }
  for (i=0;i<n;i++)
 {
     e[i].display_data();
 }
return 0;
}
