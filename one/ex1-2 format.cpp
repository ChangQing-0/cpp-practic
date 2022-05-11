#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<setw(10)<<3.1415<<endl;
    cout<<setw(10)<<setfill('0')<<3.1415<<endl;
    cout<<setw(10)<<setfill('0')
                     <<setiosflags(ios::left)<<3.1415<<endl;
    cout<<setw(10)<<setfill('-')
                     <<setiosflags(ios::right)<<3.1415<<endl;
    return 0;
}
