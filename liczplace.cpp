#include <iostream>
using namespace std;

void LiczPlace(){
    float loan;
    float bonus;
    float sales;
    float pay;

    cout<<"Podaj zaliczke"<<endl;
    cin>>loan;
    cout<<"Podaj premie"<<endl;
    cin>>bonus;
    cout<<"Podaj sprzedaz"<<endl;
    cin>>sales;
    if(bonus<loan){
        cout<<"Pracownik musi zwrocic"<<loan<<" zl"<<endl;
    }
    pay = sales + bonus - loan;
    //Gdyby ta funkcja by�a metod� klasy pracownik, pay by by�o przekazywane dalej do metody ZwrocPlace

}

int main() {
  float placa = LiczPlace();

}
