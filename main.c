//Author: Stefan Haring
//Datum:  10.05.22
//Aufgabe: Tag des Jahres Programm

#include <stdio.h>
#include <stdlib.h>
#include "zeit.h"


int main()
{
    int day, month, year;
    struct Date date = input_date();
    if (exists_date(date))
    {
        printf("Tag des Jahres: %i\n", day_of_the_year(date));
    }
    else
    {
        printf("Das Datum ist nicht gültig");
    }
    return 0;
}

