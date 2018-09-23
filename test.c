//===========================================================================
/**
	@file 
	@brief  test program
	@author hahi
	@date   2018-09-23 create
	@note    
*/
//===========================================================================
#include <stdio.h>

int main( int argc, char* argv[] ){
  int i;
  for( i=0; i<argc; i++){
    printf("%d:%s\n",i,argv[i]);
  }
}
