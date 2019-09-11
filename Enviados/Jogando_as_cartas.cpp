#include <iostream>
#include <queue>

using namespace std;

int main()
{

    int num;

    while (cin >> num && num != 0)
    {
        queue<int> Baralho;
        if (num > 1)
        {
            for (int i = 1; i <= num; i++)
            {
                Baralho.push(i);
            }

            cout << "Discarded cards: ";
            while (Baralho.size() > 2)
            {
                cout << Baralho.front();
                Baralho.pop();
                Baralho.push(Baralho.front());
                Baralho.pop();
                cout << ", ";
            }
            cout << Baralho.front();
            Baralho.pop();
            cout << endl;
            cout << "Remaining card: ";
            cout << Baralho.front();
            cout << endl;
        }
        else
        {
            cout << "Discarded cards:" << endl;
            cout << "Remaining card: 1" << endl;
        }
    }
    return 0;
}