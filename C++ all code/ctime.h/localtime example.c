#include<iostream>
#include<ctime>
using namespace std;
main()
{
      time_t a;
      struct tm *timeinfo;
      time(&a);
      timeinfo=localtime(&a);
      cout<<"the current local date/time is "<<asctime(timeinfo)<<endl;
}


