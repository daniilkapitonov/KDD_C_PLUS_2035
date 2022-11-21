#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int *rand_mass(int size){
    int *mass = new int[size];
    for (int i=0;i<size;i++){
        mass[i] = rand()%20;
    }
    return mass;
}

void cout_m(int *mass, int size){
    for (int i=0;i<size;i++){
        cout << mass[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int n = 10000;
    long int count;
    int *mass = rand_mass(n);
    cout_m(mass, n);
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (mass[i]>mass[j]){
                int cash = mass[i];
                mass[i] = mass[j];
                mass[j] = cash;
            }
            count++;
        }
    }
    cout << endl;
    cout_m(mass, n);
    cout << endl << count;
    
    
}
