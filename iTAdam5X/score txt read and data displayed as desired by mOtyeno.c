/******************
* Michael Otyeno  *
* April 5th 2017  *
* Reading files   *
*******************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char* name;
    int score;
} Entry;     //Structure for Entries

int main()
{
    FILE* file;
    file = fopen("C:\\Users\\PC\\Desktop\\score.txt","r");//open the file

    Entry* eArray;
    eArray =(Entry*)calloc(4, sizeof(Entry)); //allocate memory for the four entries
    if(eArray == NULL){
        puts("Memory Unavailable");//double check memory allocation
        return(1);
    }

    int count;
    fscanf(file, " %i", &count); //scan and store the number of entries

    for(int i = 0; i < count; i++){// fill the eArray
        int nameLen;
        fscanf(file, "%i", &nameLen);//scan and store strlen for each string

        eArray[i].name =(char*)calloc(nameLen + 1,sizeof(char));//allocate memory for each string
        if(eArray[i].name == NULL){
            puts("Memory Unavailable");//double check memory allocation
            return(1);
        }

        fscanf(file, " %s %i",eArray[i].name,&eArray[i].score);//scan and store the string and score
        printf("%i. %s %i\n",i + 1,eArray[i].name,eArray[i].score);//print the rank, string and score to screen

    }

    fclose(file);//close the file
    for(int i = 0; i < count; i++)
        free(eArray[i].name);//free memory for each string
    free(eArray);// free memory for the four entries

    return 0;
}







