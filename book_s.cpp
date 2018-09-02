#include<iostream>
#include<string.h>
class book_s{
  char *author;
  char *title;
  int price;
  int stock;
  char *publisher;
  public:       book_s(void){
                             author= new char[1];
                             title = new char[1];
                             publisher= new char[1];
                             price=0;
                             stock=0;
                             std::cout<<"\ncame";
                         }
                    book_s(char *ch,char *ch1,char *ch2,int p=0,int s=0)
                            {
                              author = new char[strlen(ch)+1];
                              title = new char[strlen(ch1)+1];
                              publisher = new char[strlen(ch2)+1];
                              strcpy(author,ch);
                              strcpy(title,ch1);
                              price=p;
                              stock=s;
                              strcpy(publisher,ch2);
                            }
                            book_s(const book_s &g)
                            {
                              strcpy(author,g.author);
                              strcpy(title,g.title);
                              price=g.price;
                              stock=g.stock;
                              strcpy(publisher,g.publisher);
                                //=g;
                            }
                            void display()
                                                  {
                                                    std::cout<<"\nauthor="<<author;
                                                    std::cout<<"\ntitle="<<title;
                                                    std::cout<<"\nprice="<<price;
                                                    std::cout<<"\nStock="<<stock;
                                                    std::cout<<"\npublisher="<<publisher;
                                                    std::cout<<"\n";
                                                  }
                                int check(char auth[], char tit[])
                                            {
                                              if(strcmp(author,auth)==0 && strcmp(title,tit)==0)
                                                return 1;
                                              else
                                                return -1;
                                            }
};
int main()
{
  char auth[20],tit[20],pub[20],ch;
  int p,s,choice,i=0,j,f;
  book_s b[11];
  do{ system("clear");
    std::cout<<"\n1-Enter Book Data\n2-Display\n3-Search\n4-Exit\nChoice:-";
  std::cin>>choice;
  switch(choice)
             {
               case 1:    system("clear");
                            std::cout<<"\nEnter author name-";
                            std::cin>>auth;
                            std::cout<<"\nEnter title of book-";
                            std::cin>>tit;
                            std::cout<<"\nEnter Price-";
                            std::cin>>p;
                            std::cout<<"\nEnter Stock-";
                            std::cin>>s;
                            std::cout<<"\nEnter book publisher-";
                            std::cin>>pub;
                            b[i]=book_s(auth,tit,pub,p,s);
                         if(i>2)
                          {
                            for(j=1;j<i;j++)
                           {
                           f=b[j].check(auth,tit);
                            if(f==1)
                             {
                               std::cout<<"\nBook already Available";
                               book_s b[i]= b[j];//here i m trying to use copy contructor
                             }
                           }
                         }
                            i++;
                            break;
               case 2:    for(j=1;j<i;j++)
                              {
                                b[j].display();
                              }
                              break;
               case 3:     system("clear");
                              std::cout<<"\nEnter Book author name-";
                              std::cin>>auth;
                              std::cout<<"\nEnter title of book title-";
                              std::cin>>tit;
                             for(j=1;j<=i;j++)
                            {
                            f=b[j].check(auth,tit);
                             if(f==1)
                              {
                                std::cout<<"\nBook Available";
                                b[j].display();
                                break;
                              }
                            }
                         break;
               //case 4:std::cout<<"\n"
               case 4: exit(0);
             }
std::cout<<"\nDo u want to continue press y";
fflush(stdin);
std::cin>>ch;
}while(ch=='y'||ch=='Y');
}
