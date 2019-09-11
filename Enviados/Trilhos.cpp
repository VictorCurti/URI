#include <iostream>
#include <stack>

using namespace std;

void Inverte(stack<int> &);

int main(){
    int num;

    while(1){
        cin >> num;
        if(num == 0) break;
        int aux;
        while(1){
            stack <int> StackA,StackDado;
            int i;
            bool Ok = true;

            for (i=0 ; i<num ; i++){
                cin >> aux;
                    if(aux == 0){
                        break;
                    }
                StackDado.push(aux);
            }
            if(aux == 0){
                cout << endl;
                break;
            }
            Inverte(StackDado);
            i = 1;
            while(i<=num&&!StackDado.empty()){
                
                if(StackDado.top()==i){
                    StackDado.pop();
                    i++;
                }else if(!StackA.empty() && StackA.top() == StackDado.top()){
                    StackA.pop();
                    StackDado.pop();
                }else{
                    StackA.push(i);
                    i++;
                }
            }
            while(!StackDado.empty()&&Ok){
                if(!StackA.empty() && StackA.top() == StackDado.top()){
                    StackA.pop();
                    StackDado.pop();                    
                }else{
                    Ok = false;
                }
            }
            
            if(StackDado.empty() && Ok) cout << "Yes" << endl;
                else cout << "No" << endl;
            
        }
    }
    return 0;
}

void Inverte(stack<int> &A){
    stack <int> Temp;
    while(!A.empty()){
        Temp.push(A.top());
        A.pop();
    }
    A=Temp;  
}