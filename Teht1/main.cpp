#include <iostream>

using namespace std;
int a, b;
int retSum();
int retDiv();

int main()
{

    cout << "Anna ensimmäinen positiivinen kokonaisluku :" << endl;
    cin >> a;
    cout << "Anna toinen positiivinen kokonaisluku :" << endl;
    cin >> b;
    cout << "Näiden lukujen summa on: " << retSum() << endl;
    cout << "Näiden lukujen osamäärä on: " << retDiv() << endl;

}

void calcSum()
{
    int resultSum;
    resultSum = a + b;
    cout << resultSum << endl;
}

void calcDiv()
{
    int resultDiv;
    resultDiv = a / b;
    cout << resultDiv << endl;

}

int retSum()
{
    int resultRetSum;
    resultRetSum = a + b;
    return resultRetSum;
}

int retDiv()
{
    int resultRetDiv;
    resultRetDiv = a / b;
    if(resultRetDiv == 0){
        cout << "Virhe" << endl;
        return 0;
    }
    else{
        return resultRetDiv;
    }

}
