#include <sys/syscall.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <spawn.h>

int main(int argc, const char *argv[]) {
    // argv is an array of pointers to strings passed to the new program
    // as its command-line arguments.  By convention, the first of these
    // strings (i.e., argv[0]) should contain the filename associated
    // with the file being executed.  The argv array must be terminated
    // by a NULL pointer.  (Thus, in the new program, argv[argc] will be
    // NULL.)
    printf("Replace current process with /bin/getpid\n");
    char *newargv[] = { "getpid", NULL};
    execve("/bin/getpid", newargv, NULL);
}