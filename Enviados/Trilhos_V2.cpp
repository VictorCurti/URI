#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int Num, Entrada;
    bool Continua = true;

    cin >> ws >> Num;
    while (Continua)
    {
        stack<int> Trem;
        bool Nao = false;
        int N = 1; //Numero atual do vagao
        for (int i = 1; i <= Num; i++)
        {
            cin >> ws >> Entrada;
            if (Entrada == 0)
            {
                cout << endl;
                cin >> ws >> Entrada;
                Num = Entrada;
                Nao = true;
                if (Entrada == 0)
                    Continua = false;
                break;
            }
            else if (N != Entrada && !(!Trem.empty() && Entrada == Trem.top()))
            {
                while (N <= Num && N != Entrada && !(!Trem.empty() && Entrada == Trem.top()))
                {
                    Trem.push(N);
                    N++;
                }
                if (!Trem.empty() && Entrada == Trem.top())
                {
                    Trem.pop();
                    N++;
                }
                else if (N == Entrada)
                {
                    N++;
                }
            }
            else if (!Trem.empty() && Trem.top() == Entrada)
            {
                Trem.pop();
            }
            else
                N++;
        }
        if (!Nao)
            Trem.empty() ? cout << "Yes" << endl : cout << "No" << endl; //Resposta
    }
    return 0;
}