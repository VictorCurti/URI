#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N, M; //N - Numero de Pedras  |   M - Presente

    do
    {
        cin >> N >> M;
        queue<pair<int, int>> Jump;
        bool Find = false;
        Jump.push(pair<int, int>(1, 1));

        if (M > 34)
        {
            Find = true;
        }

        while (N != 0 && M != 0 && !Find && !Jump.empty())
        {
            if (Jump.front().first == M)
            {
                Find = true;
            }
            if ((Jump.front().first + (Jump.front().second + 2)) >= 1 && (Jump.front().first + (Jump.front().second + 2) <= N))
            {
                Jump.push(pair<int, int>(Jump.front().first + Jump.front().second + 2, Jump.front().second + 2));
            }

            if ((Jump.front().first - (Jump.front().second + 2)) >= 1 && (Jump.front().first - (Jump.front().second + 2) <= N))
            {
                Jump.push(pair<int, int>(Jump.front().first - (Jump.front().second + 2), Jump.front().second + 2));
            }
            Jump.pop();
        }

        if (Find && N != 0 && M != 0)
        {
            cout << "Let me try!" << endl;
        }
        else if (N != 0 && M != 0)
        {
            cout << "Don't make fun of me!" << endl;
        }

    } while (N && M);
    return 0;
}
