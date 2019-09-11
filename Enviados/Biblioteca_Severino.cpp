#include <iostream>     //Cout
#include <vector>       //vector
#include <algorithm>    //sort
#include <iomanip>      //setfill | setw

using namespace std;

int main(){
    
    int Num,NLivro;
    
    while(cin >> Num){
        vector <int> Livros;
        for (int i =0; i<Num;i++){
            cin >> NLivro;
            Livros.push_back(NLivro);
        }

        sort(Livros.begin(),Livros.end());

    for(int c: Livros)
        cout << setfill('0') << setw(4) << c << endl;
    }
    return 0;
}