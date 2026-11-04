// Nama         : Isnaya Zalfa Kamila 
// NIM          : 13224028 
// Deskripsi    : Program penjelajahan planet
// Modul        : 01 (Data manipulation, external files, structures, dynamic array 

# include <stdio.h>

void pengurutanSUHU(FILE *file){ // fungsi untuk menerima 

}

int main()
{
char masukan [50];
   scanf("%c",masukan);
   FILE *file = fopen("file1.txt", "r"); // open file 
    
    if(file == NULL){ // kalo gabisa dibuka return 1 
       return 1;
    }
    
    char buff [50];
    while(fgets(buff, sizeof(buff), file) != NULL){
        printf("%s", buff); // print isi fi
    }
    fclose (file);
    return 0;
}
