// Nama         : Isnaya Zalfa Kamila 
// NIM          : 13224028 
// Deskripsi    : Program 
// Modul        : 

# include <stdio.h>


int main()
{
char masukan [50];
   scanf("%c",masukan);
   FILE *file = fopen("file.txt", "r"); // open file 
    
    if(file == NULL){ // kalo gabisa dibuka return 1 
       return 1;
    }
    
    char buff [50];
    while(fgets(buff, sizeof(buff), file) != NULL){
        printf("%s", buff);
    }
    fclose (file);
    return 0;
}
