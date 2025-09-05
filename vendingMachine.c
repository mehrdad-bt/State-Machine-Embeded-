#include <stdio.h>
#include "vendingMachine.h"



int VendingMachine_init(VendingMachine_t *vendingMachine){

    vendingMachine->state = WAIT_FOR_MONEY; // IDLE initiation 

    return (vendingMachine->state);

}

void Menu(VendingMachine_t *vendingMachine)
{
    
    printf("Entered inside Func\n");
    
    int choice=0;
    
    while(choice != 4)
    {
        printf("Please Enter an Option:\n1 = Insert Coin\n2 = Select Product\n3 = Cancel\n4 = Exit\n ");
        scanf(" %d", &choice);
        switch(choice)
        {
            case 1:
            {
                while((vendingMachine->state) != 1)
                {
                    printf("Not Done! Machine is not in IDLE mode\n");
                    break;
                }

            }


            break;

            case 2:

            break;

            case 3:

            break;
        }


        }
    

}