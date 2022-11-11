// 3.(ОБНОВЛЕНО)Создать дву-мерный массив размерностью 3 на 3, ввести его 
// с клавиатуры. Найти ср. ар. каждой строки, ср. ар. всего массива.
#include <iostream>
#include <typeinfo>
using namespace std;

int main(int argc, char const *argv[])
{
    int mass[3][3];
    for (int i=0; i<3;i++){
        for (int j=0;j<3;j++){
            cin >> mass[i][j];
        }

    }
    float sr_ar_str=0, sr_ar_all=0;
    for (int i=0; i<3;i++){
        sr_ar_str=0;
        for (int j=0;j<3;j++){
            cout << mass[i][j];
            sr_ar_str += mass[i][j];
        }

        cout <<" Сумма строки = "<<sr_ar_str<<" ,ср. ар. строки = "<< sr_ar_str/3 << endl;
        sr_ar_all= sr_ar_all + sr_ar_str/3;
    }
    cout << "Общее ср. ар. = "<< sr_ar_all << endl;

}
