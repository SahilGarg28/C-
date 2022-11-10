/*
                                *        
                        #       *       *        
                #       #       *       *       *        
        #       #       #       *       *       *       *   
*/

#include <iostream>
using namespace std;
int main() {
    for(int i=0;i<4;i++)
    {
        for(int a=4;a>0;a--)
        
        {   if(a<=i)
            cout<<"#\t";
            else
            cout<<" \t";
        }
        for(int c=0;c<=i;c++)
        {
            cout<<"*\t";
        }
        cout<<""<<endl;
    }

    return 0;
}
