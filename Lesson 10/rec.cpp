#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
using namespace std;

int count=0;

int recursion(int num){
    count++;
    cout << "Эта рекурсия под номером "<< count << " запустилась"<< endl;
    if (num ==0){
        
        // cout << "Эта рекурсия под номером "<< count-1 << " завершилась"<< endl;
        return 1;
    }else{
        int cash = recursion(num-1);
        count--;
        cout << "Эта рекурсия под номером "<< count << " завершилась"<< endl;

        return (num * cash);
    }
}

int main(int argc, char const *argv[])
{
    cout << "Введите число для ! - ";
    int x;
    cin >> x;
    cout << recursion(x);

}
