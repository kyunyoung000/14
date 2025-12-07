#include <stdio.h>
#include <stdlib.h>



struct Book{
       int number;
       char title[10];
       };

int main(int argc, char *argv[])
{
    struct Book *p;
    
    p = (struct Book*)malloc(2*sizeof(struct Book));
    
    if (p == NULL){
          printf("¢¬¨­¢¬©£¢¬¢ç CO¢¥c ¢¯A¡¤u\n");
          return;}
          
    p->number = 1;
    strcpy(p->title, "C Programming");
    
    (p+1)->number = 2;
    strcpy((p+1)->title, "ELectronics");
    
    free(p);
    
  
  system("PAUSE");	
  return 0;
}
