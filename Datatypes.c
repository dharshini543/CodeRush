#include<stdio.h>
#include<stdlib.h>

void data_types()
{
    printf("Size  of int = %llu bytes\n",sizeof(int));
    printf("Size of float = %llu bytes\n",sizeof(float));
    printf("Size of char = %llu bytes\n",sizeof(char));
    printf("Size of double = %llu bytes\n\n",sizeof(double));
    printf("Size of pointer = %llu bytes\n",sizeof(int *));
    printf("Size of pointer = %llu bytes\n",sizeof(char *));
    printf("Size of pointer = %llu bytes\n",sizeof(float *));
    printf("Size of pointer = %llu bytes\n",sizeof(double *));
    printf("Size of pointer = %llu bytes\n",sizeof(void *));
    printf("Size of void = %llu bytes\n\n",sizeof(void));

    printf("------------------------------------------------\n");

    struct InventoryItem
    {
        int itemID;
        char name[50];
        char brand[50];
        float price;
        float quantity;
        char department[30];
        char expiryDate[15];
        struct InventoryItem *next;
    };
    struct InventoryItem inventory;
    printf("Size of structure Inventory Item = %llu bytes\n",sizeof(inventory));
    printf("Size of itemID= %llu bytes\n",sizeof(inventory.itemID));
    printf("Size of name= %llu bytes\n",sizeof(inventory.name));
    printf("Size of brand= %llu bytes\n",sizeof(inventory.brand));
    printf("Size of price= %llu bytes\n",sizeof(inventory.price));
    printf("Size of quantity= %llu bytes\n",sizeof(inventory.quantity));
    printf("Size of department= %llu bytes\n",sizeof(inventory.department));
    printf("Size of expiryDate= %llu bytes\n",sizeof(inventory.expiryDate));
    printf("Size of next= %llu bytes\n",sizeof(inventory.next));

    printf("------------------------------------------------\n");

    printf("a = %llu\n",sizeof(5));
    printf("b = %llu\n",sizeof(5.5f));
    printf("c = %llu\n",sizeof(5.8));
    printf("d = %llu\n",sizeof('A'));
    printf("e = %llu\n",sizeof(-5));
    printf("f = %llu\n",sizeof(-6.8));
    printf("g = %llu\n",sizeof("Dharshini T R"));
    printf("h = %llu",sizeof('+'));

    printf("-----------------------------------------\n");

    char student[30];
    printf("size of Name = %llu\n",sizeof(student));
    char *ptr;
    printf("size of Name = %llu\n",sizeof(ptr));
    printf("Enter name\n");
    ptr = (char*)malloc(50);
    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    scanf("%s",ptr);
    printf("Name = %s\n",ptr);
    free(ptr);
}
