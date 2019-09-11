#include <iostream>
#include <queue>

using namespace std;


int main()
{
    int N_Caixas, N_Clientes;
    queue<int> Itens_Clientes;
    cin >> N_Caixas >> N_Clientes;
    int Atendendes[N_Caixas];

    //Coloca os tempos dos caixas em fila
    for (int i = 0; i < N_Caixas; i++)
    {
        cin >> Atendendes[i];
    }

    //Coloca os clientes em fila
    int Tempo_Gasto = 0;
    for (int i = 0; i < N_Clientes; i++)
    {
        int aux;
        cin >> aux;
        Itens_Clientes.push(aux);
    }
    //////////////////////////////////////////////////////////////////
    int Temp[N_Caixas];
    int Flag = 0;
    for (int i = 0; i < N_Caixas; i++)
    {
        if(!Itens_Clientes.empty()){
        Temp[i] = Itens_Clientes.front() * Atendendes[i];
        Itens_Clientes.pop();
        Flag++;
        }else Temp[i] = 0;
    }

    while (Itens_Clientes.size() != 0 || Flag>0)
    {
        int menor = __INT_MAX__;

        for (int i = 0; i < N_Caixas; i++)
        {
            if (Temp[i] < menor && Temp[i] > 0)
            {
                menor = Temp[i];
            }
        }

        for (int i = 0; i < N_Caixas; i++)
        {
            if(Temp[i]>0)
                Temp[i] -= menor;
        }

        for (int i = 0; i < N_Caixas; i++)
        {
            if (Temp[i] == 0)
            {
                Flag--;
                if (!Itens_Clientes.empty())
                {
                    Temp[i] = Itens_Clientes.front() * Atendendes[i];
                    Itens_Clientes.pop();
                    Flag++;
                }
            }
        }
        Tempo_Gasto += menor;
    }//End While

    cout << Tempo_Gasto << endl;
    return 0;
}
