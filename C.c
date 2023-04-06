/* File : C.c - Simple client of the FileReadWrite service. */
#include <stdio.h>
#include <rpc/rpc.h>
#include "FileReadWrite .h"
main(int argc, char ** argv)
{
CLIENT *clientHandle;
char *serverName = "coffee";
readargs a;
Data *data;
clientHandle= clnt_create(serverName, FILEREADWRITE,
VERSION, "udp"); /* creates socket and a client handle*/
if (clientHandle==NULL){
 clnt_pcreateerror(serverName); /* unable to contact server */
exit(1);
}
a.f = 10;
a.position = 100;
a.length = 1000;
data = read_2(&a, clientHandle);/* call to remote read procedure */
•••
clnt_destroy(clientHandle); /* closes socket */
}
