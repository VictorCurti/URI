#include <iostream>
#include <stack>

using namespace std;

bool Impar(int i){
    if(i%2 == 0) return false;
    else return true;
}

int main(){
    
    int N1,N2,Soma = 0;
    cin >> N1;
    cin >> N2;
    cin.get();

    //Verifica ordem N1 > N2    [N1 sempre maior]
    if(N1>N2){
        int aux;
        aux = N1;
        N1 = N2;
        N2 = aux;
    }

    N2--;
    for( ;N1<N2;N2--){
        //cout << "N2: " << N2 << endl;
        if(Impar(N2)) Soma+= N2;
    }//End for
    cout << Soma;
}//End main