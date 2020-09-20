#include<iostream>
#include<ctime>
using namespace std;
main()
{
      clock_t currenttime;
      clock(currenttime);
      cout<<"the current local time is "<<clock(&currenttime)<<endl;
}

