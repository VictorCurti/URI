#include <stack>
#include <iostream>
#include <string>

using namespace std;

void Conta_Diamante(stack<int>&);

int main(){
    stack<char> Mystack;
    string input;

    while(getline(cin,input)){
        bool correct = true;
        if(!input.empty())
            for(char c: input){ 
                if(c == '(')
                    Mystack.push(c);
                else if(c == ')'&& Mystack.size()>0)
                        Mystack.pop();
                    else if(c==')'){
                            correct = false;
                            break;
                    }
            }
            if(Mystack.size() == 0 && correct)
                cout << "correct" <<endl;
                else    cout << "incorrect" << endl;
        while(!Mystack.empty()){
            Mystack.pop();
        }
        
    }
   
    return (0);
}