/*
 * Print the supplementary group IDs of
 * the calling process.
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main( void ) {
    int     gidsize;
    gid_t   *grouplist;
    int     i;

    gidsize = getgroups( 0, NULL );
    grouplist = malloc( gidsize * sizeof( gid_t ) );
    getgroups( gidsize, grouplist );
    for ( i = 0; i < gidsize; i++ ) {
        printf( "%d\n", ( int ) grouplist[i] );
    }
    return EXIT_SUCCESS;
}
