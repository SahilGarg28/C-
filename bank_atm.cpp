#include<iostream>
using namespace std;
class bank
{float oa=0,ad,aw,fa,cp,spin,rpin,p;
public:
    void setpin()
    {
        cout<<"Enter 4 digit pin number you want to set: ";
        cin>>spin;
        cout<<"Renter your pin number: ";
        cin>>rpin;
        if(spin==rpin)
        {
            cout<<"======================================"<<endl;
            cout<<"Your new pin is Successfuly Generated"<<endl;
            cout<<"======================================"<<endl;
        }
        else{
            cout<<"\n__________PIN INCORRECT_________\n\n";
            setpin();
        }

    }
    void open()
    {

        while(oa<1100)
        {
            cout<<"\n\n==========================================================\n"<<"==========================================================\n"<<"For opening new account you have to pay minimum of Rs.1100 "<<endl<<"=========================================================="<<endl<<"==========================================================\n\n\n";
            cout<<"Please Enter the amount of which you want to open your account: ";
            cin>>oa;
        }
        fa=oa;
    }
    void welcome()
    {
        cout<<"\t\t\t================================================="<<endl;
        cout<<"\t\t\tWelcome, Your account is opened with Rs."<<oa<<endl;
        cout<<"\t\t\t================================================="<<endl;
    }
    void deposit()
    {
        cout<<"Enter amount of deposit: ";
        cin>>ad;
        if(ad>=0)
        {
        fa=oa+ad;
        cout<<"\n--------------------------------\n";
        cout<<"Successfully Deposited= Rs."<<ad;
        cout<<"\n--------------------------------\n";
        }
        else{
        cout<<"\n--------------------------------\n";
        cout<<"_________NOT ALLOWED________";
        cout<<"\n--------------------------------\n";
        }
    }
    void withdraw()
    {
        cout<<"Enter amount to withdraw: ";
        cin>>aw;
        if(aw<0)
        cout<<"_______INVALID INPUT_______";
        else{
                if(fa>=aw)
                {
                fa=fa-aw;
                cout<<"\n--------------------------------\n";
                cout<<"Successfully Withdrawn= Rs."<<aw;
                cout<<"\n--------------------------------\n";
                }
                else
                {
                cout<<"\n--------------------------------\n";
                cout<<"You don't have sufficient credits"<<endl;
                cout<<"\n--------------------------------\n";
                }
            }
    
    }
    void showbal()
    {
        cout<<"================================"<<endl<<"Your current balance= "<<fa<<endl<<"================================"<<endl;
    }
    void pin()
    {
        cout<<"Enter your pin: ";
        cin>>p;
        if(p!=spin)
        {
            cout<<"\n------PIN INCORRECT-----";
            cout<<"\nPlease,Try again__/\\__\n";
            pin();
        }
        
    }
    void cpin()
    {
        setpin();
    }
};
int main()
{
    char choice='1';
    bank op;
    op.open();
    op.setpin();
    op.welcome();
    cout<<"\n\n==============================="<<endl<<"|------Account Enquiery-----|"<<endl<<"==============================="<<endl;
    while(choice!='0')
    {
        cout<<"\n\nEnter 1 to deposit.\n"<<"Enter 2 to withdraw.\n"<<"Enter 3 to show balance.\n"<<"Enter 4 to change PIN.\n"<<"Enter 0 to exit\n\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case '1':
            {   op.pin();
                op.deposit();
                break;
            }
            case '2':
            {   op.pin();
                op.withdraw();
                break;
            }
            case '3':
            {   op.pin();
                op.showbal();
                break;
            }
            case '4':
            {
                op.pin();
                op.cpin();
                break;
            }
            case '0':
            {
                cout<<"--------------Thank you for visiting _/\\_ ------------";
                cout<<"\n-------------------------------------------------------";
                break;
            }
            default:
            {
                cout<<"\n--------------------------------\n";
                cout<<"Invalid input"<<endl;
                cout<<"\n--------------------------------\n";
                break;
            }
        }
        fflush(stdin);
    }
    
}
