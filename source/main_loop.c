#include <...>
#include <...>
#include <...>
#include <...>

void apply( uint8_t operation, char** arguments )
{
	switch( operation )
	{
		case 1:
			exit();
			break;
		case 2:
			table* Table = new_table( arguments );
			draw( Table );
			break;
		case 3:
			assign( arguments );
			draw(  );
			break;	
		case 4: 
			del( arguments );
			draw(   );
			break;
		case 5:
			done( arguments );
			draw(   );
			break;
		case 6:
			undone( arguments );
			draw(   );
			break;
		case 7:
			rename( arguments );
			draw(   );
			break;
	}
} 

void exec( uint8_t operation, char* exp )
{
	char arguments[ MAX_ARGS ][ MAX_ARG_LENGTH ];
	char* token = strtok( exp, " " );

	size_t i = 0;
	while( determine( token ) == ARG )
	{
		strcpy( arguments[ i ], token );
		token = strtok( NULL, " " );
		++i;
	}

	apply( operation, arguments );
{

uint8_t determine ( char* operation )
{
	for( i = 0; i < OP_SIZE; ++i )
	{
		if( strcmp( operation, oplist->name )
			return oplist->value;
		else return ARG;  
	}
}

void parse( char* command )
{
	char* exp = strtok( command, " " );
	uint8_t operation = determine ( exp );

	if( operation == ARG ) error();

	exp = strtok( NULL, " " );
	exec( operation, exp );
}

void sc_main()
{
	bool exit = false;

	while( !exit )
	{
		puts( "~> " );
		fgets( command, SIZE, stdin );
		parse( command );

		puts( "\n\n" );	
	}
}
