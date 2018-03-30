/********************************
 * Michael Otyeno               *
 * April 05 2017                *
 * Understanding Reading Files  *
 ********************************/

typedef struct
{
    char* month;
    int day;
    int year;
    float high;
    float low;
}Entry;//Entry Struct


char* asgnMonth(int* m) //function that turns month int to a string
{
    char* month;
        switch(*(m)){
            case 1:
                month = "January";
                return(month);
                break;
            case 2:
                month = "February";
                return(month);
                break;
            case 3:
                month = "March";
                return(month);
                break;
            case 4:
                month = "April";
                return(month);
                break;
            case 5:
                month = "May";
                return(month);
                break;
            case 6:
                month = "June";
                return(month);
                break;
            case 7:
                month = "July";
                return(month);
                break;
            case 8:
                month = "August";
                return(month);
                break;
            case 9:
                month = "September";
                return(month);
                break;
            case 10:
                month = "October";
                return(month);
                break;
            case 11:
                month = "November";
                return(month);
                break;
            case 12:
                month = "December";
                return(month);
                break;
           default:
               month = "Not a valid month";
               return(month);
        }
}
