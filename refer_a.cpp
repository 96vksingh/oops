#include<iostream>
#include <string.h>
using namespace std;
int pr;

class applestore
{
    char prod[20];
    int pid;
    float price;
public:
      void data_inserted(char pro[],int p,float pr)
       {
         //prod=pro;
         strcpy(prod,pro);
         pid=p;
         price=pr;
       }
    friend void getdata(applestore &a);
    void calc(int &px)
     {
       if(px==pid)
       {
             price=price+(0.18*price);
             cout<<endl<<endl<<"Product: "<<prod<<endl<<"Price: "<<price;
       }
     }
    // void display()
    //     {
    //       cout<<"\nProduct Name-"<<prod;
    //       cout>>"\nP-ID-"<<pid;
    //       cout<<"\nPrice-"<<price;
    //     }
};

void getdata(applestore &a)//call by reference
{
  char pr[20];
  int id;
   float prices;
   fflush(stdin);
    cout<<endl<<"Enter Product Name: ";
    //std::getline(cin,pr);
    cin>>pr;
    cout<<pr;
    cout<<endl<<"Enter Product id: ";
    cin>>id;
    cout<<endl<<"Eter Price: ";
    std::cin>>prices;
     a.data_inserted(pr,id,prices);//call by value
     return;
}



int main()
{
    int ch,px;
    char sch;
    applestore p[4];
    for(int i=1;i<4;i++)
    {
      getdata(p[i]);//call by reference
    }
    do{
        cout<<"\n1. Show bill\n2. Exit\nEnter choice: ";
        cin>>ch;
        switch(ch)
        {

            case 1:
                cout<<"Enter Product id: ";
                cin>>px;
                for(int i=1;i<4;i++)
                  p[i].calc(px);
                //p[2].calc(px);
                //p[3].calc(px);
                break;

            case 2:
                exit(0);
                default:
                    cout<<"Invalid Option";
        }
        cout<<"Do Ya Wanna Continue?";
        fflush(stdin);
        cin>>sch;
    }while(sch=='y');
}
