#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    int Bom = 0, Num;
    priority_queue<string> Lista;

    cin >> Num;
    char Aux;
    string Temp;
    for (int i = 0; i < Num; i++)
    {
        cin >> Aux >> ws;
        cin >> Temp;
        if (Aux == '+')
            Bom++;
        Lista.push(Temp);
    }

    stack<string> Nome_Ordem;
    while (!Lista.empty())
    {
        Nome_Ordem.push(Lista.top());
        Lista.pop();
    }
    while (!Nome_Ordem.empty())
    {
        cout << Nome_Ordem.top() << endl;
        Nome_Ordem.pop();
    }
    cout << "Se comportaram: " << Bom << " | Nao se comportaram: " << (Num - Bom) << endl;
}