/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 2 - Data Manipulation and External Files
 *   Hari dan Tanggal    : Senin, 20 April 2026
 *   Nama (NIM)          : Fayyadh Ramadhan (13224077)
 *   Nama File           : soal1.c
 *   Deskripsi           : Menerima input 5 angka integer, mengalikan ke 5 angka tersebut lalu dikeluarkan sebagai Output.
 * 
 */

#include <stdio.h>

void simpanInput(int *input)
{
    printf("Masukkan Angka:\n");

    for(int i=0;i<5;i++)
    {
        scanf("%d", &input[i]);
    }
}

void kaliInput(int *hasil, int *input)
{
    int i;
    for(int i=0;i<5;i++)
    {
        (*hasil) *= input[i];
    }
}

int main()
{
    int input[5], hasil=1;

    simpanInput(input);
    kaliInput(&hasil, input);

    printf("Hasil Perkaliannya adalah %d", hasil);
}