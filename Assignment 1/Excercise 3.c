#include <stdio.h>

int main(void){
    //Opretter karakter-variabeler a og b
    char a; 
    char b;
    //Spørger brugeren om input
    scanf(" %c", &a);
    scanf(" %c", &b);

    //Ser om input 1 er større en 2
    if (a>b){
        printf("%c er større end %c.\n",a,b);
    }
    //Ser om input 2 er større en 1
    else if (b>a){
        printf("%c er større end %c.\n",b,a);
    }
    //Hvis ingen af de to inputs er større end den anden returneres, at de er lige store. 
    else
        printf("De er lige store");
    return 0;
}