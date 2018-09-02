#include<iostream>
#include<string.h>
class employee
                      {
                        int eid;
                        int e_salary;
                        int check;
                        static int salary;
                      public:
                         void e_data(int i,int s,int c)
                         {
                           eid=i;
                           e_salary=s;
                           check=c;
                           if(check==0)
                             employee::salary=employee::salary+e_salary;
                          // employee::sum();
                         }
                         void d_data()
                          {
                            std::cout<<"\nEmployee ID-"<<eid;
                            std::cout<<"\nSalary-"<<e_salary;
                             if(check==0)
                                 std::cout<<"\nCAME ALL DAYS IN MONTH";
                              else
                               std::cout<<"\nDID NOT COME ALL DAYS IN MONTH";
                          }
                          static void sum()
                           {
                             std::cout<<"\nTOTAL SALARY OF ALL EMPLOYEES CAME ALL DAYS"<<employee::salary;
                           }
                      };
                      int employee::salary=0;
          int main()
          {
              int id,sal,check,choice;
              char ch;
              employee e[10];

             do  {system("clear");
              std::cout<<"\n1-Enter Employee Detail \
                                  \n2-Display Employee Detail \
                                  \n3-Overall salary for all the employee present whole month \
                                  \nEnter your choice-";
             std::cin>>choice;
             switch(choice)
              {
                 case 1:std::cout<<"\nEnter the employee id-";
                            std::cin>>id;
                            std::cout<<"\nEnter the salary of employee-";
                            std::cin>>sal;
                            std::cout<<"\nEnter 0 if all days present in the month -";
                            std::cin>>check;
                            e[id].e_data(id,sal,check);
                            break;
                  case 2:std::cout<<"\nEnter the employee id-";
                             std::cin>>id;
                             e[id].d_data();
                             break;
                  case 3:employee::sum();
                             break;
              }
              std::cout<<"\nDo you want to continue then press y \n";
              std::cin>>ch;
              }while(ch=='y'||ch=='Y');
            return 0;
          }
