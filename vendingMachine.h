typedef enum
{
    IDLE = 1,
    WAIT_FOR_MONEY = 2,
    DISPENSE = 3
}state_t;

typedef struct
{
    state_t state;
}VendingMachine_t;

void Menu(VendingMachine_t*);
void VendingMachine_init(VendingMachine_t*);
void VendingMachine_Process(VendingMachine_t*, int);
