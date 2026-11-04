// Nama : Isnaya Zalfa Kamila 
// NIM : 13224028 
// Deskripsi : Membaca data dari file coba.txt dan menhitung jumlah kata sukses, worng, dan error

#include <stdio.h>
#include "struct.h"
#include <string.h>

// fungsi untuk menghitung jumlah succes, wrong, dan error dari file external 
void rekapNilai(FILE *file, int *s, int *e, int *w){ 
    char buff[50]; // menyimpan hasil input 

    while(fgets(buff, sizeof(buff), file) != NULL){ // selama satu baris tidak NULL
        buff[strcspn(buff, "\n")] = '\0'; // mengabaikan enter di dalam buff 
        if(strcmp(buff, "SUCCESS") == 0) { // pointer untuk menjumlahkan success 
            *s += 1; 
        } else if(strcmp(buff, "WRONG") == 0){ // pointer untuk menjumlahkan wrong
            *w += 1;
        } else if(strcmp(buff, "ERROR") == 0){ // pointer untuk menjumlahkan error 
            *e += 1;
        }else{

        }
    }
}

// fungsi untuk print nilai di main 
void printNilai(int *s, int *e, int *w){
    printf("REKAPAN NILAI\n");
    printf("SUCCESS : %d\n", *s);
    printf("WRONG   : %d\n", *w);
    printf("ERROR   : %d\n", *e);
}


int main()
{
    FILE *nilai = fopen("coba.txt", "r"); // open file coba
    int sukses = 0, error = 0, wrong = 0; // inisialisasi awal jumlah sukses, eror, dan warning 
    int *s = &sukses;
    int *e = &error;
    int *w = &wrong;

    rekapNilai(nilai, s, e, w);

    fclose(nilai);
    printNilai(s,e,w);


}
