#include<iostream>
using namespace std;

int main()
{
    int t,A1,A2,A3,A4,A5,A6,A7;
    cout<<"Test Cases ";
    cin>>t;

    while(t--)
    {
        cin>>A1>>A2>>A3>>A4>>A5>>A6>>A7;
        if(A1+A2+A3+A4+A5+A6+A7>=4)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
