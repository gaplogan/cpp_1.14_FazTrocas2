#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double n1, n2;

    system("cls");

    //valida os n�meros para garantir que sejam diferentes entre si
    do
    {
        cout << "Digite o primeiro n�mero: ";
        cin >> n1;
        cout << "Digite o segundo n�mero: ";
        cin >> n2;
    } while (n1 == n2); //fim a entrada/valida��o dos n�meros

    cout << endl;
    cout << "Valores antes das trocas: " << endl;
    cout << "Primeiro n�mero: " << n1 << endl;
    cout << "Segundo n�mero: " << n2 << endl;
    
    //{Faz as trocas com adi��es e subtra��es}
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    
    //{Apresenta os resultados}         
    cout << endl;
    cout << "Valores depois das trocas: " << endl;
    cout << "Primeiro n�mero: " << n1 << endl;
    cout << "Segundo n�mero: " << n2 << endl;

    return 0;
}