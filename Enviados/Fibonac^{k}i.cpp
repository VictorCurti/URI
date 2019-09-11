#include <iostream>
#include <queue>

using namespace std;

int main()
{
    long num, aux, k, n, Resto;
    cin >> num;
    while(num --)
    {
        queue<long> Sequencia;
        cin >> k >> n;
        Resto = 0;

        for (aux = 0; aux < k; aux++)
        {
            Sequencia.push(aux % 1000007);
            Resto = (Resto + aux) % 1000007;
        }

        while (aux < (n - 1))
        {
            Sequencia.push(Resto % 1000007);
            Resto = (Resto + ((1000007 + Resto) - Sequencia.front() % 1000007)) % 1000007;
            Sequencia.pop();
            ++aux;
        }

        if (n < k)
            cout << n - 1 << endl;
        else
            cout << Resto << endl;
    }
    return 0;
}
