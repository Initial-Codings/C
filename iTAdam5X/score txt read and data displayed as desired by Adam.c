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
} Entry;       //Entry struct

int main()
{
    FILE* file;
    file = fopen("C:\\Users\\PC\\Desktop\\score.txt","r");

    int entryCount;
    fscanf(file,"%d",&entryCount);//read how many structs in the file

    Entry* eArray;
    eArray = (Entry*)malloc(sizeof(Entry)*entryCount);//allocate memory for all the entry structs

    for (int i = 0; i < entryCount; i++){
        int namelen;
        fscanf(file,"%d",&namelen); //fetch the scanned name length
        eArray[i].name = (char*)malloc(sizeof(char)*(namelen + 1)); //allocate memory for the name

        fscanf(file, "%s" "%d", eArray[i].name,&eArray[i].score);//fetches the scanned name and score
        printf("%d. %s - %d\n", i + 1, eArray[i].name,eArray[i].score);// prints the rank, name and score

    }
    //clean up
    fclose(file); //closes the file

    for (int i = 0; i < entryCount; i++) //free memory allocated for name
        free(eArray[i].name);

    free(eArray); //free the memory allocated for the entries


    return 0;
}







