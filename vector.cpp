#include<iostream>
using namespace std;
class vector1{
  int *a,n;
public:
vector1(void){}
  vector1(int k)
   {
      n=k;
     int i;
     a=new int[n];
     for(i=0;i<n;i++)
       a[i]=0;
      //(a+i=0;
   }
   void read()
   {
     int i;
     for(i=0;i<n;i++)
      {cout<<"Enter"<<i+1<<" element-";
        cin>>a[i];}
   }
   void dis()
   {
     int i;
     cout<<"\n";
     for(i=0;i<n;i++)
      cout<<"\t"<<a[i];
   }
    friend void sum(vector1 a1, vector1 a2, vector1 a3)
     {
       int i;
       for(i=0;i<a3.n;i++)
        a3.a[i]=a1.a[i]+a2.a[i];
     }
};
int main()
{
  vector1 b(5),c(5),d(5);


// cout<<"h";
 b.read();
 c.read();
 sum(b,c,d);
 //cout<<"g";
 d.dis();

}
