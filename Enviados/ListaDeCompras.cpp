#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main()
{
    int N;
    string Linha,Temp;
    cin >> N >> ws;

    while (N--)
    {
        set <string> Lista;
        getline(cin, Linha);
        stringstream ss(Linha);
        while (ss >> Temp)
        {
            Lista.insert(Temp);
        }

        bool frist = true;
        for(auto c: Lista){
            if(!frist) cout << " ";               
            cout << c;
            frist = false;
        }
        cout << endl;
    }
    return 0;
}