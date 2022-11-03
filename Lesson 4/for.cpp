#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=1;
    for(int i=10; (i>0 || a<20); i--){
        cout << i <<"--"<<a << endl;
        a++;
    }
}
