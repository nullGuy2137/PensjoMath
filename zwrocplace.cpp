#include <iostream>
using namespace std;

void ZwrocPlace(){
    float pay;
    cout<<"Podaj place"<<endl;
    cin>>pay;

    cout<<"Placa pracownika to: "<<pay<<endl;
    //dla kontekstu, gdyby ta funkcja by³aby metod¹ klasy pracownik, przyjmowa³aby wartoœæ pay wczeœniej obliczon¹ przez metodê LiczPlace.
}

int main() {
  ZwrocPlace();
}
