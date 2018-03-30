/********************************
 * Michael Otyeno               *
 * April 07 2017                *
 * The CSV Challenge            *
 ********************************/

typedef struct
{
    char* month;
    int day;
    int year;
    float high;
    float low;
}Entry;//Entry Struct

void fopenVerify(FILE* file)//Verifies if file is opened
{
      if(file == NULL)
    {
        perror("\"Unable to open file.\"");//good to double check
        exit(1);                      //incase file deleted or moved
    }
    return;
}

void allocVerify(void* p)//Verifies memory allocated in the heap
{
    if (p == NULL)
    {
        puts("Memory unavailable");//precaution warning if memory is not available
        exit(1);                 //advisable to always check
    }
    return;
}



