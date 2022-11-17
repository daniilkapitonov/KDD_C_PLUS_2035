#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

struct aeroflot{
    string dest;
    int num;
    string type;
};

aeroflot input(){
    aeroflot cash;
    cin >> cash.dest >> cash.num >> cash.type;
    return cash;
}
void print_plane(aeroflot plane){
    cout << "Пункт назначения - "<< plane.dest<<endl;
    cout << "Номер рейса - "<< plane.num<<endl;
    cout << "Тип самолёта - "<< plane.type<<endl;

}
int main(int argc, char const *argv[])
{
    int n=1;
    aeroflot mass[n];
    for (int i=0; i<n;i++){
        mass[i] = input();
        // print_plane(mass[i]);
    }
    string t;
    cout << "Введите тип - ";
    cin >> t;
    for (int i=0;i<n;i++){
        cout << i;
        if (t==mass[i].type){
             print_plane(mass[i]);
        }
    }

}
