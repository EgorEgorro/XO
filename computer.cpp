#include <iostream>

#include <field.h>

extern char pol[3][3];

void get_computer()
{
    int i,j;

    for(i = 0; i < 3; i ++)
        {
            for(j=0; j<3; j++)
                if(pol[i][j] == ' ') break;
            break;
        }

    if( i * j == 9)
        {
            std::cout << "Конец игры \n";
            exit(1);
        }

    else
        pol[i][j] = 'O';


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
