
// 1.Сделать записную книжку, чтобы после выхода из программы все 
// записи сохранялись в файле. У программы будут режимы работы: добавить новую 
// запись или найти запись. Если он добавляет запись - сохранить в файл, если читает
//  запись - читать из файла. После перезапуска можно сразу искать ранее записанный в файл данные. 
//  Формат данных "Имя номер телефона".

#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
using namespace std;
const string f_name="peper.txt";
string file_add(){
    cout << "Введите имя пользователя: ";
    string name;
    cin >> name;
    cout << "Введите номер телефона: ";
    string number;
    cin >> number;
    ofstream file;
    file.open(f_name, ios::app);
    file << name+'\n';
    file << number+'\n';
    file.close();
    return "Запись успешно добавлена";
}

string file_search(){
    ifstream file;
    file.open(f_name);
    cout << "Введите имя для поиска: ";
    string name;
    cin >> name;
    string line;
    bool cash = false;
    while (getline(file, line)){
        if (cash){
            return (name+" "+line);
        }
        if (line == name){
            cash = true;
        }
        // cout << "-"<< line << "-"<< endl;
    }
    return "Такой записи нет";
}


int main(int argc, char const *argv[])
{
    bool check = true;
    while (check){
        cout << "Введите тип команды (0-выйти, 1-новая запись, 2-поиск)" << endl;
        int in;
        cin >> in;
        switch (in)
        {
        case 0:
            check = false;
            break;
        case 1:
            cout << file_add() << endl;
            break;
        case 2:
            cout << file_search()<< endl;
            break;
        default:
            break;
        }
    }
    
}
