#include <iostream>
#include <string>
#include <conio.h>
#include <unistd.h>
#include <iomanip>
#include <stdio.h>

using namespace std;

class Produto{

  private:
  string cor_embalagem, marca;
  float preco;

  public:

  void setcor(){
    cout << "Digite a cor" << endl;
    getline(cin, cor_embalagem);
     fflush(stdin);
  }

  void setmarca(){
    cout << "Digite a marca" << endl;
   getline(cin, marca);
     fflush(stdin);
  }

  void getpreco(){
    cout << "Digite o preco" << endl;
    scanf("%f", &preco);
     fflush(stdin);

  }

  void print(){
    cout << fixed << setprecision(2) << "A cor da embalagem eh: " << cor_embalagem << endl << "A marca do produto eh: " << marca << endl << "O preco do produto eh: " << preco << endl;
  }

};

int main() {
 Produto produtos[2];
  for(int i = 0; i < 2;  i++){
    fflush(stdin);
    produtos[i].setmarca();
    produtos[i].setcor();
    produtos[i].getpreco();
    system("cls");
  }
  for(int i = 0; i < 2;  i++){
    produtos[i].print();
  }

return 0;
}
