#include <bits/stdc++.h>

using namespace std;

string extraerPais(string str) { 
    istringstream ss(str);
    string word;
    ss >> word;
    return word;

} 

int main () {
    int iteraciones;
    string entrada;
    vector <string> paises;
    map <string, int> conteoPaises;
    cin >> iteraciones;
    for (int i = 0; i <= iteraciones; i++) {
        string pais_temporal;
        getline(cin, entrada);
        pais_temporal = extraerPais(entrada);
        if (count(paises.begin(), paises.end(), pais_temporal)){
            conteoPaises[pais_temporal]++;
        } else {
            paises.push_back(pais_temporal);
            conteoPaises[pais_temporal]++;
        }
    }
    map <string, int> :: iterator itr;
    int count = 0;
    for (itr = conteoPaises.begin(); itr != conteoPaises.end(); itr++) {
        if (count != 0) {
            cout << itr->first << ' ' << itr->second << '\n';
        }
        count++;
    }
    return 0;
}
