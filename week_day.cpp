#include<iostream>
#include<string.h>
int month(int a,int y)
 {
   if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
    return 31;
    else if(a==4||a==6||a==9||a==11)
     return 30;
     else if(y%4==0)
     return 29;
      else
      return 28;
 }
char *days(int r)
 {
   char dd[10];
   if(r==1)
    strcpy(dd,"monday");
    else if(r==2)
       strcpy(dd,"tuesday");
     else if(r==3)
        strcpy(dd,"wednesday");
      else if(r==4)
         strcpy(dd,"thursday");
       else if(r==5)
        strcpy(dd,"friday");
        else if(r==6)
           strcpy(dd,"sturday");
          else
             strcpy(dd,"sunday");
    return dd;
 }
 int calculate(int d,int m,int y)
  {
    int i,o=0,j,l=0;
    for(j=0;j<y-1;j++)
  {
    if(y!=0)
      o=o+365;
      else if(i%4==0)
        o=o+366;

  }
  for(i=1;i<=m;i++)
  {
    if(m==i)
    {
      o=o+d;
    }
    else
    {
      o=o+month(i,y);
    }
  }

  return o;
  }
 int main()
  {
    //char day[2],month[2],year[4];
    int day,month,year,r;
    char ch[10];
    std::cout<<"\nTHE CALENDER BEGINS WITH MONDAY-\n01/01/0001\ndd/mm/yyyy\n";
    std::cout<<"\nEnter the date whose week day you want to know-";
    std::cin>>day>>month>>year;
    std::cout<<"\nDATE IS-"<<day<<"/"<<month<<"/"<<year;
    r=calculate(day,month,year);
    std::cout<<"\ntotal days is-"<<r<<"\n";
    ch=days(r);
    std::cout<<"\nDay is-"<<ch<<"\n";
  }
