#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;
int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    double a, b, c, s, area;
    bool  triangulo;
    cout <<"\n A area do triangulo usando a formula de Heron:\n";
    cout << "=====================================================";
    cout <<"\nPrimeiro lado: ";
    cin >> a;
    cout <<"\nSegundo lado: ";
    cin >> b;
    cout << "\nTerceiro lado: ";
    cin >> c;
    s=(a+b+c)/2;
    triangulo = ( a<b+c && b<a+c && c<a+b);
    if (triangulo == true)
        cout << "\nTrata-se de um triângulo!";
    else
        cout << "\nUma figura qualquer de três lados";
    system("pause");

    return 0;
}