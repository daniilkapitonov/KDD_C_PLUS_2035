#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
#include <ctime>
using namespace std;

void f(char *str){
    char *cash = str;
    cout << *cash++<< endl;
    cout << *cash++<< endl;
    cout << *cash++<< endl;
    cout << *cash++<< endl;
    cout << *cash++<< endl;
    cout << *cash++<< endl;
    cout << *cash++<< endl;
    cout << *cash++<< endl;
}

int main(int argc, char const *argv[])
{
    char *s = "Hello!";
    f(s);
}
