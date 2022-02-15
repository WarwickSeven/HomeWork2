// ДЗ пункт 2, 3, 4 - создание перечисления, массива и структуры

#include <iostream>

struct tPlayer                                          //ДЗ пункут номер 4
{
    std::string playerName;     //это хвала гугулу и равеслям
    int playerId;
    char playerCymbal;
};

bool gameStatus;
short moveNumber;

enum ticTacToe {EMPTY = '_', ZERO = 'O', CROSS = 'X'};  //ДЗ пункут номер 2

int main()
{
    tPlayer p1 = {"Winner" , 1234, 'X' };
    tPlayer p2 = {"Looser" , 5678, 'O' };
    
    ticTacToe gameField[3][3] = {                        //ДЗ пункт номер 3
    {EMPTY, EMPTY, EMPTY},
    {EMPTY, EMPTY, EMPTY},
    {EMPTY, EMPTY, EMPTY}
    };
    
    return 0;
}