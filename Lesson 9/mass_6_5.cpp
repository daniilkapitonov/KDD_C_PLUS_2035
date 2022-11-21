#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
int mass[6][5];
void mass_fill(){
    for (int i=0; i<6;i++){
        for (int j=0; j<5;j++){
            mass[i][j] = rand()%25+1;
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
}

int mass_max(){
    int max=0;
    for (int i=0; i<6;i++){
        for (int j=0; j<5;j++){
            if (mass[i][j]>max){
                max = mass[i][j];
            }
        }
    }
    return max;
}
int mass_min(){
    int min=26;
    for (int i=0; i<6;i++){
        for (int j=0; j<5;j++){
            if (mass[i][j]<min){
                min = mass[i][j];
            }
        }
    }
    return min;
}
int main(int argc, char const *argv[])
{
    mass_fill();
    cout << "Максимум - " << mass_max()<< endl;
    cout << "Минимум - " << mass_min()<< endl;    
}
