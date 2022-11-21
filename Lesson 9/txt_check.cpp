#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    fstream cash("txt.txt");
    if (!cash.is_open())
    {
        cout << "FNF" << endl;
        ofstream file;
        file.open("txt.txt");
        file.close();
    }else{
        cout << "FIN" << endl;
    }
}
