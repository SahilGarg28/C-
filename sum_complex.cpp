#include<iostream>
using namespace std;
class comp
{
    int x,y;
    public:
    void input()
    {
        cout<<"enter real part and imaginary part of your complex number: ";
        cin>>x>>y;
    }
    void show()
    {
        cout<<"sum of two complex number is "<<endl<<x <<" + "<<y<<"i";
    }
    comp getsum(comp bobj)
    {
        comp pitaji;
        pitaji.x=x+bobj.x;
        pitaji.y=y+bobj.y;
        return(pitaji);
    }
};
int main()
{
    comp a,b,sum;
    a.input();
    b.input();
    sum=a.getsum(b);
    cout<<"-------------------------------------"<<endl;
    sum.show();

}
