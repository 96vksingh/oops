#include<iostream>
class time2
               {
                 int h,s,m;
               public:
                  //void time2(){}
                  void data(int a,int b,int c)
                          {
                            h=a;m=b;s=c;
                          }
                          friend void change(time2 &t,int k)
                                                   {
                                                     t.h=t.h+k;
                                                   }
                                                   void display()
                                                   {
                                                     std::cout<<"\nHOUR:"<<h;
                                                     std::cout<<"\nMIN:"<<m;
                                                     std::cout<<"\nSEC:"<<s<<"\n";
                                                   }
               };
               int main()
               {
                 time2 g;
                 g.data(2,3,4);
                 g.display();
                 change(g,4);
                 g.display();
               }
