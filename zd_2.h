#include <iostream>

using namespace  std;

void viewPointer(void * p)
{
    char *p1 = reinterpret_cast<char *>(p);
    unsigned short *p2 = reinterpret_cast<unsigned short *>(p);
    double *p3 = reinterpret_cast<double *>(p);
    cout<<"adress first p "<<&p1<<endl;
    cout<<"adress second p "<<&p2<<" "<<"Number"<<hex<<p2<<endl;
    cout<<"adress third p "<<&p3<<" "<<"Number "<<hex<<p3<<endl;
    cout<<"Adress add"<<(&p1 + 1)<<endl;
    cout<<"Adress add"<<(&p2 + 1)<<endl;
    cout<<"Adress add"<<(&p3 + 1)<<endl;


}


int zd2()
{
    char p1='a';
    double p2=2.31;
    int p3=3;
    viewPointer(&p1);
    viewPointer(&p2);
    viewPointer(&p3);

}