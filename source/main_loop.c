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
			// create_table(); draw( table );
		case 3:
			// assign(); draw( table );
		case 4: 
			// del_node(); draw( table );
		case 5:
			// del_table(); draw( table );
		case 6:
			// done(); draw( table );
		case 7:
			// undone(); draw( table );
		case 8:
			// rename_node(); draw( table );
		case 9:
			// rename_table(); draw( table );
		case 10:
			// 
	}
} 

void exec( uint8_t operation, char* exp )
{
	char arguments[ MAX_ARGS ][ MAX_ARG_LENGTH ];

	if( !( operation == ARG ) ) error();
	else
	{
		char* token = strtok( exp, " " );
		while( determine( token ) == ARG )
		{
			strcpy( arguments[ i ], token );
			token = strtok( NULL, " " );
		}
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

	if( operation == ARG ) skip();

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
