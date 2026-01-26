#include <iostream> // Substitui a parte de input/output do PPP.h
#include <string>   // Substitui a parte de strings do PPP.h
#include <cmath> // Adicione isto para usar sqrt

using namespace std; // O PPP.h fazia isso automaticamente

int main() // read and compare names
{
cout << "Please enter two names\n";
string first;
string second;
cin >> first >> second; // read two str ings
if (first == second)
cout << "that's the same name twice\n";
if (first < second)
cout << first << " is alphabetically before " << second <<'\n';
if (first > second)
cout << first << " is alphabetically after " << second <<'\n';
}
