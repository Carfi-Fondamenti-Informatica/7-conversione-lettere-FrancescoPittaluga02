#include <iostream>
#include "lib.h"
using namespace std;
int main() {
  char a;
  cin >> a;
  bool risultato = primo(a);
  if (risultato) {   
    cout << trasformazione(a);
  } else { 
    cout << "errore" << endl;
  }
    return 0;
}
