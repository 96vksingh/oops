#include<iostream>
class something
                          {
                            int bal;
                            //int intrest_rate;
                            char name[20];
                          public:
                            void e_data(char ch[10]="NULL",int a=2000);
                            void display()
                            {
                              std::cout<<"\nNAME-"<<name;
                              std::cout<<"\nBALANCE-"<<bal;
                            }
          

                          };
                          void something::e_data(char ch[20],int b)
                          {

                            strcpy(name,ch);
                            bal=b;
                          }

  int main()
  {
    int a,b,choice,j,i=1,k=1;
    char ch,f[20],c;
    something s[10];
  do  {system("clear");
    std::cout<<"\n1-detail entry";
    std::cout<<"\n2-display";
    std::cout<<"\nENter choice";
    std::cin>>choice;
    switch(choice)
    {
      case 1:
    std::cout<<"\nif u want to ENter name press c else anything-";
    std::cin>>c;
   fflush(stdin);
    if(c=='c')
    {std::cin>>f;}
    else
     k=0;
    std::cout<<"\nEnter balance then press c else anything-";
    fflush(stdin);
    std::cin>>c;
    if(c!='c')
    {if(k==0)
      s[i].e_data();
     else
      s[i].e_data(f);
      }
    else
    {std::cin>>j;
    s[i].e_data(f,j);}
    i++;
    break;
    case 2: for(k=1;k<=i-1;k++)
                s[k].display();
                break;
              }
    std::cout<<"\nDo you want to continue then press y\n";
    std::cin>>ch;
    }while(ch=='y'||ch=='Y');






    // j=s.multiply();
    // std::cout<<"\nmultiplications default-"<<j;
    // j=s.multiply(4);
    // std::cout<<"\nmultiplications 1 args-"<<j;
    // j=s.multiply(2,10);
    // std::cout<<"\nmultiplications 2 arg-"<<j<<"\n";
    //multiply();
  }
