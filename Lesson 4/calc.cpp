#include <iostream>
using namespace std;
int main() {
  float a, b, k;
  char c;
  cout<<"Введите первое число:"<<endl;
  cin>>a;
  cout<<"Введите второе число:"<<endl;
  cin>>b;
  cout<<"Выберите операцию:"<<endl;
  cin>>c;
  switch(c){
    case '+':
        k = a+b;
        cout<<a<<c<<b<<'='<<k<<endl;
        break;
    case '-':
        k = a-b;
        cout<<a<<c<<b<<'='<<k<<endl;
        break;
    case '*':
        k = a*b;
        cout<<a<<c<<b<<'='<<k<<endl;
        break;
    case '/':
        if(b == 0){
          cout<<"На ноль делить нельзя!"<<endl;
        }else{
          k = a/b;
          cout<<a<<c<<b<<'='<<k<<endl;
        }
        break;
  }
  return 0;
}