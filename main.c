#include <stdio.h>
#include "vendingMachine.h"





int main(){

    int choice=0;
    VendingMachine_t vendingMachine;

    VendingMachine_init(&vendingMachine);
    
    while(choice != 4)
    {


        printf("Please Enter an Option:\n1 = Insert Coin\n2 = Select Product\n3 = Cancel\n4 = Exit\n");
        scanf(" %d", &choice);
        VendingMachine_Process(&vendingMachine, choice);


    }


 

    


    return 0;
}