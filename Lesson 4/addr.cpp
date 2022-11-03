#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=9;
    cout << a << endl << &a << endl<< *(&a) << endl;
    int *ptr = &a;
    cout<< endl << &a << endl << ptr << endl<<endl;

    int b=5;
    int *ptr2 = &b;
    cout << b << endl<< ptr2<< endl<<*ptr2<< endl;
    *ptr2 = 4;
    cout << endl<< b << endl<< ptr2<< endl<<*ptr2<< endl;
}
