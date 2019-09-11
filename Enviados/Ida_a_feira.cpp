#include <iostream>
#include <map>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    cout << setprecision(2) << fixed;
    int qnt, itens;
    string produtos;
    cin>>qnt;
    for (int i = 0; i < qnt; i++)
    {
        map<string, float> feira;
        float soma=0;
        cin>>itens;
        for (int j = 0; j < itens; j++)
        {
            cin>>produtos;
            cin >> feira[produtos];

        }

        cin>>itens;
        int x;
        for (int j = 0; j < itens; j++)
        {
            cin>>produtos;
            cin>> x;
            soma += feira[produtos] * x;

        }
        cout << "R$ "<< soma << endl;
        
    }

}