#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    int N;
    string Nome, Presente;
    map<string, set<string>> Pessoa;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> Nome >> Presente; //Le nome e primeiro presente
        Pessoa[Nome].insert(Presente);
        cin >> Presente;
        Pessoa[Nome].insert(Presente);  //Segundo presente
        cin >> Presente;
        Pessoa[Nome].insert(Presente);  //Terceiro presente
    }

    while (cin >> Nome >> Presente)
    {
        if(Pessoa[Nome].find(Presente) != Pessoa[Nome].end())
            cout << "Uhul! Seu amigo secreto vai adorar o/" <<endl;
        else cout << "Tente Novamente!"<<endl;
    }
    
    
    return 0;
}