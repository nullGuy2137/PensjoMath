#include <iostream>
using namespace std;

void ZwrocPlace(){
    float pay;
    cout<<"Podaj place"<<endl;
    cin>>pay;

    cout<<"Placa pracownika to: "<<pay<<endl;
    //dla kontekstu, gdyby ta funkcja by�aby metod� klasy pracownik, przyjmowa�aby warto�� pay wcze�niej obliczon� przez metod� LiczPlace.
}

int main() {
  ZwrocPlace();
}
