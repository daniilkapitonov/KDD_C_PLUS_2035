#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

struct m{
    int matr[4];
};

int *rand_mass(){
    int *mass = new int[5];
    for (int i=0;i<5;i++){
        mass[i] = rand()%10;
    }
    return mass;
}

void cout_m(int *mass){
    for (int i=0;i<5;i++){
        cout << mass[i] << " ";
    }
}

m in(m s){
    s.matr[0] ++;
    s.matr[1] ++;
    return s;
}

int main(int argc, char const *argv[])
{
    int *mass;
    mass = rand_mass();
    cout_m(mass);
    m q;
    q.matr[0] = 1;
    q.matr[1] = 2;
    q = in(q);
    cout <<endl << q.matr[0];

    string t="q", y="a";
    cout << endl<< (t[0]>y[0]);  




}
