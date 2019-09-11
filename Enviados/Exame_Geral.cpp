#include <iostream>
#include <queue>
#define TAM 30000

using namespace std;

int main()
{
    unsigned int Lista[TAM];
    int N, Q, aux;
    priority_queue<int> Entrada;

    while (cin >> N >> Q)
    {
        for (int i = 0; i < N; i++)
        {
            cin >> aux;
            Entrada.push(aux);
        }

        for (int i = 0; i < N; i++)
        {
            Lista[i] = Entrada.top();
            Entrada.pop();
        }

        for (int i = 0; i < Q; i++)
        {
            cin >> aux;
            cout << Lista[aux-1] << endl;
        }
    }
    
    return 0;
}