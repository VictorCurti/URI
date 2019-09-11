#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N_Caixas, N_Clientes, Flag = 0;
    cin >> N_Caixas >> N_Clientes;
    int Tempo[N_Caixas], Velocidade[N_Caixas];
    ;
    queue<int> Clientes;

    //Zera Tempos
    for (int i = 0; i < N_Caixas; i++)
    {
        Tempo[i] = 0;
    }

    //Recebe tempo dos caixas
    for (int i = 0; i < N_Caixas; i++)
    {
        cin >> Velocidade[i];
    }

    //Calcula tempo para cada caixa
    for (int i = 0; i < N_Clientes; i++)
    {
        int aux;
        cin >> aux;
        if (i < N_Caixas)
        {
            Tempo[i] = Velocidade[i] * aux;
            Flag++;
        }
        else
        {
            Clientes.push(aux);
        }
    }

    int Itens, Tempo_Gasto = 0;
    while (Flag > 0 || !Clientes.empty())
    {
        int Menor = __INT_MAX__;
        for (int i = 0; i < N_Caixas; i++)
        {
            if (Tempo[i] < Menor && Tempo[i] != 0)
            {
                Menor = Tempo[i];
            }
        }
        for (int i = 0; i < N_Caixas; i++)
        {
            if (Tempo[i] > 0)
            {
                Tempo[i] -= Menor;
                if (Tempo[i] == 0)
                {
                    Flag--;
                }
            }
            if (Tempo[i] == 0 && !Clientes.empty())
                {
                    Flag++;
                    Tempo[i] = Velocidade[i] * Clientes.front();
                    Clientes.pop();
                }
        }
        Tempo_Gasto += Menor;
    }

    cout << Tempo_Gasto << endl;
    return 0;
}
