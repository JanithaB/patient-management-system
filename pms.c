/*
Program to manage Covid patients
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//setting of the structure
typedef struct {
    char NIC[15];
    char firstName[20];
    char lastName[30];
    int age;
    char gender[10];
    char symptoms[30];
    char admissionDate[20];
} patient_t;

patient_t recArr[100000];

int n=1, total, temp=0;

//Create separate functions for each operation (Add, Print, delete) and add them to UI.
void addNew();
void delRec();
void show_a_Rec();
void show_recs();


int main () { 

    int choice; 

    while(choice !=0){   //loop to re-occur the main system display
    puts("----------------------------------------");
    puts("COVID-19 PATIENT MANAGEMENT SYSTEM");
    puts("----------------------------------------");

    puts("1.  Add Patients records");
    puts("2.  Delete a Patient record");
    puts("3.  Show a Patient record");
    puts("4.  show all Patients' records");
    puts("0.  Quit");
    puts("----------------------------------------");

    printf("Enter Option [0-4]: "); // to get the user's input
    scanf("\n%d",&choice);
    fflush(stdin);

    puts("----------------------------------------");
    

        if (choice==0){
            //code to quit from the program
            printf("Have a nice day !\n\n");
            break;
        }

        else if(choice==1){
            //code to add a patient to the system
            addNew();
        }

        else if(choice==2){
            //code to Delete a Patient record
			delRec();
        }

        else if(choice==3){
            //code to Show a Patient record
			show_a_Rec();
        }

        else if(choice==4){
            //code to show all Patients' records
			show_recs();
        }

        else    {
            puts("\nERROR: Enter a valid command\n\n");
        }
    }


return 0;
}

void addNew(){
    //function to add new records

    printf("\nEntries on the system: %d\n",total);
    printf("Number of entries going to enter: ");
    scanf("%d", &temp);
    fflush(stdin);
    temp +=total;

    puts("\nPlease enter patient's details");
    puts("------------------------------");

    for(int i=total;i<temp;i++){

        printf("\nEnter NIC number    : ");
        scanf("%14s", &recArr[i].NIC);
        fflush(stdin);
        printf("Enter First Name    : ");
        scanf("%20s", &recArr[i].firstName);
        fflush(stdin);
        printf("Enter Last Name     : ");
        scanf("%30s", &recArr[i].lastName);
        fflush(stdin);
        printf("Enter Age           : ");
        scanf("%d", &recArr[i].age);
        fflush(stdin);
        printf("Enter the Gender    : ");
        scanf("%10s", recArr[i].gender);
        fflush(stdin);
        printf("Enter the Symptoms  : ");
        scanf("%30s", recArr[i].symptoms);
        fflush(stdin);
        printf("Enter the Date      : ");
        scanf("%20s", recArr[i].admissionDate);
        fflush(stdin);
        puts("\n");

        total++;
    }

}

void delRec(){
	//delete a record by using the NIC number
	char tempNIC[15];
	puts("\nRecord Deleting in progress");
	puts("---------------------------");
	
	if(total>0){
		
		printf("\nEnter the NIC number: ");
		scanf("%s", &tempNIC);
        fflush(stdin);
		
		for(int j=0;j<total;j++){
			if(strcmp(tempNIC,recArr[j].NIC)==0){
				for(int k=j;k<total-1;k++){
					strcpy(recArr[k].NIC,recArr[k+1].NIC);
					strcpy(recArr[k].firstName,recArr[k+1].firstName);
                    strcpy(recArr[k].lastName,recArr[k+1].lastName);
					recArr[k].age=recArr[k+1].age;
					strcpy(recArr[k].gender,recArr[k+1].gender);
					strcpy(recArr[k].symptoms,recArr[k+1].symptoms);
					strcpy(recArr[k].admissionDate,recArr[k+1].admissionDate);
				}
			}
		}
		printf("\nNIC no. %s : Record deleted !\n\n",tempNIC);
        total--;
	}
	else{puts("\nERROR: No entries to delete\n\n");}
}

void show_a_Rec(){
	//show a specific record of a patient using NIC number
	char tempNIC[15];
	
	if(total>0){
		printf("\nEnter the NIC number: ");
		scanf("%s", &tempNIC);
        fflush(stdin);
		int tempVal=0;

		for(int k=0;k<total;k++){
			if(strcmp(tempNIC,recArr[k].NIC)==0){
				printf("\nNIC no.	      : %s", recArr[k].NIC);
				printf("\nName          : %s %s", recArr[k].firstName,recArr[k].lastName);
				printf("\nAge           : %d", recArr[k].age);
				printf("\nGender        : %s", recArr[k].gender);
				printf("\nSymptoms      : %s", recArr[k].symptoms);
				printf("\nAdmission Date: %s\n\n", recArr[k].admissionDate);
				tempVal=1;
                break;
			}
		}
        if(tempVal==0){puts("\nNo match found !\n");}
	}
	else{puts("\nNo entries found !\n\n");}
}

void show_recs(){
	//function to show all the records in the system
	printf("\nEntries on the system: %d\n",total);
	if(total>0){
		for(int i=0;i<total;i++){
			printf("\nNIc no.	      : %s", recArr[i].NIC);
			printf("\nName          : %s %s", recArr[i].firstName,recArr[i].lastName);
			printf("\nAge           : %d", recArr[i].age);
			printf("\nGender        : %s", recArr[i].gender);
			printf("\nSymptoms      : %s", recArr[i].symptoms);
			printf("\nAdmission Date: %s\n\n", recArr[i].admissionDate);
		}
	}
	else{printf("\nNo entries found !\n\n");}
}
