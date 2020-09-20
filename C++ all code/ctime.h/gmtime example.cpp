#include<iostream>
#include<ctime>
#include<cstdio>

using namespace std;
main()
{
      time_t a;
      struct tm *pt;
      time(&a);
      pt=gmtime(&a);
      cout<<"US "<<(pt->tm_hour+(-7))%24<<":"<<pt->tm_min<<endl;
       cout<<"Iceland "<<(pt->tm_hour+(0))%24<<":"<<pt->tm_min<<endl;
        cout<<"China "<<(pt->tm_hour+(8))%24<<":"<<pt->tm_min<<endl;
}
