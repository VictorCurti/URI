#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int valor, N, Lista = 1;

    while (cin >> N)
    {
        cin >> ws;
        vector<char> alfabeto = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                                 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        vector<int> numeros;
        vector<string> Ordem;
        for (int i = 1; i <= 26; i++)
            numeros.push_back(i);

        Lista == 1 ? cout << "LISTA #" << Lista << ":" << endl : cout << "\nLISTA #" << Lista << ":" << endl; 
        
        while (N--)
        {
            string linha, palavra;
            getline(cin, linha);
            stringstream ss(linha);
            while (ss >> valor)
            {
                if (valor < 27)
                {
                    numeros.push_back(numeros.at(valor - 1));
                    alfabeto.push_back(alfabeto.at(numeros.at(valor - 1) - 1));
                    alfabeto.erase(alfabeto.begin() + numeros.at(valor - 1) - 1);
                    numeros.erase(numeros.begin() + valor - 1);

                    //cout << alfabeto.at(25);
                    palavra += alfabeto.at(25);
                }
                else
                {
                    //cout << ' ';
                    palavra += ' ';
                }
            }
            Ordem.push_back(palavra);
        }
        sort(Ordem.begin(), Ordem.end());
        for (auto c : Ordem)
            cout << c << endl;
        Lista++;
    }
    return 0;
}
