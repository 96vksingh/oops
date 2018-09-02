#include<iostream>
#include<string.h>
using namespace std;
class emp
{	char name[20];
	int eid,exper;
	float salary;
public:
	emp()    //default constructor
	{
      strcpy(name,"NULL");
		eid=0;
		exper=5;
		salary=00;
	}
	emp(int r,int y,char n[],float m)  //parametrized constructor
	{
		strcpy(name,n);
		eid=r;
		exper=y;
	 salary=m;
	}
  emp(emp &ob2,char n2[])
   {
     strcpy(name,n2);
     eid=ob2.eid;
     exper=ob2.exper;
     salary=ob2.salary;
   }
	emp(const emp &s)  //copy constructor
	{
		strcpy(name,s.name);
		eid =s.eid;
		exper=s.exper;
		salary=s.salary;
	}
	void display()
	{
		cout<<"\nEMPLOYEE DETAILS:\nNAME="<<name<<"\nID="<<eid\
	         <<"\nEXPERIENCE YEAR="<<exper<<"\nSALARY="<<salary;
	}
	~emp();
};
emp::~emp()
{
  cout<<"\nDATA BEING DELETED";
}
int main()
{
	int r,y,ch;
	float m;
	char n[20];
  char n2[20];
	system("clear");
	emp ob1;
	cout<<"\nDEFAULT CONSTRUCTOR";
	ob1.display();
	cout<<"\nEnter detail for parameterized constructor\n";
  cout<<"Enter the Name of the EMPLOYEE:";
	fflush(stdin);
	cin>>n;
	cout<<"Enter the EMPLOYEE ID :";
	cin>>r;
	cout<<"Enter the EXPERIENCE Year in which he/she is job:";
	cin>>y;
	cout<<"Enter the SALARY of the EMPLOYEE:";
	cin>>m;
	emp ob2(r,y,n,m);
	cout<<"\nPARAMETRIZED CONSTRUCTOR";
  ob2.display();
	cout<<"\nCOPY CONSTRUCTOR";
	emp ob3(ob2);
	ob3.display();
do
{
  cout<<"\nPRESS 1 to change name-";
  cin>>ch;
  if(ch==1)
  {
  cin>>n2;
  emp ob4(ob2,n2);
	cout<<"\nCONTRUCTOR OVERLOADING";
  ob4.display();
}
  cout<<"\nDo you Want to continue?\n";
	cout<<"\nPress 1 for continue AND any other button for exit:\n";
	cin>>ch;
	}while(ch==1);
}
