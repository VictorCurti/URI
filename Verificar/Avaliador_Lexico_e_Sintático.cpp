#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string Dado;

    while (getline(cin, Dado))
    {
        stack<char> Parenteses;
        bool Erro = false;

        for (char c : Dado)
        {
            if (c == '(')
            {
                Parenteses.push(c);
            }
            else if (c == ')' && !Parenteses.empty())
            {
                Parenteses.pop();
            }
            else
            {
                Erro = true;
                break;
            }
        }
        if (Erro)
        {
            cout << "Syntax Error!" << endl;
        }
        else
        {
            cout << "OK\n";
        }
    }
    return 0;
}