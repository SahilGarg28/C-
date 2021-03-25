#include<iostream>
#include<cmath>
using namespace std;
class clock{
    int hour,min,diff;
    public:
    void input()
    {
        cout<<"Enter hour and minutes: ";
        cin>>hour>>min;
    }
    void show()
    {
        cout<<hour<<" "<<min;
    }
    clock getdiff(clock bobj)
    {
        clock pitaji;
        int df=abs((hour*60+min)-(bobj.hour*60+bobj.min));
        pitaji.hour=df/60;
        pitaji.min=df%60;
        return(pitaji);
    }
};
int main()
{
    clock a,b,diff;
    a.input();
    b.input();
    diff=a.getdiff(b);
    diff.show();

}
