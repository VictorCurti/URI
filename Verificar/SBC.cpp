#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N;
    priority_queue<pair<int, int>> Processos;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int T_inicio, Duracao;
        cin >> T_inicio >> Duracao;
        Processos.push(pair<int, int>(T_inicio, Duracao));
    }

    while (!Processos.empty())
    {
        cout << "Tempo de chamda: " << Processos.top().first << "\t"; 
        cout << "Tempo de duracao: " << Processos.top().second << endl;
        Processos.pop();
    }
    

    return 0;
}