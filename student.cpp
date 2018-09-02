#include<iostream>
#include<string>
class student
{
    char name[20];
    int roll_no;
    int marks[3];
public:
    void insert_data(char pname[],int proll_no,int pmarks[])
    {
        strcpy(pname,name);
        roll_no=proll_no;
        pmarks[0]=marks[0];
        pmarks[1]=marks[1];
        pmarks[2]=marks[2];
    }
    void display()
    {
        std::cout<<"\nNAME-"<<name;
        std::cout<<"\nROLL NO-"<<roll_no;
        std::cout<<"\nMARKS 1-"<<marks[0];
        std::cout<<"\nMARKS 2-"<<marks[1];
        std::cout<<"\nMARKS 3-"<<marks[3];
    }
};
int main()
{
 char name[20];
 int roll;
 int marks[3];
 std::cout<<"\nEnter name-";
 gets(name);
 std::cout<<"\nEnter Roll No-";
 std::cin>>roll_no; 
 std::cout<<"\n Enter marks 1-";
 std::cin>>marks[0];
 std::cout<<"\nEnter marks 2-";
 std::cin>>marks[1];
 std::cout<<"\nEnter marks 3-";
 std::cin>>marks[2];
 student s;
 s.instert_data(name,roll,marks);
 s.display();
}

        
        
        
        

