#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    map <string , string> Traducoes;
    int Idiomas, Kids;
    string Aux,Nome;

    cin >> Idiomas >> ws;

    while(Idiomas--)
    {
        getline(cin,Aux);
        getline(cin,Traducoes[Aux]);
    }

    cin >> Kids >> ws;

    while (Kids --)
    {
        getline(cin,Nome);
        getline(cin,Aux);
        cout << Nome << endl << Traducoes[Aux] << endl << endl;
    }
    

    return 0;
}