#include<iostream>
#include<string.h>
class refer
               {
                 char name[20];
                 int marks[2];
               public:
                  void data()
                                      {
                                        std::cout<<" Name: ";
                                        std::cin>>name;
                                        std::cout<<" Marks: ";
                                        std::cin>>marks[0];

                                      }
                  void display()
                               {
                                 std::cout<<"\nNAME-"<<name;
                                 std::cout<<"\nMARKS-"<<marks<<" \n";
                               }
                            //  friend void out(refer &g);//function where the object is as parameter
                              friend  void modify(refer &a);
                              int check(char f[])
                               {
                                 if(strcmp(name,f)==0)
                                  return 1;
                                 else
                                 return -1;
                               }
               };
                void modify(refer &a)
                                  {
                                    int g;
                                    std::cout<<"\nENter modified marks-";
                                    std::cin>>g;
                                    a.marks=a.marks+g;
                                  }
  int main()
  {
    int i=0,choice;
    int j,h;
    char ch;
    char nam[20];
    refer g[10];
   do{
     system("clear");
     std::cout<<"\n1-Enter the data\n2-Display\n3-Modifiy Marks\n4-Exit\nEnter choice:";
   std::cin>>choice;
   switch(choice)
    {
      case 1: i++;
                  g[i].data();
                  //out(g[i]);// pass by reference
                  break;
      case 2:for(j=1;j<=i;j++)
                 {
                   g[j].display();
                 }
                 break;
        case 3:system("clear");
                   std::cout<<"\nEnter name-";
                   std::cin>>nam;
                   for(j=1;j<=i;j++)
                              {
                                h=g[j].check(nam);

                                if(h==1)
                                  modify(g[j]);
                              }
                              break;
        case 4: exit(0);
    }
    std::cout<<"\nPress y to go back to menu";
    fflush(stdin);
    std::cin>>ch;
  }while(ch=='y'||ch=='Y');
  }
