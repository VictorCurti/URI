#include <iostream>
#include <stdio.h>
#include <map>
#include <sstream>

using namespace std;

int main()
{
    string Aux;

    int Num, NDicionario, NFrases;

    cin >> Num;
    while (Num--)
    {
        map<string, string> Dicionario;
        map<string, string>::iterator It;   //Ponteiro temporario

        cin >> NDicionario >> NFrases >> ws;
        while (NDicionario--)
        {
            getline(cin, Aux);
            getline(cin, Dicionario[Aux]);
        }
        while (NFrases--)
        {
            getline(cin, Aux);
            stringstream ss(Aux);
            bool Primeiro = true;
            while (ss >> Aux)
            {
                if (Primeiro)
                    Primeiro = false;
                else
                {
                    cout << " ";
                }

                if ((It = Dicionario.find(Aux)) == Dicionario.end())
                {
                    cout << Aux;
                }
                else
                {
                    cout << It->second;
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}

while((cin>>a))