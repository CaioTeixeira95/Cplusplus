#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> lotery;
  set<int> lot;
  vector<pair<int, int>> rank;
  vector<int> numbers;
  int n = 0, num = 0;

  cin >> n; // Quantidade de jogos à serem lidos

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 6; j++) {
      cin >> num;
      lotery.push_back(num); // Pegando os números dos jogos
    }
  }

  num = 0;
  for (int i = 0; i < 6; i++) {
    cin >> num;
    numbers.push_back(num); // Pegando os números que o Lino sonhou
  }

  sort(lotery.begin(), lotery.end()); // Ordenando os números dos jogos

  for(auto i:lotery){
    lot.insert(i); // Colocando os números em um set que não aceita repetição
  }

  int qtd = 0;
  for(auto i:lot){
    qtd = 0;
    for(auto j:lotery){
      if(i == j){
        qtd++;
      }
    }
    rank.push_back(make_pair(i, qtd)); // Criando um rank dos números que mais aparecem
  }

  // Função que ordena o rank pelo segundo pela quantidade
  auto sortbysec = [](const pair<int, int> &a, const pair<int, int> &b)->bool{
    if(a.second > b.second){
      return true;
    } else if(a.second == b.second && a.first < b.first){
      return true;
    } else {
      return false;
    }
  };

  sort(rank.begin(), rank.end(), sortbysec); // Ordenando o rank

  for(auto i:numbers){
    cout << rank[i - 1].first << " ";
  }
  cout << endl;

  return 0;
}
