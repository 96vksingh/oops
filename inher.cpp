#include<iostream>
using namespace std;
class inherit
{
  int a,b;
public:
  void dis1()
  {
    cout<<"\ni am in class inherit in function dis1()";
  }
  void dis2()
  {
    cout<<"\ni am in class inherit in function dis2()";
  }
protected:
  void dis_protected()
   {
     cout<<"i am protected in class inherit within function dis_protected()";
   }
};
class again_inherit : public inherit
{
  int c,d;
public:
  void trying_to_call()
   {
     dis1();
   }

};
int main()
{
  again_inherit a;
  a.trying_to_call();
}
