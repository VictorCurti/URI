/*  Brinde Face 2015
    Data: 25/03/2019    Autor: Victor Curti
    ex:
    4
        0           1       2           3       4 
    (F A C E - E C F A - A C F E - A C E F - F E C A)
    F A C E E C F A A C F E A C E F F E C A 
    F A C E E C F A A C F E

    A C E F - F E C A 
    Stack A:    
        F
        E
        C
        A
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    string Dado ("FACE");
    int num,Ganhadores=0;
    cin >> num;
    cin.get();

    while(num--){
        string Leirura;
        getline(cin,Leirura);
            for (char c: Leirura)
                if(c != ' ' && c!= '\n')
                    Dado += c;

        stack <char> StackA;
        bool Test = true;

        for(int i=0 ; i<=4 ; i++){
            StackA.push(Dado[Dado.size()-i]);
        }
        //Apaga ultimas 4 letras ja lidas
        
        for(int i=4 ; i<=7 && Test; i++){
            if(StackA.top()!= Dado[(Dado.size()-1)-i])
                Test = false;
            StackA.pop();
        }
        //Caso Ganhador Tirar as 4 anterios tambem
        if(Test){
            Dado.erase(Dado.size()-8,8);
            Ganhadores++;
        }
        if(Dado.empty())
            Dado += "FACE";

    }
    cout << Ganhadores;

    return 0;
}