#include <iostream>

using namespace std;
bool primo (int x)
{
    int cont = 0;
    for (int i=1; i<=x; i++)
    {
        if (x%i == 0)
            cont++;
    }
    if (cont == 2)
        return true;
    else
        return false;
}
int main()
{
    int x, cont = 0;
    cout << "Digite um numero" << endl;
    cin >> x;
    if (primo(x) == 1)
        cout << "Eh primo " << endl;
    else if (primo(x) == 0)
        cout << "nao primo " << endl;
    return 0;
}
