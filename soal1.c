/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 2 - Data Manipulation and External Files
 *   Hari dan Tanggal    : Senin, 20 April 2026
 *   Nama (NIM)          : Fayyadh Ramadhan (13224077)
 *   Nama File           : soal1.c
 *   Deskripsi           : 
 * 
 */

#include <stdio.h>

int main()
{
    int N, i, bAtas=0, bBawah=0, j, k;

    scanf("%d", &N);

    int storage[N], sum[N], maks=0;

    for(i=0;i<N;i++)
    {
        scanf(" %d", &storage[i]);
    }

    for(i=0;i<N;i++)
    {
        if (storage[i]==-1 && i==0)
        {
            storage[i] = storage[i+1];
        }
        else if(storage[i]==-1 && i==(N-1))
        {
            storage[i] = storage[i-1];
        }
        else if(storage[i]==-1)
        {
            j = i-1;
            k = i+1;

            while(j!=-1)
            {
                if(storage[j]!=-1)
                {
                    bBawah = storage[j];
                    break;
                }
                j-=1;
            }

            while(k!=N)
            {
                if(storage[k]!=-1)
                {
                    bAtas = storage[k];
                    break;
                }
                k+=1;
            }

            storage[i] = (bAtas+bBawah)/2;
        }
    }

    // for(i=0;i<N;i++)
    // {
    //     printf("storage-%d = %d\n",i ,storage[i]);
    // }

    // for(i=N-1;i<0;i--)
    // {
    //     if(i==N && storage[i]==-1)
    //     {
    //         if(storage[i-1]==-1)
    //         {
    //             storage[i] = storage[i-2];
    //         }
    //         storage[i] = storage[i-1];
    //     }
    //     else if(i==0 && storage[i]==-1)
    //     {
    //         storage[i] = storage[i+1];
    //     }
        
    //     if(storage[i]==-1)
    //     {
    //         if(storage[i-1]!=-1 && storage[i+1]!=-1)
    //         {
    //             storage[i] = (storage[i+1] + storage[i-1]/2);
    //         }
    //         else if(storage[i-1]!=-1 && storage[i+1]==-1)
    //         {
    //             storage[i] = storage[i-1];
    //         }
    //         else if(storage[i-1]==-1 && storage[i+1]!=-1)
    //         {
    //             storage[i] = storage[i+1];
    //         }
    //     }
    // }

    // for(i=0;i<N;i++)
    // {
    //     sum[i]=0;

    //     if(i=0 && storage[i]>0)
    //     {
    //         sum[i] = storage[i];
    //     }
    //     else if(i=0 && storage[i]<0)
    //     {
    //         sum[i] = 0;
    //     }
    //     else if(i!=0)
    //     {
    //         if((sum[i-1]+storage[i]) > sum[i-1])
    //         {
    //             sum[i] = sum[i-1]+storage[i];
    //         }
    //         else
    //         {
    //             sum[i] = sum[i-1];
    //         }
    //     }
    // }

    // for(i=0;i<N;i++)
    // {
    //     sum[i]=0;

    //     if(i=0 && storage[i]>0)
    //     {
    //         sum[i] = storage[i];
    //     }
    //     else if(i=0 && storage[i]<0)
    //     {
    //         sum[i] = 0;
    //     }
    //     else if(i!=0)
    //     {
    //         if(storage[i]>0)
    //         {
    //             sum[i] = sum[i-1] + storage[i];
    //         }
    //         else if(storage[i]<0)
    //         {
    //             sum[i] = sum[i-1];
    //         }
    //     }
    // }
    if(storage[0]>0)
    {
        maks = storage[0];
    }
    else if(storage[0]<0)
    {
        maks = 0;
    }

    for(i=1;i<N;i++)
    {
        if(storage[i]>0)
        {
            maks = maks + storage[i];
        }
    }
    

    printf("RECOVERED");
    for(i=0;i<N;i++)
    {
        printf(" %d", storage[i]);
    }
    printf("\nMAX_SUM %d", maks);

    return 0;
}