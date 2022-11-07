// #include "stdafx.h"
#include <iostream>
#include <typeinfo>

using namespace std;

int main(int argc, char const *argv[])
{
    // cout << rand()%70+1;
    int m2[5][5];
    for (int i=0; i<5;i++){
        int sum = 0;
        for (int j=0; j<5;j++){
            m2[i][j] = rand()%20+1;
            cout << m2[i][j] << " ";
            sum += m2[i][j];
        }
        cout <<"sum = "<< sum<< endl;
    }

}
