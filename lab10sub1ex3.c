#include <stdio.h>

#include <stdlib.h>



FILE *f;

int LineCounter( FILE *f );



int main()

{

    f = fopen( "C:\\Users\\John\\Desktop\\fisiere\\ex3.txt" , "r" );

    if( f == NULL )

    {

        printf("Error!");

        return 0;

    }



    printf( "\n%d\n" , LineCounter( f ) );



    fclose(f);

    return 0;

}



int LineCounter( FILE *f )

{

    char c;

    int contor = 1;



    while( feof( f ) == 0 )

    {

        c = fgetc( f );



        if( c == 10 )

            contor++;



    }



    return contor;

}
