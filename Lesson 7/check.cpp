#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

struct aeroflot{
    char *dest;
    int num;
    char type[1];
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
    char t[1];
    cout << "Введите тип - ";
    cin >> t;
    for (int i=0;i<n;i++){
        if (strcmp(t,mass[i].type)==0){
            print_plane(mass[i]);
        }
    }

}
