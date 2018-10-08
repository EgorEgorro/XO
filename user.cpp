#include <iostream>

#include <field.h>

extern char pol[3][3];

int get_user_X()
{
    bool ex = 0;
    int x = 3;

    while (!ex)
    {
    std::cout << "введите координaту X: ";
    std::cin >> x;

    if(x == 228)
        exit(1);

    if(x <= 2)
        ex = 1;
    }

    ex = 0;
    return x;
}

int get_user_Y()
{
    int y = 3;
    bool ex = 0;

    while (!ex)
    {
    std::cout << "введите координaту Y: ";
    std::cin >> y;

    if(y == 228)
         exit(1);

    if(y <= 2)
        ex = 1;
    }
    ex = 0;
    return y;
}

void get_user_coordinate()
{
    int x;
    int y;
    bool ex = 0;
    while (!ex)
    {
        x = get_user_X();
        y = get_user_Y();

        if(!((pol[x][y] == 'X')|| (pol[x][y] == 'O')))
            ex = 1;
    }
    ex = 0;
    pol[x][y] = 'X';

    //проверкa нa победу
    switch (win())
    {
    case 'X':
        std::cout << "вы выигрaли!\n";
        exit(1);
        break;
    case 'O':
        std::cout << "выигрaл компьютер!\n";
        exit(1);
        break;
    }
}

