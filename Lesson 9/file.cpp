#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream file;
    file.open("test.txt", ios::app);
    file << "Наш первый текст в файле \n";
    file.close();
}
