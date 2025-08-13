#include <stdio.h> 
#include <string.h>

void compareStrings(char str1[10], char str2[10]) {
    if (strcmp(str1, str2) == 0) { 
        printf("Scientific name is a Tautonym.\n"); 
        
    }
        else { printf("Scientific name is not a Tautonym.\n");
        }
        }

void copyString(char source[10], char destination[10]) { 
    strcpy(destination, source); 
    printf("String copied: %s\n", destination);
    }

void findLength(char str[10]) { int length = strlen(str);
printf("Length of the string is: %d\n", length);

if (length > 12) {
    printf("This data cannot be stored in our system.\n");
}
else {
     printf("This data can be stored in our system.\n");
}
}

void concatenateStrings(char str1[], char str2[]) { strcat(str1, str2); printf("Concatenated string: %s\n", str1); }

int main() {

printf("Welcome to ICZN.\n");
printf("In this code we will tell you about the information regarding scientific name.\n" );

char str1[100], str2[100];
char destination[100];
int choice;

printf("Name of Genus: ");
fgets(str1, sizeof(str1), stdin);
str1[strcspn(str1, "\n")] = '\0';  

printf("Name of Species: ");
fgets(str2, sizeof(str2), stdin);
str2[strcspn(str2, "\n")] = '\0';  

do {
    printf("\nSelect an option:\n");
    printf("1. Compare Genus and Species of animal.\n");
    printf("2. Copying Genus into species.\n");
    printf("3. Concatenate Genus and Species.\n"); 
    printf("4. Find length of Scientific name.\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();  

    switch (choice) {
        case 1:
            printf("\nComparison of Genus and species:\n");
            compareStrings(str1, str2);
            break;
        case 2:
            printf("\nCopying Genus into species:\n");
            copyString(str1, destination);
            break;
        case 3:
            printf("\nConcatenation of genus and species:\n");
            concatenateStrings(str1, str2);
            break;
        case 4:
            printf("\nFinding length of Scientific name:\n");
            findLength(str1);
            break;
        
        case 5:
            printf("Exiting the program. Thank you!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
    }
} while (choice != 5);
return 0;
}
