#include<iostream>
#include<stdlib.h>
#include<time.h>
const int m=20;
class number
                     {
                       int no[m];
                     public:
                       int randdom()
                        {
                        int k;
                          k=rand();
                          std::cout<<"\n Value is-"<<k;
                          return 0;
                        }
                        int randdom(int k,int l)
                         {
                           int h,p;
                            if(k>l)
                             p=k;
                             else
                             p=l;
                               j:h=rand()%p;
                               if(h>k&&h<l)
                                {std::cout<<"\n Value is-"<<h;}
                              else
                                goto j;
                            return 0;
                           }
                     };
  int main()
  {
    int choice;
    int *a[m],k,l;
    number h;
    char ch;
    int b[20];
    int c;
    // std::cout<<"\nEnter element in array number-\n";
    //  int i,ele;
    //  for(i=0;i<m;i++)
    //   {std::cin>>ele;
    //   h.enter(i,ele);}
  do  {system("clear");
    std::cout<<"\n1- one parameter-\n";
    std::cout<<"\n2- multiple parameter-";
    std::cout<<"\nENTER YOUR CHOICE-";
    std::cin>>choice;
    switch(choice)
     {
       case 1://std::cout<<"Enter the no. in the array-";
                  //std::cin>>ele;
                  h.randdom();
                  //std::cout<<"\nreturned value is-"<<c;
                  break;
      case 2:std::cout<<"Enter how many to extraxt from where to where-";
                  std::cin>>k;
                  std::cin>>l;
                  // k=1;
                  // l=4;
                  h.randdom(k,l);
                  // for(i=k;i<l;i++)
                  //  std::cout<<"\nreturned value is-"<<b[0]<<" "<<b[1];
                  break;
     }
     std::cout<<"\nDo you want to continue then press y\n";
     std::cin>>ch;
     }while(ch=='y'||ch=='Y');
  }
