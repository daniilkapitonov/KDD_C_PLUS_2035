#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=5;
    cout << &a<< endl;
    int *p = &a;
    char *c="qweqwe";
    cout << c;
}
