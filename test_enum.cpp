#include <iostream>

using namespace std;

enum CoinState{
  Heads,
  Tails,
  Side
};

class Coin{
  public:
  CoinState getState(){
    // 'H' is heads
    // 'T' is tails
    // 'S' is side
    return CoinState::Heads;
  }
};

int main(){

  // coin: heads, tails, side
  // true -> heads
  // false -> tails
  

  Coin c;

  switch (c.getState()){
    case CoinState::Heads:
      cout << "Heads" << endl;
      break;
    case CoinState::Tails:
      cout << "Tails" << endl;
      break;
    case CoinState::Side:
      cout << "Side" << endl;
      break;
    default:
      cout << "default" << endl;
      break;
  }
}