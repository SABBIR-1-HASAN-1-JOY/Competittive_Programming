#include <iostream>
using namespace std;

int main(){
  long long int n;
  cin>>n;

  cout<<0<<endl;
  for (long long int i = 2; i <= n; i++) {
    long long int totalPairs = (i * i) * (i * i - 1) / 2; // All possible pairs
    long long int invalidKnightMoves = 4 * (i - 1) * (i - 2); // Removing illegal moves
    cout << totalPairs - invalidKnightMoves << endl;
}
}