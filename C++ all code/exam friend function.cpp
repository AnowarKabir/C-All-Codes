#include<iostream>
using namespace std;
class area{
int height , width;
public:
      void set(int h,int w){height=h;width=w;}
      int getarea(){return height*width;}
      friend class volume;
};
class volume{
      int breadth;
public:
      void setbreadth(int b){breadth=b;}
      int getvolume(area ar){return breadth*ar.height*ar.width;}
};
main()
{
      area A;
      A.set(2,3);
      cout<<A.getarea()<<endl;
      volume vol;
      vol.setbreadth(5);
      cout<<vol.getvolume(A)<<endl;
}
