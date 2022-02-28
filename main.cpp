#include <iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
class triangle
{
public:
    void inpudata();
    void display();
private:
    int girth;
    double area;
};
void triangle::inpudata()
{
    int x1,y1,x2,y2,x3,y3;
    double a,b,c,hx1,hy1,h;
    cout<<"please input triangle`s three coordinate:"<<endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    if((a+b>c)&&(a-b<c))
    {
        hx1=(x2+x3)/2.0;
        hy1=(y2+y3)/2.0;
        h=sqrt((x1-hx1)*(x1-hx1)+(y1-hy1)*(y1-hy1));
        girth=a+b+c;
        area=(h*b)/2.0;
    }
    else
    {
        cout<<endl;
        cout<<"Define error ! please try again !"<<endl;
        exit(0);
    }
}
void triangle::display()
{
    cout<<"triangle1`s girth : "<<girth<<endl;
    cout<<"triangle1`s area : "<<area<<endl;
}
int main()
{
    triangle t;
    t.inpudata();
    cout<<endl;
    cout<<endl;
    t.display();
    cout<<endl;
    return 0;
}
