
#include<iostream>

using namespace std;

class ArithmeticX
{
    public:

        void DisplayRangeReverse(int,int);
};

void ArithmeticX::DisplayRangeReverse(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        cout<<"Invalid Range\n";
        return;
    }

    for(int i = iNo2; i >= iNo1; i--)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter First Number\n";
    cin>>iValue1;

    cout<<"Enter Second Number\n";
    cin>>iValue2;

    ArithmeticX aobj;
    aobj.DisplayRangeReverse(iValue1,iValue2);

    return 0;
}