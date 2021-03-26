#include<iostream>
using namespace std;
class bank
{float oa=0,ad,aw,fa;
public:
    void open()
    {
        // cout<<"Minimum amount for opening account in our bank is Rs.1100";
        // cout<<"Please Enter the amount of which you want to open your account: ";
        // cin>>oa;
        while(oa<1100)
        {
            cout<<"\n\n=======================================================\n"<<"=======================================================\n"<<"For opening new account you have to pay minimum of Rs.1100 "<<endl<<"======================================================="<<endl<<"=======================================================\n\n\n";
            cout<<"Please Enter the amount of which you want to open your account: ";
            cin>>oa;
        }
        fa=oa;
        cout<<"\n\n\t\t\tWelcome, Your account is opened with Rs."<<oa<<endl;
    }
    void deposit()
    {
        cout<<"Enter amount of deposit: ";
        cin>>ad;
        if(ad>=0)
        fa=oa+ad;
        else
        cout<<"_________NOT ALLOWED________";
    }
    void withdraw()
    {
        cout<<"Enter amount to withdraw: ";
        cin>>aw;
        if(aw<0)
        cout<<"_______INVALID INPUT_______";
        if(fa>=aw)
        fa=fa-aw;
        else
        cout<<"You don't have sufficient credits"<<endl;
    }
    void showbal()
    {
        cout<<"==============================="<<endl<<"Your current balance= "<<fa<<endl<<"==============================="<<endl;
    }
};
int main()
{
    int choice=1;
    bank op;
    op.open();
    cout<<"==============================="<<endl<<"|------Account Enquiry-----|"<<endl<<"==============================="<<endl;
    while(choice!=0)
    {
        cout<<"\n\nEnter 1 to deposit.\n"<<"Enter 2 to withdraw.\n"<<"Enter 3 to show balance.\n"<<"Enter 0 to exit\n\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                op.deposit();
                break;
            }
            case 2:
            {
                op.withdraw();
                break;
            }
            case 3:
            {
                op.showbal();
                break;
            }
            case 0:
            {
                cout<<"--------------Thank you for visiting _/\\_ ------------";
                break;
            }
            default:
            {
                cout<<"Invalid input"<<endl;
                break;
            }
        }
    }
}
