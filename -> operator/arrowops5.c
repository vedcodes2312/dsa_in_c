#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Address {
    char city[50];
    int zip;
};

struct person {
    char name[50];
    struct Address *address;
};

int main() {
    // Dynamically allocate memory for the person structure
    struct person *per = (struct person*)malloc(sizeof(struct person));
    // Dynamically allocate memory for the address structure
    per->address = (struct Address*)malloc(sizeof(struct Address));

    // Assign values
    strcpy(per->name, "Ranveer Singh");
    strcpy(per->address->city, "New York");
    per->address->zip = 123456;

    // Print values using the -> operator
    printf("name = %s\n", per->name);
    printf("city = %s\n", per->address->city);
    printf("zip = %d\n", per->address->zip);

    // Free the dynamically allocated memory
    free(per->address);
    free(per);

    return 0;
}
