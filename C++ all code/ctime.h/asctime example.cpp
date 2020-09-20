#include<iostream>
#include<ctime>
using namespace std;
main()
{
      time_t currenttime;
      struct tm *timeinfo;
      time(&currenttime);
      timeinfo=localtime(&currenttime);
      cout<<"the current local date/time is "<<asctime(timeinfo)<<endl;
}

