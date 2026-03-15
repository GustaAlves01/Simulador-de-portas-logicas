#include <stdio.h>

int main(){
    printf("[1] Create Users\n" 
	   "[2] List Users\n"
	   "[3] Search Users\n"
	   "[4] Delete Users\n"
	   "[5] Exit\n");
    return 0;
}

struct Usr{
    int id;
    char name[50];
    int age;
};
