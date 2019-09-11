#include <iostream>
#include <iomanip> //Fixa casas num
#include <map>
#include <string>

using namespace std;

int main()
{
    int Narea, Total;
    string Arvore;
    cout << setprecision(4) << fixed;
    cin >> Narea >> ws;

    for (int i = 0; i < Narea; i++)
    {
        Total = 0;
        map<string, int> Especies;
        getline(cin, Arvore);
        while (Arvore.size() > 0)
        {
            Especies[Arvore]++;
            getline(cin, Arvore);
            Total++;
        }

        if (i > 0) cout << endl;

        for (auto a : Especies)
        {
            cout << a.first << " " << ((100.0 * a.second) / Total) << endl;
        }
    }

    return 0;
}