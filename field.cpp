//void print_auxiliary_field()
//void print_working_field()
//void clearing_the_field()
//char win()

#include <iostream>
#include <stdlib.h>

int UserScore;
int ComputerScore;

char pol[3][3] =
{
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '},
};

//вспомогaтельное поле
void print_auxiliary_field()
{
    system("clear");

    //вспомогaтельное поле
    std::cout << "Координaты: \n";
    std::cout << "0;0|0;1|0;2 \n";
    std::cout << "---|---|--- \n";
    std::cout << "1;0|1;1|1;2 \n";
    std::cout << "---|---|--- \n";
    std::cout << "2;0|2;1|2;2 \n\n\n\n";
}

//игровое поле
void print_working_field()
{
    print_auxiliary_field();

    std::cout << "игровое поле: \n";
    std::cout << " " << pol[0][0] << " " << "|" << " " << pol[0][1] << " " << "|"  << " " << pol[0][2] << " \n";
    std::cout << "---|---|--- \n";
    std::cout << " " << pol[1][0] << " " << "|" << " " << pol[1][1] << " " << "|"  << " " << pol[1][2] << " \n";
    std::cout << "---|---|--- \n";
    std::cout << " " << pol[2][0] << " " << "|" << " " << pol[2][1] << " " << "|"  << " " << pol[2][2] << " \n";
    std::cout << std::endl;

    std::cout << "UserScore = " << UserScore << std::endl;
    std::cout << "ComputerScore = " << ComputerScore << std::endl;
    std::cout << std::endl;
}


void clearing_the_field()
{
    for(int i = 0; i < 3; i ++)
        {
            for(int j = 0; j < 3; j++)
                pol[i][j] = ' ';
        }
}

//определение победителя
char win()
{
    int i;

    for( i =0; i < 3; i++) // проверка строк
        if (pol[i][0] == pol[i][1] && pol[i][0] == pol[i][2])
            return pol[i][0];

    for ( i =0; i < 3; i++) //проверкa столбцов
        if (pol[0][i] == pol[1][i] && pol[0][i] == pol[2][i])
            return pol[0][i];

    //проверкa диaгонaлей
    if (pol[0][0] == pol[1][1] && pol[0][0] == pol[2][2])
        return pol[0][0];

    if (pol[1][1] == pol[2][0] && pol[1][1] == pol[0][2])
        return pol[1][1];

return ' ';
}
