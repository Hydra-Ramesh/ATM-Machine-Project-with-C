#include<stdio.h>
int checkPin(int pin){
    int enteredPin, attemts = 3;
    while(attemts>0){
        printf("Enter Your Pin: ");
        scanf("%d", &enteredPin);
        if(enteredPin == pin){
            printf("Login Successful!\n");
            return 1;
        }else{
            attemts--;
            printf("Incorrect Pin! You have %d attempts left.\n", attemts);
        }
    }
    printf("Too many incorrect attempts. Exiting...\n");
    return 0;
}
void checkBalance(float balance){
    printf("Your current balance is: ₹%.2f\n", balance);
}
void deposit(float *balance){
    float diposite_ammount;
    printf("Enter the amount to deposit: ₹");
    scanf("%f", &diposite_ammount);
    if(diposite_ammount > 0){
        *balance += diposite_ammount;
        printf("Deposit successful! New balance: ₹%.2f\n", *balance);
    }else{
        printf("Invalid deposit amount. Please enter a positive value.\n");
    }
}
void withdraw(float *balance){
    float withdraw_ammount;
    printf("Enter the amount to withdraw: ₹");
    scanf("%f", &withdraw_ammount);
    if(withdraw_ammount > 0){
        *balance -= withdraw_ammount;
        printf("Withdraw successful! New balance: ₹%.2f\n", *balance);
    }else{
        printf("Invalid deposit amount. Please enter a positive value.\n");
    }
}
void changePin(int *pin){
    int newPin;
    printf("Enter your new pin: ");
    scanf("%d", &newPin);
    if(newPin >= 1000 && newPin <= 9999){
        *pin = newPin;
        printf("Pin changed successfully!\n");
    }else{
        printf("Invalid pin. Please enter a 4-digit pin.\n");
    }
}
int main(){
    float balance = 0.0;
    int pin = 8509;
    int choice;
    if(checkPin(pin) == 1){
        while(1){
            printf("\nATM Menu:\n");
            printf("1. Check Balance\n");
            printf("2. Deposit Money\n");
            printf("3. Withdraw Money\n");
            printf("4. Change Pin\n");
            printf("5. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            
            switch(choice){
                case 1:
                    checkBalance(balance);
                    break;
                case 2:
                    deposit(&balance);
                    break;
                case 3:
                    withdraw(&balance);
                    break;
                case 4:
                    changePin(&pin);
                    break;
                case 5:
                    printf("Thank you for using the ATM. Goodbye!\n");
                    return 0;
                default:
                    printf("Invalid choice! Please try again.\n");
            }
        }
    }else{
        printf("You are not allowed to access the ATM.\n");
    }
}