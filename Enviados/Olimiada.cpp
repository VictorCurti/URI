#include <map>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool sortinrev(const pair<long long ,string> &a, const pair<long long ,string> &b) { 
       return (a.first == b.first?a.second<b.second:a.first>b.first); 
} 
int main(){
    map<string,long long> medalhas;
    vector<pair<long long,string> > campeoes;
    string linha;
    while(getline(cin,linha)) {
        getline(cin,linha);
        medalhas[linha]+=(100000000);
        getline(cin,linha);
        medalhas[linha]+=(10000);
        getline(cin,linha);
        medalhas[linha]+=(1);
    }
    for(auto i:medalhas) {
        campeoes.push_back(make_pair(i.second,i.first));
    }
    sort(campeoes.begin(),campeoes.end(),sortinrev);
    cout << "Quadro de Medalhas" << endl;
    for(auto i:campeoes) {
        cout << i.second << " " << i.first/100000000 << " " << (i.first/10000ll)%10000  << " "<< i.first%10000 << endl;
    }
}