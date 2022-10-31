#include <iostream>
using namespace std;

int main()
{
    int  a, b = 70, raz = 0, raz_now = 0;
        
    while (a != b){
        cout << "Введите число:" << endl;
        cin >> a;

        if (a == b) 
        {
            cout << "Молодец, возьми конфетку"; 
            break;
        }

        raz_now = abs(a - b); 
        float fl=0.0;
        
        if (raz_now <= raz)
        {
            fl = b/a;
            cout << "hot, Вы ошиблись в " << fl << endl;
        }
        else
        {
            fl = a/b;
            cout << "cold, Вы ошиблись в " << fl << endl;
        }

        raz = raz_now;
    } 
}