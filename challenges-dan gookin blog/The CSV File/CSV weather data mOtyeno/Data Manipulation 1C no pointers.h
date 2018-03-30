/********************************
 * Michael Otyeno               *
 * April 07 2017                *
 * The CSV Challenge            *
 ********************************/


void fopenVerify(FILE* file)//Verifies if file is opened
{
      if(file == NULL)
    {
        perror("\"Unable to open file.\"");//good to double check
        exit(1);                      //incase file deleted or moved
    }
    return;
}



