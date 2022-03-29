/*
Programm: Tag des Jahres
Autor: Stefan Haring
Datum: 15.03.2022
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, day, month, dayOfTheYear, i, s = 0;
    int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // Array für die Monate eines Jahres


    printf("Geben Sie das Jahr ein\n");                                     // Eingabe des kompletten Datums
    scanf("%d", &year);

    printf("Geben Sie den Monat ein\n");
    scanf("%d", &month);

    printf("Geben Sie den Tag ein\n");
    scanf("%d", &day);

    if((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0)         // Prüfung, ob es sich um ein Schaltjahr handelt
    {
        daysPerMonth[1] = 29;                                             // Umstellung des Februars auf Schaltjahr
    }
    else;

    for(i = 0 ; i < month - 1 ; i++)                                      // Aufrechnung der vorhergegangenen Monate
    {
        s += daysPerMonth[i];
    }

    dayOfTheYear = s + day;                                               // Aufrechnung plus Tags des Monats

    printf("Heute ist der %d. Tag dieses Jahres\n", dayOfTheYear);

    return 0;
}
