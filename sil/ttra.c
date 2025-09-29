#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define filename "Trainers.dat"

struct Trainer {
    int trainerID;
    float salary;
    char name[50];
    char dateofjoining[20];
    char department[59];
    char position[40];
};

void createRecord(struct Trainer trainers[], int *count);
void listRecords(struct Trainer trainers[], int count);
void modifyRecord(struct Trainer trainers[], int count);
void deleteRecord(struct Trainer trainers[], int *count);

int main() {
    struct Trainer trainers[100];
    int count = 0;
    int choice;
    do {
	printf("\n == Trainers database == \n");
	printf("\n 1. Create a record \n");
	printf("2. List records \n");
	printf("3. Modify a record \n");
	printf("4. Delete a record \n");
	printf("5. Exit \n");
	printf("Pick an option: ");
	scanf("%d", &choice );
	switch(choice) {
	    case 1:
		createRecord(trainers, &count);
		break;
	    case 2:
		listRecords(trainers, count);
		break;
	    case 3:
		modifyRecord(trainers, count);
		break;
	    case 4:
		deleteRecord(trainers, &count);
		break;
	    case 5:
		printf("\n Exiting..");
		break;
	    default:
		printf("\n Not a valid choice");
	}
    } while(choice != 5);
    return 0;
}

void createRecord(struct Trainer trainers[], int *count) {
    printf("\n Enter trainer ID: ");
    scanf("%d", &trainers[*count].trainerID);
    getchar();

    printf("\n Enter the name of trainer: ");
    fgets(trainers[*count].name, sizeof(trainers[*count].name), stdin);
    trainers[*count].name[strcspn(trainers[*count].name, "\n")] = '\0';

    printf("\n Name of the Department: ");
    fgets(trainers[*count].department, sizeof(trainers[*count].department), stdin);
    trainers[*count].department[strcspn(trainers[*count].department, "\n")] = '\0';

    printf("\n position: ");
    fgets(trainers[*count].position, sizeof(trainers[*count].position), stdin);
    trainers[*count].position[strcspn(trainers[*count].position, "\n")] = '\0';

    printf("\n Date of joining: ");
    fgets(trainers[*count].dateofjoining, sizeof(trainers[*count].dateofjoining), stdin);
    trainers[*count].dateofjoining[strcspn(trainers[*count].dateofjoining, "\n")] = '\0';

    printf("\n Salary: ");
    scanf("%f", &trainers[*count].salary);

    (*count)++;
    printf("Your info has been added sucessfully!");
}

void listRecords(struct Trainer trainers[], int count) {
    if (count ==0) {
	printf("\n no records found! \n");
	return;
    }

    printf("\n=== List of Trainers ===\n");
    for (int i = 0; i < count; i++) {
	printf("\nTrainer ID: %d", trainers[i].trainerID);
	printf("\nName: %s", trainers[i].name);
	printf("\nDepartment: %s", trainers[i].department);
	printf("\nPosition: %s", trainers[i].position);
	printf("\nDate of joining: %s", trainers[i].dateofjoining);
	printf("\nSalary: %.2f\n", trainers[i].salary);
	printf("--------------------------------\n");
    }
}

void modifyRecord(struct Trainer trainers[], int count) {
    int id, found = 0;
    printf("\nEnter Trainer ID to modify: ");
    scanf("%d", &id);
    getchar();
    for (int i = 0; i < count; i++) {
	if (trainers[i].trainerID == id) {
	    found = 1;

	    printf("Enter new Trainer Name: ");
	    fgets(trainers[i].name, sizeof(trainers[i].name), stdin);
	    trainers[i].name[strcspn(trainers[i].name, "\n")] = '\0';
	    
	    printf("Department: ");
	    fgets(trainers[i].department, sizeof(trainers[i].department), stdin);
	    trainers[i].department[strcspn(trainers[i].department, "\n")] = '\0';

	    printf("Position: ");
            fgets(trainers[i].position, sizeof(trainers[i].position), stdin);
            trainers[i].position[strcspn(trainers[i].position, "\n")] = '\0';

	    printf("Date of joining");
            fgets(trainers[i].dateofjoining, sizeof(trainers[i].dateofjoining), stdin);
            trainers[i].dateofjoining[strcspn(trainers[i].dateofjoining, "\n")] = '\0';

	    printf("Salary: ");
	    scanf("%f", &trainers[i].salary);

	    printf("The record has been updated");
	    break;
	}
    }

    if (!found)
    	printf("%d is not a valid ID\n", id);
}

void deleteRecord(struct Trainer trainers[], int *count) {
    int id, found = 0;
    printf("Enter trainer ID: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++) {
	if (trainers[i].trainerID == id) {
	    found = 1;
	    for (int j = i; j < (*count) - 1; j++) {
	        trainers[j] = trainers[j + 1];
	    }
	    (*count)--;
	    printf("Record deleted successfully!\n");
	    break;
	}
    }
    if (!found)
	printf("%d is an invalid ID\n", id);
}





		
