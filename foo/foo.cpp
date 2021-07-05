#include <stdio.h>

struct CFoo {
	CFoo() { printf( "CFoo constructed\n" ); } 
	~CFoo() { printf( "CFoo destructed\n" ); }
};

struct CBaz {
	CBaz() { printf( "CBaz constructed\n" ); } 
	~CBaz() { printf( "CBaz destructed\n" ); }
};

CBaz baz;

__attribute__((constructor)) void ctor()
{
	static CFoo foo;
	printf( "dll constructor\n" );
}

__attribute__((destructor)) void dtor()
{
	printf( "dll destructor\n" );
}

void foo()
{
	printf( "foo\n" );
}
