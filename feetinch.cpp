#include<iostream>
class dm;
class db
             {
               float m;
               float c;
               public:

               void enter_m(int a,int b)
                {
                  m=a;
                  c=b;
                }
                friend float change1(db,dm);
                friend float change2(db,dm );
             };
class dm
              {
                float f;
                float i;
              public:
                void enter_f(int a,int b)
                 {
                   f=a;
                   i=b;
                 }
                 friend float change1(db,dm );
                 friend float change2(db,dm );
              };

              float change1(db t,dm y)
              {
                float to,d,total,h,l;
                h=(t.c)/100;
                d=39.3701*((t.m)+h);
                std::cout<<"\nm="<<d<<"\n";
                l=(y.i)/12;
                to=(y.f)+l;
                std::cout<<"\nf="<<to<<"\n";
                total=d+to;
                return total;
              }
              float change2(db t,dm y)
              {
                float to,d,total,h,l;
                h=(t.c)/100;
                d=39.3701*((t.m)+h);
                std::cout<<"\nm="<<d<<"\n";
                l=(y.i)/12;
                to=(y.f)+l;

                std::cout<<"\nf="<<to<<"\n";
                total=(d+to)*0.3048;
                return total;
              }
  int main()
  {
    float g;
    db t;
    dm y;
    t.enter_m(2,4);
    y.enter_f(4,5);
    g=change1(t,y);
    std::cout<<"\ntotal 1-"<<g;
    g=change2(t,y);
    std::cout<<"\ntotal 2-"<<g;
  }
