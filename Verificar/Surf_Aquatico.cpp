#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int Calc_Socre(queue<int> Bateria);

int main()
{
    int N, B;

    while (cin >> N >> B)
    {
        queue<int> Bateria;
        int Maior = 0, Menor = __INT_MAX__, Soma = 0, Score = 0;

        for (int i = 0; i < N; i++)
        {
            int temp;
            cin >> temp;
            Bateria.push(temp);
            Soma += temp;

            
            if (temp > Maior)
                Maior = temp;
            if (temp < Menor)
                Menor = temp;

            cout << "Soma: " << Soma << endl;
            cout << "Menor: " << Menor << endl;
            cout << "Maior: " << Maior << endl;

            if (Bateria.size() == B && i <= B)
            {
                Score += Soma - Maior - Menor;
                cout << "(1)Score: " << Score << endl;
            }
            else if (Bateria.size() == B)
            {
                Score += (Soma - Bateria.front()) - Maior - Menor;
                cout << "(2)Score: " << Score << endl;
                Bateria.pop();
            }
        }
        //cout << "\nSOCORE: "<<  Score << endl;
        cout << Score << endl;
    }

    return 0;
}

int Calc_Socre(queue<int> Bateria)
{
    int Maior = 0, Menor = __INT_MAX__, TEMP;
    while (!Bateria.empty())
    {
        if (Maior == 100 & Menor == 1)
            return 0;
        TEMP = Bateria.front();
        if (TEMP > Maior)
            Maior = TEMP;
        if (TEMP < Menor)
            Menor = TEMP;
        Bateria.pop();
    }
    cout << "MAX: " << Maior << "\tMenor: " << Menor << endl;
    return 0;
}