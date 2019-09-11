#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void Inverte(stack<char> &);

int main()
{
    int num = 1;

    while (1)
    {
        queue<char> QueueA;
        stack<char> StackA;
        cin >> num;
        if(num == 0) break;

        for (int i = 0; i < num; i++)
        {
            char temp;
            cin >> temp;
            QueueA.push(temp);
        }

        bool flag = true;
        char aux;
        for (int i = 0; i < num; i++)
        {
            cin >> aux;
            bool flag2 = true;
            while (flag2)
            {
                
                if (QueueA.front() == aux && !QueueA.empty())
                {
                    if (flag) cout << "IR";
                    QueueA.pop();
                    flag2 = false;
                }
                else if (StackA.empty() && !QueueA.empty())
                {
                    if (flag) cout << "I";
                    StackA.push(QueueA.front());
                    QueueA.pop();
                }
                else if (StackA.top() == aux)
                {
                    if (flag) cout << "R";
                    StackA.pop();
                    flag2 = false;
                }
                else if (StackA.top() != aux && !QueueA.empty())
                {
                    if (flag) cout << "I";
                    StackA.push(QueueA.front());
                    QueueA.pop();
                }
                else
                {
                    if (flag) cout << " Impossible";
                    flag2 = false;
                    flag = false;
                }
            }
        }
        cout << endl;
    } //End While
    return 0;
}