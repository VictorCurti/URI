#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{

    //Inicia os tempos
    map<char, float> Tempos = {
        {'W', 1.0},
        {'H', 0.5},
        {'Q', 0.25},
        {'E', 0.125},
        {'S', 0.0625},
        {'T', 0.03125},
        {'X', 0.015625},
    };
    string Composicao;

    while (cin >> Composicao && Composicao.size() > 2)
    {
        float Tempo = 0;
        int Corretos = 0;
        for (char c : Composicao)
        {
            if (c == '/'){
                if (Tempo == 1 ) Corretos ++;
                Tempo = 0;
            }
            else Tempo += Tempos[c];
        }
        cout << Corretos << endl;
    }

    return 0;
}