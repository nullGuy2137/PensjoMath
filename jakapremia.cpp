#include <iostream>
using namespace std;

float JakaPremia(){

float sales;
cout<<"Podaj ilosc sprzedanych produktow"<<endl;
cin>>sales;
float bonus;
if(sales < 10000){
    bonus = sales * 0.10;
}
if(sales > 10000 && sales < 14999.99){
    bonus = sales * 0.12;
}
if(sales > 15000 && sales < 17999.99){
    bonus = sales * 0.14;
}
if(sales > 18000 && sales < 21999.99){
    bonus = sales * 0.16;
}
if(sales > 22000){
    bonus = sales * 0.18;
}

return(bonus);
}

int main() {

    float premia = JakaPremia();
    cout<<"Premia: "<<premia<<endl;

}
