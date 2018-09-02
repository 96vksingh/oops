#include<iostream>
class goodtime{
                          int hour;
                          int minute;
                          int second;
                          static int hr,mn,se;
                        public:
                          void gettime(int h,int m,int s)
                           {
                             hour=h;
                             minute=m;
                             second=s;
                             addtime(h,m,s);
                           }
                           void display(void)
                           {
                             std::cout<<"\nhour-"<<hour;
                             std::cout<<"\nminute-"<<minute;
                             std::cout<<"\nsecond-"<<second;
                             std::cout<<"\n";

                           }
                           void addtime(int h,int m,int s)
                           {
                             int a;
                             goodtime::hr=h+goodtime::hr;
                             goodtime::mn=m+goodtime::mn;
                             goodtime::se=s+goodtime::se;
                             if(goodtime::se>=60)
                               {
                                 a=goodtime::se/60; goodtime::se=goodtime::se%60;
                                 goodtime::mn=goodtime::mn+a;
                               }
                               if(goodtime::mn>=60)
                                {
                                  a=goodtime::mn/60; goodtime::mn=goodtime::mn%60;
                                  goodtime::hr=goodtime::hr+a;
                                }

                           }

                           static int send(char ch)
                            {
                              // std::cout<<"\nGOODTIMES1"<<goodtime::hr;
                              // std::cout<<"\nGOODTIMES2"<<goodtime::mn;
                              // std::cout<<"\nGOODTIMES3"<<goodtime::se;
                              if(ch=='h')
                               {return goodtime::hr;}
                               else if(ch=='m')
                                {return goodtime::mn;}
                                 else
                                 return goodtime::se;
                            }



};
int goodtime::hr=0;
int goodtime::mn=0;
int goodtime::se=0;
int main()
{
  int h,m,s,i;
  char ch1,ch2,ch3;
  ch1='h';
  ch2='m';
  ch3='s';
  goodtime g[4];
  for(i=1;i<=2;i++)
   {
     std::cout<<"\nEnter time for object"<<i<<"-";
     do{std::cout<<"\nEnter hour-";
     std::cin>>h;}while(h>60);
     std::cout<<"\nEnter minute-";
     std::cin>>m;
     std::cout<<"\nEnter second-";
     std::cin>>s;
     g[i].gettime(h,m,s);
   }
   g[1].display();
   g[2].display();
   std::cout<<"\nAdding then";
   h=goodtime::send(ch1);
   m=goodtime::send(ch2);
   s=goodtime::send(ch3);
   std::cout<<"\nfor obj3----hour-"<<h;
   std::cout<<"\nfor obj3-----minute-"<<m;
   std::cout<<"\nfor obj3-----second-"<<s;
    std::cout<<"\n";
   g[3].gettime(h,m,s);
   g[1].display();
   g[2].display();
   g[3].display();
   return 0;
}
