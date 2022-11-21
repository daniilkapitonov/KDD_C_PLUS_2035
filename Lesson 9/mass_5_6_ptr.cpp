#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int **mass_fill(int x, int y){
    int **mass = NULL;
    mass = new int*[x];
    for(int i=0;i<x;i++){
        mass[i] = new int[y];
    }
    for (int i=0; i<x;i++){
        for (int j=0; j<y;j++){
            mass[i][j] = rand()%25+1;
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    return mass;
}

int mass_max(int **mass, int x, int y){
    int max=0;
    for (int i=0; i<x;i++){
        for (int j=0; j<y;j++){
            if (mass[i][j]>max){
                max = mass[i][j];
            }
        }
    }
    return max;

}
int mass_min(int **mass, int x, int y){
    int min=26;
    for (int i=0; i<x;i++){
        for (int j=0; j<y;j++){
            if (mass[i][j]<min){
                min = mass[i][j];
            }
        }
    }
    return min;

}
int main(int argc, char const *argv[])
{
    int **matr = NULL;
    matr = mass_fill(10,10);
    cout << "Максимум - " << mass_max(matr,10,10)<< endl;
    cout << "Минимум - " << mass_min(matr,10,10)<< endl;  
    delete [] matr;
  
}
