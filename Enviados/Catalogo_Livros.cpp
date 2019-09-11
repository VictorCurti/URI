#include <iostream>
#include <queue>

using namespace std;

int Teste(priority_queue<int> A, priority_queue<int> B, priority_queue<int> C, priority_queue<int> D, priority_queue<int> E)
{
    A.pop();
    return A.top() + B.top() + C.top() + D.top() + E.top();
}

int main()
{

    int P, M, F, Q, B, K, aux;
    unsigned int Soma_P, Soma_M = 0, Soma_F = 0, Soma_Q = 0, Soma_B = 0;
    priority_queue<int> Portugues, Matematica, Fisica, Quimica, Biologia;

    cin >> P;
    for (int i = 0; i < P; i++)
    {
        cin >> aux;
        Soma_P += aux;
        Portugues.push(aux);
    }

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> aux;
        Soma_M += aux;
        Matematica.push(aux);
    }

    cin >> F;
    for (int i = 0; i < F; i++)
    {
        cin >> aux;
        Soma_F += aux;
        Fisica.push(aux);
    }

    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        cin >> aux;
        Soma_Q += aux;
        Quimica.push(aux);
    }

    cin >> B;
    for (int i = 0; i < B; i++)
    {
        cin >> aux;
        Soma_B += aux;
        Biologia.push(aux);
    }

    cin >> K;
    int Soma = 0;

    for (int i = 0; i < K; i++)
    {
        Soma += Portugues.top() + Matematica.top() + Fisica.top() + Quimica.top() + Biologia.top();
        cout <<"Soma: " << Soma << endl;
        int TP = Teste(Portugues, Matematica, Fisica, Quimica, Biologia);
        int Maior = TP;

        int TM = Teste(Matematica, Portugues, Fisica, Quimica, Biologia);
        if (Maior < TM) Maior = TM;
        int TF = Teste(Fisica, Matematica, Portugues, Quimica, Biologia);
        if (Maior < TF) Maior = TF;
        int TQ = Teste(Quimica, Matematica, Fisica, Portugues, Biologia);
        if (Maior < TQ) Maior = TQ;
        int TB = Teste(Biologia, Matematica, Fisica, Quimica, Portugues);
        if (Maior < TB) Maior = TB;

        cout << " PORT\t "<< TP <<"\n";
        cout << " MAT\t "<< TM <<"\n";
        cout << " FIS\t "<< TF<<"\n";
        cout << " QUI\t "<< TQ <<"\n";
        cout << " BIOL\t "<< TB <<"\n";

        if(Maior == TP){
            Portugues.pop();
            cout << "POP PORT\t "<< TP <<"\n";
        }
        else if(Maior == TM){
            Matematica.pop();
            cout << "POP MAT\t "<< TM <<"\n";
        }
        else if(Maior == TF){
            Fisica.pop();
            cout << "POP FIS\t "<< TF<<"\n";
        }
        else if(Maior == TQ){
            Quimica.pop();
            cout << "POP QUI\t "<< TQ <<"\n";
        }
        else{
            Biologia.pop();
            cout << "POP BIOL\t "<< TB <<"\n";
        }
            

    }
    cout << Soma << endl;
    return 0;
}