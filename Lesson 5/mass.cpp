#include <iostream>
#include <typeinfo>
using namespace std;

int main(int argc, char const *argv[])
{
    int mass[] = {1,2,3,4,5,6,7,8};
    int mass2[8];
    int x;
    // mass[3] = x;
    x= mass[0];

    cout << typeid(mass[1]).name() << endl;
    cout << typeid(x).name() << endl << endl;

    for (int i=0; i<size(mass2); i++){
        cout << mass[i] << endl;
    }
    cout << endl << size(mass2) << endl<< endl;

    int m2[2][2] = {
        {1,2},{3,4}
        };
    for (int i=0; i<2;i++){
        for (int j=0; j<2;j++){
            cout << m2[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << typeid(m2[0][0]).name() << endl << endl;


}
