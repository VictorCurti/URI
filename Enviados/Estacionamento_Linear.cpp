#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N, K; //N = Motoristas (Linhas) | K = Carros (Numero max de carros no estacionameneto)

    cin >> N >> K;
    cin.get();

    while (N || K)
    {
        bool Teste = true;
        stack<int> Estacionamento;
        for (int i = 0; i < N; i++)
        {
            
            int Aux1, Aux2;
            cin >> Aux1 >> Aux2;
            if (i != 0 && !Estacionamento.empty())
            {
                while (!Estacionamento.empty() && Aux1 >= Estacionamento.top() && Teste)
                {
                    int temp;
                    temp = Estacionamento.top();
                    Estacionamento.pop();
                    if(!Estacionamento.empty() && temp > Estacionamento.top()) Teste = false;
                }
            }
            
            Estacionamento.push(Aux2);
            if(Estacionamento.size()>K || Aux1 > Aux2) Teste = false;
        }

        
        while (!Estacionamento.empty() && Teste)
        {
            int temp;
            if (Estacionamento.size() > 1)
            {
                temp = Estacionamento.top();
                Estacionamento.pop();
                if (temp > Estacionamento.top())
                {
                    Teste = false;
                }
                else
                {
                    Estacionamento.pop();
                }
            }
            else
                Estacionamento.pop();
        }
        if (Teste)
            cout << "Sim" << endl;
        else
            cout << "Nao" << endl;
        // Nova leitura
        cin >> N >> K;
        cin.get();
    }
    return 0;
}