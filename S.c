/* File S.c - server procedures for the FileReadWrite service */
#include <stdio.h>
#include <rpc/rpc.h>
#include"FileReadWrite.h"
void * write_2(writeargs *a)
{
 /* do the writing to the file */
}
Data * read_2(readargs * a)
{
static Data result; /* must be static */
result.buffer = ... /* do the reading from the file */
result.length = ... /* amount read from the file */
return &result;
}
