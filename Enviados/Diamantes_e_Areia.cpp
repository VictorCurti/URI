#include <stack>
#include <iostream>
#include <string>

using namespace std;

void Conta_Diamante(stack<int>&);

int main(){
    stack<char> Mystack;
    string input;
    int num ,diamante, size;
    
    cin >> num;
    cin.get ();     //Limpa Buffer teclado

    while(num--){
        diamante = 0;
        getline(cin, input);
        for(char c: input){
            if(c == '<')
                Mystack.push('<');
            else if(c == '>' && !Mystack.empty()){
                Mystack.pop();
                diamante++;
            }
        }
        cout << diamante << endl;
        while(!Mystack.empty()){
            Mystack.pop();
        }
    }//While
    return (0);
}