#include <stdio.h>

struct CBar {
	CBar() { printf( "CBar constructed\n" ); } 
	~CBar() { printf( "CBar destructed\n" ); }
};

CBar bar;

