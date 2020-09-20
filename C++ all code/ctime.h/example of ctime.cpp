#include<iostream>
#include<ctime>
using namespace std;
main()
{
      time_t t;
      time(&t);
      cout<<"the current local time is "<<ctime(&t)<<endl;
}
