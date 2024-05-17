#include<stdio.h>
#include<string.h>

struct jugyo{
    char dow[4]; 
    int tp;
    char subject[30]; 
    int build; 
    int room; 
};

void print_class(struct jugyo a){
    printf("%s/%d/%s/%d/%d\n", a.dow, a.tp, a.subject, a.build, a. room);
}

int main(void){
    struct jugyo my_class;
    struct jugyo your_class;

    strcpy(my_class.dow, "Mon\n");
    my_class.tp = 4;
    strcpy(my_class.subject, "English\n");
    my_class.build = 6;
    my_class.room = 2; 

    print_class(my_class);

    your_class = my_class;

    print_class(your_class);

    return 0;
}