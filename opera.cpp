#include<iostream>
using namespace std;
//int s;
class test{
  int *a,size;
public:
  test(){a=new int[10];}
  test(int x){
    int i;
    size=x;
    a=new int[size];
    cout<<"\nsize==="<<size;
    for(i=0;i<x;i++)
     {
       cout<<"\nEnter "<<i+1<<" element-";
       cin>>a[i];
     }
  }
  void display()
  {
    int i;
    for(i=0;i<size;i++)
     {
       cout<<"\tElement-"<<i+1<<" "<<a[i];
     }
  }
    friend test operator+ (test a1,test b1)
    {
      int i;
      test f;
      f.size=a1.size;
      for(i=0;i<a1.size;i++)
       f.a[i]=a1.a[i]+b1.a[i];
       return f;
    }
    friend test operator++ (test a1)
    {
      int i;
      test f;
      f.size=a1.size;
      for(i=0;i<a1.size;i++)
       f.a[i]=a1.a[i]+1;
       return f;
    }
    friend test operator+ (test d,int x)
     {
       test r;
       int i;
       r.size=d.size;
       for(i=0;i<d.size;i++)
       r.a[i]=d.a[i]+x;
       return r;
     }
   void operator- ()
   {
      int i,b[size],k=0;
      for(i=size-1;i>=0;i--)
       {b[k]=a[i];k++;}
       for(i=0;i<size;i++)
        {a[i]=b[i];}
    }
    int operator[] (int i)
    {
      return a[i];
    }
    ~test()
    {
      delete a;
    }
};
int main()
{

  int d,x,y,i=0,s;
  int che,j,g;
  char ch;
  int choice;
  do{system("clear");
    cout<<"\n1-Add 2 Matrix \n2-Reverse of Arrays\n3-Add no to all element\n4-Increment by 1\n5-Subscript\nChoice:";
  cin>>choice;
  switch(choice)
  {
    case 1:
            {
             cout<<"\nEnter size of matrix-";
             cin>>s;
             test m1(s);
             test m2(s);
             test m3;
             m3=m1+m2;
             m3.display();
             }
              break;
    case 2:
             {
               cout<<"\nEnter size of matrix-";
              cin>>s;
              test r(s);
              -r;
              r.display();
              }
              break;
    case 3:{cout<<"\nEnter size of matrix-";
              cin>>s;
              test g(s);
              cout<<"\nEnter no which u want to add in all the array elements-";
              cin>>s;
              test j;
              j=g+s;
              j.display();}
              break;
      case 4: {cout<<"\nEnter size of matrix-";
                 cin>>s;
                 test r(s);
                 test k;
                 k=++r;
                 k.display();}
                 break;
      case 5: {
                 cout<<"\nEnter size of matrix-";
                 cin>>s;
                 test y(s);
                 for(i=0;i<s;i++)
                 cout<<"\nElement 1-"<<y[i];
                }
                 break;
  }
  cout<<"\nDo u want to contiue press y";
  fflush(stdin);
  cin>>ch;
}while(ch=='y'||ch=='Y');
}
