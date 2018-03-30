/********************************
 * Michael Otyeno               *
 * April 10 2017                *
 * The CSV Challenge            *
 ********************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* months[12] = { "January","February","March","April","May","June",
                        "July","August","September","October","November","December" };
    char* fPath = "C:\\Users\\PC\\Downloads\\Essentials\\Self Taught\\challenges-dan gookin blog\\The CSV File\\weather_data original.csv";
    int i, year, monthNum, day;
    float high, low;
    FILE* f;

    /* open the CSV file */
    f = fopen(fPath ,"r");
    if(f == NULL)
    {
        perror("\"Unable to open file.\"");
        exit(1);
    }

    /* process the data */
    /* the file contains 5 fields in a specific order:
       year,month,day,high,low
       separated by commas */

    i = 1;
          /* get year,month,day,high,low */
    while(fscanf(f,"%i,%i,%i,%f,%f",&year,&monthNum,&day,&high,&low)!= EOF)
    {
        /* display the result in the proper format */
        printf("%02i. %8s %02i %4i\tHigh: %3.1f\tLow: %3.1f\n",
                i++,
                months[( monthNum - 1 )],/* for the months[] array */
                day,
                year,
                high,
                low);
    }

    /* closes the file */
    fclose(f);//closes the miniDataS.txt

    return (0);
}

