#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  if (rank=='S'){
    cout << "You have received Super Ultra Rare Unit!!!\n";
    rank='A';
  }
  if (rank=='A'){
    cout << "You have received 5 gems.\n";
    rank='B';
  }
  if (rank=='B'){
    cout << "You have received 1 gems.\n";
    rank='C';
  }
  if (rank=='C'){
    cout << "You have received 2000 coins.\n";
    rank='D';
  }
  if (rank=='D') cout << "You have received very KAK items.\n";
  return 0;
}
