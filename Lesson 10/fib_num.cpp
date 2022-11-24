#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
using namespace std;
int count = 0;
int recursion(int n){
    if (n==0){
        return 0;
    } 
    if (n==1 || n==2){
        return 1;
    }
    return recursion(n-1)+recursion(n-2);

}


int main(int argc, char const *argv[])
{
    cout << "Введите число фибоначи - ";
    int x;
    cin >> x;
    cout << recursion(x);
}
