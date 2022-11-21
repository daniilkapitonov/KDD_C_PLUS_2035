#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x=2;
    int y=0;
    int res;
    try{
        if (y==0){
            throw string("23");
        }
        if (x==2){
            throw string("ERR");
        }
        res = x/y;
        cout << "THERE";
    }  catch(string x){
        cout << "Номер ошибки - " << x << endl;
    }
}
