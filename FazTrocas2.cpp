#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double n1, n2;

    system("cls");

    //valida os números para garantir que sejam diferentes entre si
    do
    {
        cout << "Digite o primeiro número: ";
        cin >> n1;
        cout << "Digite o segundo número: ";
        cin >> n2;
    } while (n1 == n2); //fim a entrada/validação dos números

    cout << endl;
    cout << "Valores antes das trocas: " << endl;
    cout << "Primeiro número: " << n1 << endl;
    cout << "Segundo número: " << n2 << endl;
    
    //{Faz as trocas com adições e subtrações}
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    
    //{Apresenta os resultados}         
    cout << endl;
    cout << "Valores depois das trocas: " << endl;
    cout << "Primeiro número: " << n1 << endl;
    cout << "Segundo número: " << n2 << endl;

    return 0;
}