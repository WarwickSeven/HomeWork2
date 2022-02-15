// ДЗ пункт 1 - объявление и инициализация переменных разных типов

#include <iostream>

using std::cout;    // Вопрос - такое написание снимает противоречие, которое
using std::endl;    // может возникнуть в будущем с using namespace std?

    unsigned long long starshipId{ 3865100551 }; //часть переменных создал глобальными
    float maxSpeed = 1'200.75;
    double distance = 999'999'999.99;

int main()
{
    int score;                     //пробы ради использовал все 3 варианта синтаксиса инициализации
    score = 0;
    char playAgain = 'y';
    short iLives = 3, iAlienKilled = 10;
    bool bShieldsUp{ true };
    
    cout << "Current Status:" << endl;
    cout << "\nLives: " << iLives << endl;       //эксперименты с синтаксисом вывода
    cout << "Aliens Killed: " << iAlienKilled << endl;
    cout << "Active Shields: " << std::boolalpha << bShieldsUp << endl;
    
    return 0;
    
}