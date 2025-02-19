
#include<iostream>
using namespace std;
class publication
{
  public:
  string title;
  float price;

  
  void get()
  
  {
   cout<<"enter the title : ";
   cin>>title;
   cout<<"enter price : ";
   cin>>price;
  }
  
  void display()
  
  {
   cout<<"title : "<<title<<endl;
   cout<<"price : "<<price<<endl;
  }
  
};
class book:public publication
{
 int pcount;
 
 public:
 
 void pagecount()
 {
  cout<<"enter the page count of the book : ";
  cin>>pcount;
 }
 
 void displaycount()
 {
  cout<<"pagecount of book : "<<pcount<<endl;
 }
};

class tape:public publication
{
 float ptime;
 
 public:
 
 void playtime()
 {
  cout<<"enter playtime : ";
  cin>>ptime;
 }
 
  void displayplaytime()
 {
  cout<<"playtime is :"<<ptime<<endl;
 }
};

int main()
{
 book B1;
 tape B2;
 B1.get();
 B1. pagecount();
 B1.display();
 B1. displaycount();
 cout<<"-----------------"<<endl;
 B2.get();
 B2. playtime();
 B2.display();
 B2. displayplaytime();
 return 0;
 }

// enter the title : AAA
// enter price : 600
// enter the page count of the book : 210
// title : AAA
// price : 600
// pagecount of book : 210
// -----------------
// enter the title : BBB
// enter price : 450
// enter playtime : 55 
// title : BBB
// price : 450
// playtime is :55