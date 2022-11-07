#include <iostream>
#include <typeinfo>

using namespace std;

void hello(){
    cout << "Hello" << endl;
}

int sum(int n1=2, int n2=4){
    int sum;
    sum = n1+n2;
    return sum;
    int a=2;
    cout << "xxxxx";
}

int main(int argc, char const *argv[])
{
    hello();
    int x = sum();
    cout << x;
    return 0;
}
