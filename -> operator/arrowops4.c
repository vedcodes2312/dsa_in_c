//example with nested structure

#include<stdio.h>

struct Address {
    char city[50];
    int zip;
};

struct person {
    char name[50];
    struct Address address;
};

int main() 
{
    struct person per = {"Ranveer Singh", {"New York",123456}};

    struct person *ptr = &per;

    printf("name = %s\n", ptr->name);
    printf("city = %s\n", ptr->address.city);
    printf("zip = %d\n", ptr->address.zip);

    return 0;
}