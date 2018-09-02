#include<iostream>
#include<string.h>
//int saving;
int mmonth(char ch[])
 {
   int m;
   if(strcmp(ch,"january")==0)
    m=1;
    else if(strcmp(ch,"febuary")==0)
     m=2;
     else if(strcmp(ch,"march")==0)
      m=3;
      else if(strcmp(ch,"april")==0)
       m=4;
       else if(strcmp(ch,"may")==0)
        m=5;
        else if(strcmp(ch,"june")==0)
         m=6;
         else if(strcmp(ch,"july")==0)
          m=7;
          else if(strcmp(ch,"august")==0)
           m=8;
           else if(strcmp(ch,"september")==0)
            m=9;
            else if(strcmp(ch,"october")==0)
             m=10;
             else if(strcmp(ch,"november")==0)
              m=11;
              else if(strcmp(ch,"december")==0)
               m=12;
               else
               {
                 std::cout<<"\ninvalid month";
                 m=13;
                 //system("exit");
               }
               return m;
}
class employee
                       {
                         char month[10];
                         int pocket;
                         int save;
                         static int saving;
                         int month_expense;
                       public:

                          void insert_month_data(char m[10],int s,int u)
                          {
                            strcpy(month,m);
                            pocket=s;
                            month_expense=u;
                             save=s-u;
                             employee::saving=save+employee::saving;
                          }
                          void display_month_expenses()
                          {
                            std::cout<<"\nMonth-"<<month;
                            std::cout<<"\nTotal Pocket Money-"<<pocket;
                            std::cout<<"\nMonth Expense-"<<month_expense;
                            std::cout<<"\nSaving of month-"<<save;
                          }
                          static void overall()
                          {
                             std::cout<<"\nSAVINGS-"<<employee::saving;
                          }

                       };
                       int employee::saving;
  int main()
  {
    char month[10];
    int pocket,month_use,choice,m,mm;
    char ch;
    employee e[12];
   do  {system("clear");
   std::cout<<"\n1-INSERT MONTH DETAILS";
   std::cout<<"\n2-DISPLAY MONTH DETAILS";
   std::cout<<"\n3-OVERALL SAVINGS";
   std::cout<<"\nEnter your choice-";
   std::cin>>choice;
   switch(choice)
   {
     case 1:
                std::cout<<"Enter pocket money-";
                std::cin>>pocket;
                std::cout<<"Enter month usage-";
                std::cin>>month_use;
                y:std::cout<<"Enter month-";
                           fflush(stdin);
                           std::cin>>month;
                m=mmonth(month);
                if(m==13)
                  goto y;
                e[m].insert_month_data(month,pocket,month_use);
                break;
      case 2: f:std::cout<<"\nEnter  month no. which deatil you want-";
                  std::cin>>mm;
                  if(mn>13)
                   {
                     std::cout<<"\ninvalid";
                     goto f;
                   }
                  std::cout<<"\nMONTH DETAIL\n";
                  e[mm].display_month_expenses();
                  break;
      case 3:employee::overall();break;
   }
   std::cout<<"\nDo you want to continue then press y\n";
   std::cin>>ch;
   }while(ch=='y'||ch=='Y');
   return 0;
  }
