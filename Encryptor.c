#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    char text2encrypt[50];
    char text2decrypt[50];
    char command[150]; 
    while(1) {

        printf("Press 0 to exit\nPress 1 to encrypt\nPress 2 to decrypt\nYour Choice: ");
        scanf("%d", &choice);
        
       
        getchar(); 

        if(choice == 1) {
            printf("Enter text to encrypt: ");
          
            fgets(text2encrypt, sizeof(text2encrypt), stdin);
            
            sprintf(command, "echo -n \"%s\" | base64", text2encrypt);
            
           
            system(command);
            printf("\n");
        }
        else if(choice == 2) {
            printf("Enter encrypted text to decrypt: ");
            fgets(text2decrypt, sizeof(text2decrypt), stdin);
            
            
            sprintf(command, "echo -n \"%s\" | base64 -d", text2decrypt);
            
            system(command);
            printf("\n");
        }
        else if(choice == 0){
            break;
        }
        else {
            printf("Enter a valid choice!\n");
        }
    }

    return 0;
}
