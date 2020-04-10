#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int *p;
    p=new int;
    *p=100;
    cout<<"dia chi co gia tri tro toi p"<<p<<endl;
    cout<<"dia chi co gia tri duoc p tro toi="<<*p<<endl;
    delete p;
    return 0;

}
