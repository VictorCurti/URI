#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string Dado;

    while (getline(cin, Dado))
    {
        stack<char> StackA;
        int num = 0;
        for (int i = 0; i < Dado.size(); i++)
        {
            if (StackA.empty())
            {
                StackA.push(Dado[i]);
            }else if (Dado[i] == 'B' && StackA.top() == 'S'){
                num ++;
                StackA.pop();
            }else if (Dado[i] == 'S' && StackA.top() == 'B'){
                num ++;
                StackA.pop();
            }else if (Dado[i] == 'F' && StackA.top() == 'C'){
                num ++;
                StackA.pop();
            }else if (Dado[i] == 'C' && StackA.top() == 'F'){
                num ++;
                StackA.pop();
            }else StackA.push(Dado[i]);
        }
        cout << num << endl;
    } //End While
    return 0;
}