#include<iostream>
#include<ctime>
using namespace std;
main()
{
      time_t t;
      struct tm y={0};
      double sec;
      y.tm_hour=0;
      y.tm_min=0;
      y.tm_sec=0;
      y.tm_year=100;
      y.tm_mon=0;
      y.tm_mday=1;
      time(&t);
      sec=difftime(t,mktime(&y));
      cout<<"since january 1,2000 in the current timejone is "<<sec<<" seconds"<<endl;
}
