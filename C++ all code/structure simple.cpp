#include<iostream>
#include<cstring>
using namespace std;
struct mybook{
char title[20];
char author[20];
int price;

};
struct mybook book1,book2;
main()
{
      strcpy(book1.author,"Balaguruswamy");
      strcpy(book1.title,"ANSII C");
      book1.price=120;
      cout<<book1.title<<"\n"<<book1.author<<"\n"<<book1.price<<endl;
}
