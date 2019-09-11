#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> Tabela = {{'A', 0}, {'B', 1}, {'C', 2}, {'D', 3}, {'E', 4}, {'F', 5}, {'G', 6}, {'H', 7}, {'I', 8}, {'J', 9}, {'K', 10}, {'L', 11}, {'M', 12}, {'N', 13}, {'O', 14}, {'P', 15}, {'Q', 16}, {'R', 17}, {'S', 18}, {'T', 19}, {'U', 20}, {'V', 21}, {'W', 22}, {'X', 23}, {'Y', 24}, {'Z', 25}};

    int N, Linhas, Soma;
    string Linha;
    cin >> N;
    while (N--)
    {
        cin >> Linhas >> ws;
        Soma = 0;
        for (int i = 0, j; i < Linhas; i++)
        {
            getline(cin, Linha);
            j = 0;
            for (auto c : Linha)
            {
                Soma += Tabela[c] + i + j;
                j++;
            }
        }
        cout << Soma << endl;
    }

    return 0;
}