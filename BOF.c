#include <stdio.h>
#include <string.h>


void xplBOF(char *input);

int main(int argc, char *argv[])

{

if(argc>1)

xplBOF(argv[1]);

}

void xplBOF(char*input)

{

char buffer[256];

strcpy(buffer, input);

}
