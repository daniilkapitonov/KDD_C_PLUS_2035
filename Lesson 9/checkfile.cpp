#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream file;
    file.open("cash.txt", ios::trunc);
    for (int i=0;i<=10;i++){
        file << i<< "\n";
    }
    file.close();

    ifstream file1("cash.txt");
    string line;
    while (getline(file1, line)){
        cout << line << endl;
    }
    file1.close();

}
