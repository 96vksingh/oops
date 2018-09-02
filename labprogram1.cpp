#include<iostream>
#include<string.h>
class cricket
                   {
                     char player[20];
                     int s1[5];
                     int total;
                     char cal(int a)
                      {
                        if(a>=100)
                         return 'H';
                         else if(a>=50)
                          return 'F';
                          else
                           return 'N';
                      }
                   public:
                     void player_detail()
                      {
                        std::cout<<"\nEnter name of the player-";
                        fflush(stdin);
                        std::cin>>player;
                        std::cout<<"\nEnter total no of sixes scored-";
                        std::cin>>s1[0];
                        std::cout<<"\nEnter total no of fours scored-";
                        std::cin>>s1[1];
                        std::cout<<"\nEnter total no of threes scored-";
                        std::cin>>s1[2];
                        std::cout<<"\nEnter the total doubles scored-";
                        std::cin>>s1[3];
                        std::cout<<"\nEnter the total singles scored-";
                        std::cin>>s1[4];
                        //total=(6*s1[1])+(4*s1[2])+(2*s1[3])+(1*s1[4]);
                      }
                     void calac()
                         {
                           total=0;
                           total=(6*s1[0])+(4*s1[1])+(3*s1[2])+(2*s1[3])+(1*s1[4]);
                         }

                      void player_specs()
                       {
                         std::cout<<"\nNAME-"<<player;
                         calac();
                         std::cout<<"\nRUNS SCORED-"<<total;
                         std::cout<<"\nSIX-"<<s1[0]<<"\tFOUR-"<<s1[1]<<"\tTHREES-"<<s1[2]<<"\tDOUBLE-"<<s1[3]<<"\tSINGLE-"<<s1[4];
                         if(cal(total)=='H')
                          std::cout<<"\nHUNDRED SCORED\n";
                          else if(cal(total)=='F')
                           std::cout<<"\nFIFTY SCORED\n";
                           else
                           std::cout<<"\nSCORED LESS THEN 50\n";
                       }
                   };
int main()
 {
   cricket c[11];
   char ch;
   int choice,no;

      do{
        system("clear");
   std::cout<<"\n1-ENTER THE DETAILS OF PLAYER\n";
   std::cout<<"\n2-VIEW PLAYER DETAILS";
   std::cout<<"\nENTER YOUR CHOICE-";
   std::cin>>choice;
   switch(choice)
    {
      case 1:system("clear");
                 std::cout<<"\nEnter player no-";
                 std::cin>>no;
                 c[no].player_detail();
                 std::cout<<"\nDATA SUCCESSFULLY ADDED";
                 break;
       case 2:system("clear");
                  std::cout<<"\nEnter player no whose detail you want to see-";
                  std::cin>>no;
                  std::cout<<"\nDETAILS OF THE PLAYER IS\n";
                  c[no].player_specs();
                  break;
    }
    std::cout<<"\nDo you want to continue then press y\n";
    std::cin>>ch;
  }while(ch=='y'||ch=='Y');
   return 0;
 }
