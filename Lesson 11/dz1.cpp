// Задача 1:
// Написать программу, где будет универсальная функция, которая получает 
// массив и его размеры, которые вводит пользователь. (массив двумерный), 
// далее пользователь может ВЫБРАТЬ что посчитать к массива: сумму главной или побочной диагонали 
// или ср-ар каждой строки. На выходе получаем сам массив и результат запроса.

#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
using namespace std;

int **mass_init(int **mass, int x, int y){
    mass = new int*[x];
    for (int i=0;i<x;i++){
        mass[i] = new int[y];
    }
    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            mass[i][j] = rand()%100+1;
            cout << mass[i][j]<< " ";
        }
        cout << endl;
    }
    return mass;
}

bool check_diag(int x,int y){
    if (x==y && x%2==1){
        return true; 
    }else{
        return false;
    }
}

void analyze(int **mass, int x,int y,int t){
    bool flag = check_diag(x,y);
    int res1=0,res2=0;
    for (int i=0;i<x;i++){
        float sr=0;
        for (int j=0;j<y;j++){
            if (flag){
                if (i==j){
                    res1 = res1 + mass[i][j];
                }
                if (i+j == x-1){
                    res2 = res2 + mass[i][j];
                }
            }
            sr= sr+mass[i][j];
        }
        if (t==3){
            cout << i<<" - "<< sr/y<< endl;
        }
    }
    if (t==1){
        cout << res1<< endl;
    }else if (t==2)
    {
        cout << res2<< endl;
    }
}

int main(int argc, char const *argv[])
{
    int x,y;
    cin >> x>>y;
    int **mass = mass_init(mass,x,y);
    cout << "Выберите действие (1-гл. диаг, 2-пб. диаг, 3-ср.ар.) - ";
    int u;
    cin >> u;
    int res = 0;
    switch (u)
    {
    case 1:
        analyze(mass,x,y,u);
        break;
    case 2:   
        analyze(mass,x,y,u);
        break;
    case 3:
        analyze(mass,x,y,u);
        break;
    
    default:
        cout << "Такого варианта нет." << endl;
        break;

    }
    
}
