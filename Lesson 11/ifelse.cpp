#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
#include <ctime>
using namespace std;
int main(int argc, char const *argv[])
{
    if ((!1!=2) || 1>2)
    {
        /* true */
    }else if (2>1){
        /* false */
    }
    else{

    }

    int m[2][2] = {{1,2},{4,5}};
    cout << m[0][4];   
    int a=6,b=3,c;
    c = a+b;
    cout << c;

    float q=2.2;
    cout << endl<< q/a;
    srand(time(0));
    cout << endl<< rand()%30;
    cout << endl << time(0)<< " "<< 20*60*60+28*60+35;

}
