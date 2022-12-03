#include <iostream>
using namespace std;
int main() {
 int a,b;
 cout << "Valor da variable a? ";
 cin >> a;
 cout << "Valor da variable b? ";
 cin >> b;
 cout << "a%b= " << a%b << endl;
 cout << "a>b " << (a>b) << endl;
 cout << "++a " << ++a << endl;
 cout << "b++" << b++ << endl;
 cout << "(a>b) && (a!=0) = " << ((a>b) && (a!=0)) << endl;
 return 0;
}
