#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    // Fork() System Call :-
    fork();
    fork() && fork() || fork();
    fork();
    printf("Hello\n");
    // // Getpid() and Getppid() System Call :-
    pid_t process_id = getpid();
    pid_t p_process_id = getppid();
    printf("The process id: %d\n", process_id);
    printf("The process id of parent function: %d\n", p_process_id);
    // // Exec() System Call :-
    char *binaryPath = "/bin/ls";
    char *arg1 = "-lh";
    char *arg2 = "/home";
    execl(binaryPath, binaryPath, arg1, arg2, NULL);
    return 0;
}
