#include<iostream>
using namespace std;
class mat
{
                  int **p;
                  int d1,d2;
          public:
                  mat(void){}
                  mat(int x,int y)
                  {
                    d1=x;
                    d2=y;
                    p= new int *[d1];
                    for(int i=0;i<=d1;i++)
                      p[i]=new int [d2];
                  }
                  void getelement(int i,int j,int value)
                   {
                     p[i][j]=value;
                   }
                   int putelelement(int i,int j)
                    {
                      return p[i][j];
                    }
                    ~mat()
                    {
                      for(int i=0;i<d1;i++)
                       delete p[i];
                       delete p;
                    }
};//class
// mat mat(int x,int y)
// {
//   d1=x;
//   d2=y;
//   p= new int *[d1];
//   for(int i=0;i<=d1;i++)
//     p[i]= new int d[2];
// }
int main()
{
  int m,n,value;
  cin>>m>>n;
  mat A(m,n);
  for(int i=0;i<m;i++)
   for (int j = 0; j < n; j++)
   {
     cin>>value;
     A.getelement(i,j,value);
   }
   for(int i=0;i<m;i++)
    {cout<<"\n";
      for (int j = 0; j < n; j++)
   cout<<A.putelelement(i,j)<<"\t";}
}
//mat::
