#include<iostream>
class time{

  int hour,min,sec;
public:time(){}
  time(int h,int m,int s)
   {
     hour=h;
     min=m;
     sec=s;
   }
     void display(void)
     {
       std::cout<<"\nhour-"<<hour;
       std::cout<<"\nminute-"<<min;
       std::cout<<"\nsecond-"<<sec;
       std::cout<<"\n";
     }
     time addtime(time t1,time t2)
      {
        time t;
        t.sec=(t1.sec+t2.sec)%60;
        t.min=(t1.sec+t2.sec)/60;
        t.min=(t.min+(t1.min+t2.min))%60;
        t.hour=(t.min+t1.min+t2.min)/60;
        t.hour=hour+t.hour+t2.hour;
        return t;
      }

}
