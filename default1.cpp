#include<iostream>
#include<string.h>
using namespace std;

class stud
{
	char name[25];
	int marks[3],sfail;
public:
	void getdata(char abc[],int x=1,int m[]=0)
	{
		strcpy(name,abc);
		sfail=x;
		for(int i=1;i<=x;i++)
		{
			marks[i]=m[i-1];
		}
	}
	void display(void)
	{
		std::cout<<"\n\nName: "<<name;
		for(int i=1;i<=sfail;i++)
		{
			std::cout<<"\nmarks "<<i<<": "<<marks[i];
		}
	}
};

int main()
{
	int x,ch,y,mark[3],z;
	char name[25],l;
	std::cout<<"Enter no. of students who did not appear for exam: ";
	std::cin>>z;
	stud s[z];
	//system("clr");
	do
	{
		std::cout<<"\n---------------MENU---------------\n1. Read\n2. Display\n3. Exit\n\nEnter Choice: ";
		std::cin>>ch;
		switch(ch)
		{
			case 1:	for(int j=1;j<=z;j++)
					{
						int y;
						char b;
						std::cout<<"\nEnter name of student: ";
						fflush(stdin);
						std::cin>>name;
						std::cout<<"\nTotal subjects failed (Maximum 3): ";
						cin>>x;
						for(int i=1;i<=x;i++)
						{
							std::cout<<"\nAppeared for supplementary for subject "<<i<<"? (y/n)";
							//fflush(stdin);
							std::cin>>b;
							if(b=='y')
							{
								std::cout<<"\nEnter Marks for subject "<<i<<": ";
								std::cin>>mark[i-1];
							}
							else
							{
								mark[i-1]=0;
							}
						}
						s[j].getdata(name,x,mark);
					}
					break;
			case 2: for(int i=1;i<=z;i++)
					{
						s[i].display();
					}
					break;
			default: std::cout<<"\nInvalid Option";
					break;
			case 3: exit(0);
		}
		std::cout<<"\n\nPress y to continue: ";
		fflush(stdin);
		std::cin>>l;
	}while(l=='y');
	
}
