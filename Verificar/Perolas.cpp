#include <iostream>
#include <set>
#include <map>

using namespace std;

int main()
{
    int P, A, R, Maior;
    string Aux, Temp;

    while ((cin >> P >> A >> R >> ws) && P > 0 && A > 0 && R > 0)
    {
        cout << "Inicio \n";
        set<string> MySet;
        set<string>::iterator It;
        map<string, int> Alunos;
        Maior = 0;
        /*Armazena todas as perolas das provas*/
        for (int i = 0; i < P; i++)
        {
            getline(cin, Aux);
            MySet.insert(Aux);
        }

        /*Procura perolas do atual aluno */
        for (int i = 0; i < A; i++)
        {
            cin >> Temp >> ws;
            Alunos[Temp] = 0; //Cria aluno no map
            for (int j = 0; j < R; j++)
            {
                getline(cin, Aux);
                if ((It = MySet.find(Aux)) != MySet.end())
                {
                    Alunos[Temp]++;
                }

                if (Alunos[Temp] > Maior)
                {
                    Maior = Alunos[Temp];
                }
            }
        }

        bool First = true;
        for (auto c : Alunos)
            if (c.second == Maior && First)
            {
                cout << c.first;
                First = false;
            }else if(c.second == Maior)
            {
                cout <<", "<< c.first;
            }
        
        cout << endl;
    }

    return 0;
}