#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILENAME "Trainers.dat"

// These are preprocessor directives like #include and #define
//

struct Trainer {
   int trainerID;
   char name[50];
   char department[47];
   float salary;
   char position[47];
   char dateofjoining[15];
};

void createRecord(struct Trainer trainers[], int *count);
void listRecords(struct Trainer trainers[], int count);
void modifyRecord(struct Trainer trainers[], int count);
void deleteRecord(struct Trainer trainers[], int *count);

