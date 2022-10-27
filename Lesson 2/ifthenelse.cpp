#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    bool check = false;
    bool check2 = false;
    // check = 3>3;
    // cout << check<< endl;
    // if (!check){
    //     cout<<"True"<<endl; //true
    // } else{
    //     cout<<"False"<<endl; //False
    // }
    check = true;
    // true = 1 = true
    // false = 0 = false
    check2 = true;
    if (2>4){ //(2>4) = false
        cout<<"True"<<endl; //true
    } else if (2!=2){ //<------ (2!=2) = true
        cout<<"False"<<endl; //False
    } else{
        cout<<"False X2"<<endl; //False X2
    }
    int age = 19;
    int mark = 4;
    if (age >18 && mark > 2){
        cout<< "HO"<<endl;
    }
}
