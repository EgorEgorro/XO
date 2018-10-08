#include <iostream>

#include <computer.h>
#include <user.h>
#include <field.h>

int main()
{
    while (true)
    {
        //print_working_field();

        for(int i; i < 9; i++)
        {
            if(i % 2 == 0)
            {
                print_working_field();
                get_user_coordinate();
            }
            else
            {
                print_working_field();
                get_computer();



            }
        }
    }
    return 0;
}

