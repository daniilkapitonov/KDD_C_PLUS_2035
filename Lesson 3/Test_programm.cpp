#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cin>> a;
    if (a < 15) 
    { 
        cout << 15; 
    }
    if (a < 25) 
    { 
        cout << 25; 
    }
    if (a < 35) 
    { 
        cout << 35; 
    }
    else 
    { 
        cout << "NO"; 
    }
    cout << "_________________"<< endl;

    cin >> a;
    if (a < 15) 
    { 
        cout << 15;
    }
    else if (a < 25) 
    { 
        cout << 25; 
    }
    else if (a < 35) 
    { 
        cout << 35; 
    }
    else 
    { 
        cout << "NO"; 
    }
}
