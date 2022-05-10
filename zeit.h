#ifndef ZEIT_H_INCLUDED
#define ZEIT_H_INCLUDED

struct Date
{
    int day;
    int month;
    int year;
};

struct Date input_date();
int exists_date(struct Date);
int day_of_the_year(struct Date);
int is_leapyear(int year);
int get_days_for_month(int month, int year);
int check_year(int year);

#endif // ZEIT_H_INCLUDED
