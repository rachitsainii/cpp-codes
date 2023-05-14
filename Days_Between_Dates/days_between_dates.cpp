#include <stdio.h>
#include <stdlib.h>

int days_in_months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int date(int ddmmyyyy)
{
  int d = ddmmyyyy / 1000000;
  return d;
}

int month(int ddmmyyyy)
{
  int temp = ddmmyyyy % 1000000;
  int m = temp / 10000;
  return m;
}

int year(int ddmmyyyy)
{
  int y = ddmmyyyy % 10000;
  return y;
}

int isleap(int year)
{
  if (year % 400 == 0)
    return 1;

  if (year % 100 == 0)
    return 0;

  if (year % 4 == 0)
    return 1;

  else
    return 0;
}

int number_of_days(int year)
{
  int leap_days = 0;
  for (int i = 1; i <= year; i++)
  {
    if (isleap(i) == 1)
      leap_days++;
  }
  return leap_days;
}

int isvalid(int date, int month, int year)
{
  if (date > 31 || date <= 0)
    return 10;
  if (month > 12 || month <= 0)
    return 11;
  if (year <= 0)
    return 12;
  if ((month == 1) || (month == 3) || (month == 5) || (month == 7) ||
      (month == 8) || (month == 10) || (month == 12) && date <= 31)
    return 1;
  if ((month == 4) || (month == 6) || (month == 9) ||
      (month == 11) && date <= 30)
    return 1;
  if (month == 2 && date <= 28)
    return 1;
  if (month == 2 && isleap(year) == 1 && date <= 29)
    return 1;
}

void main()
{
  int ddmmyyyy_1, ddmmyyyy_2;
  printf("Enter first date(DDMMYYYY): ");
  scanf("%d", &ddmmyyyy_1);
  printf("Enter second date(DDMMYYYY): ");
  scanf("%d", &ddmmyyyy_2);
  int date_1 = date(ddmmyyyy_1), month_1 = month(ddmmyyyy_1),
      year_1 = year(ddmmyyyy_1);
  int date_2 = date(ddmmyyyy_2), month_2 = month(ddmmyyyy_2),
      year_2 = year(ddmmyyyy_2);

  int ret1 = isvalid(date_1, month_1, year_1);
  if (ret1 == 10)
    printf("The day of date %d-%d-%d in invalid! Please check again\n", date_1,
           month_1, year_1);
  if (ret1 == 11)
    printf("The month of date %d-%d-%d in invalid! Please check again\n",
           date_1, month_1, year_1);
  if (ret1 == 12)
    printf("The year of date %d-%d-%d in invalid! Please check again\n", date_1,
           month_1, year_1);

  int ret2 = isvalid(date_2, month_2, year_2);
  if (ret2 == 10)
    printf("The day of date %d-%d-%d in invalid! Please check again\n", date_2,
           month_2, year_2);
  if (ret2 == 11)
    printf("The month of date %d-%d-%d in invalid! Please check again\n",
           date_2, month_2, year_2);
  if (ret2 == 12)
    printf("The year of date %d-%d-%d in invalid! Please check again\n", date_2,
           month_2, year_2);

  if (ret1 == 1 && ret2 == 1)
  {
    int days_1 = 0;
    if (month_1 == 1)
      days_1 = 0;
    else
    {
      for (int i = 0; i < month_1; i++)
      {
        days_1 = days_1 + days_in_months[i];
      }
    }

    int days1 = (year_1 - 1) * 365 + days_1 + date_1 + number_of_days(year_1);

    int days_2 = 0;
    if (month_2 == 1)
      days_2 = 0;
    else
    {
      for (int i = 0; i < month_2; i++)
      {
        days_2 = days_2 + days_in_months[i];
      }
    }
    int days2 = (year_2 - 1) * 365 + days_2 + date_2 + number_of_days(year_2);

    int NumberOfDays = days2 - days1 + 1;

    if ((month_1 < 3 && month_2 > 2) && year_1 == year_2 &&
        isleap(year_1) == 1)
    {
      NumberOfDays = NumberOfDays + 1;
      printf("Number days between dates %d-%d-%d and %d-%d-%d are: %d\n",
             date_1, month_1, year_1, date_2, month_2, year_2, NumberOfDays);
    }
    else
    {
      printf("Number days between dates %d-%d-%d and %d-%d-%d are: %d\n",
             date_1, month_1, year_1, date_2, month_2, year_2, NumberOfDays);
    }
  }
}
