//file3.c
#include <stdio.h>
#include <stdlib.h>
#include "file3.h"
#include "file1.h"
#include "file4.h"
int file3_function(){
	printf("This is file3_function()\n");
	file1_function();
	file4_function();
	return 0;
}
