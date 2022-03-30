#include "Bankomat.h"
#include "Money.h"
#include <iostream>
using namespace std;

bool Bankomat::Init(int ID_number, Money currentMoney, double max, double min)
{
    if (max > min)
    {
        this->ID_number = ID_number;
        this->currentMoney = currentMoney;
        this->max = max;
        this->min = min;
        return true;
    }
    else
        return false;
}

string Bankomat:: toString() const 
{
    return  currentMoney.toString();
}

void Bankomat::Display() const
{
    cout << toString() << endl;
}

void Bankomat::Read()
{ 
    int ID_number;
    int max;
    int min;
    Money currentMoney;
    currentMoney.Read();
    do
    {
        cout << " ¬вед≥ть  ID "; cin >> ID_number;
        cout << " max "; cin >>max;
        cout << " min "; cin >> min;
    } while
        (!Init(ID_number, currentMoney, max, min));
}
void Bankomat::insertMoney(Money m)
{
    currentMoney = doubleToMoney(dod(currentMoney, m));
}
void Bankomat::getMoney(Money i)
{
    if ( greatthan(currentMoney,i) && i.sum()>=min && i.sum()<=max)
    {
        currentMoney = doubleToMoney(ded(currentMoney, i));
    }

}