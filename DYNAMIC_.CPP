#include<s.h>

//space allocation
char *space (int s){
char *p= (char *) malloc (s*sizeof(char));
if(p!=NULL){printf("ø Space allocated\n\n");}
return p;
}
// working with data
void work(char *ch,int i)
{
for (int j=0;j<i;j++){
printf("\tEnter char %d = " ,j+1);
scanf(" %c",(ch+j));
}

}
// display data
void display(char *ch,int i)
{
for (int j=0;j<i;j++){
printf("\n = %c " ,*(ch+j));
}
}


// Main
void me(){
int i;
char *c;
printf("Please Enter The Size = ");
scanf("%d",&i);
c= space (i);
work(c,i);
display(c,i);
printf("\nMemory cleaning\n");
free(c);

display(c,i);
}