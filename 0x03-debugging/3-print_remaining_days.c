#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int is_leap_year = 0;
	int feb_day_limit;
	int days_in_month;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		is_leap_year = 1;

	if (is_leap_year)
		feb_day_limit = 29;
	else
		feb_day_limit = 28;

	int days_in_each_month[] = {0, 31, feb_day_limit, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (month < 1 || month > 12)
	{
		printf("Invalid date: Month should be between 1 and 12.\n");
		return;
	}

	days_in_month = days_in_each_month[month];
	if (day < 1 || day > days_in_month)
	{
		printf("Invalid date: Day should be between 1 and %d for month %d.\n", days_in_month, month);
		return;
	}

	int day_of_year = 0;
	for (int i = 1; i < month; i++)
	{
		day_of_year += days_in_each_month[i];
	}
	day_of_year += day;

	int remaining_days;
	if (is_leap_year)
		remaining_days = 366 - day_of_year;
	else
		remaining_days = 365 - day_of_year;

	printf("Day of the year: %d\n", day_of_year);
	printf("Remaining days: %d\n", remaining_days);
}
