#include <stdio.h>

#include <stdlib.h>



FILE *f;

int i;

int avarage;

int no;



int main()

{

    f = fopen( "C:\\Users\\John\\Desktop\\fisiere\\ex7.txt" , "w" );



    if( f == NULL )

    {

        printf( "Error" );

        return 0;

    }



    for( i = 0 ; i < 1000 ; i++ )

    {

        fprintf( f , "%d \n" , rand() % 200 );

    }



    fclose(f);

    f = fopen( "C:\\Users\\John\\Desktop\\fisiere\\ex7.txt" , "r" );



    int sum = 0;



    for( i = 0 ; i < 1000 ; i++ )

    {

        fscanf( f , "%d" , &no );

        sum += no;

    }



    fclose(f);

    f = fopen( "C:\\Users\\John\\Desktop\\fisiere\\ex7.txt" , "r" );



    avarage = sum / 1000;

    int contor = 0;



    while( feof(f) == 0 )

    {

        fscanf( f , "%d " , &no );

        if( no > avarage )

            contor++;

    }



    printf( "\n%d\n" , contor );



    fclose(f);

    return 0;

}
