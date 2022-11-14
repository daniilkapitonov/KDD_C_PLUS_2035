#include <iostream>
#include <iomanip>
using namespace std;
void matr_print(int **matr, int size){
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            cout << matr[i][j] << " ";
        }
        cout << endl;
    }
}
int **matr_allocator(int **matr, int size){
    matr = new int* [size];
    for (int i=0;i<size;i++){
        matr[i] = new int[size];
    }
    return matr;
}
int **matr_rand(int **matr, int size){
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            matr[i][j] = rand() &100+1;
        }
    }
    return matr;
}
// void matr_plus(int **matr1, int **matr2, int size){
//     int **mass=NULL;
//     mass = matr_allocator(mass, size);
//     for (int i=0;i<size;i++){
//         for (int j=0;j<size;j++){
//             mass[i][j] = matr1[i][j]+matr2[i][j];
//         }
//     }
//     cout << endl;
//     matr_print(mass, size);
// }
int **matr_plus(int **matr1, int **matr2, int size){
    int **mass=NULL;
    mass = matr_allocator(mass, size);
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            mass[i][j] = matr1[i][j]+matr2[i][j];
        }
    }
    return mass;
}
int main(int argc, char const *argv[])
{
    int **mass1;
    int **mass2;
    int size = 5;
    mass1 = matr_allocator(mass1, size);
    mass1 = matr_rand(mass1,size);
    matr_print(mass1,size);
    cout<<endl;
    mass2 = matr_allocator(mass2, size);
    mass2 = matr_rand(mass2,size);
    matr_print(mass2,size);
    cout<<endl;
    int **res_mass;
    res_mass = matr_plus(mass1,mass2,size);  
    matr_print(res_mass,size); 

}
