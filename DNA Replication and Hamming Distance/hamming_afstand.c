#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( )
{
	char string1[ 100 ], string2[ 100 ];
	int count = 0;
	printf( "Geef een DNA streng op:\n" );
	fgets( string1, 100, stdin );
	printf( "Geef een DNA streng op: \n" );
	fgets( string2, 100, stdin );

	if ( strlen( string1 ) != strlen( string2 ) )
	{
		printf( "De lengtes moeten hetzelfde zijn." );
		return 0;
	}

	int* indices = malloc( sizeof( int ) * strlen( string1 ) );

	for ( size_t i = 0; i < strlen( string1 ); i++ )
	{
		indices[ i ] = false;
	}

	// Hamming afstand berekenen.
	for ( int i = 0; string1[ i ] != 0; i++ )
	{
		if ( string1[ i ] != string2[ i ] )
		{
			indices[ i ] = true;
			count++;
		}
	}


	printf( "De hamming afstand is:  %d\n", count );
	printf( "Het verschil: \n" );
	printf( "%s%s", string1, string2 );

	for ( size_t i = 0; i < strlen( string1 ); i++ )
	{
		if ( indices[ i ] )
		{
			printf( "^" );
		}
		else
		{
			printf( " " );
		}
	}

	return 0;
}
