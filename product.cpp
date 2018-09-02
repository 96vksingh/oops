#include<iostream.h>
class product
                     {
                       int id;
                       char product_name[20];
                       float product_price;
                     public:
                       void insert_data(int a,char name[20],float price)
                        {
                          id=a;
                          product_name=name;
                          product_price=price;
                        }
                      void view_data(void)
                       {
                         cout<<"\nID-"<<id;
                         cout<<"\nPRODUCT NAME-"<<product_name;
                         cout<<"\nPRODUCT PRICE-"<<product_price;
                       }
                     };
  int main()
  {
    int id;
    float price;
    char product_name[20];
    product p;
    cout<<"\nEnter ID-";
    cin>>id;
    cout<<"\nEnter Product Name-";
    cin>>product_name;
    cout<<"\nEnter Product Price-";
    cin>>price;
    p.insert_data(id,product_name,price);
    p.view_data(void);
  }
