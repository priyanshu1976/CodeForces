// create_and_verify.c
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>

int main() {
    char cwd[1024];

    // Create directory
    if (mkdir("test_dir", 0755) == -1) {
        perror("mkdir");
        exit(1);
    }
    printf("Directory 'test_dir' created.\n");

    // Change working directory
    if (chdir("test_dir") == -1) {
        perror("chdir");
        exit(1);
    }
    printf("Changed to 'test_dir'.\n");

    // Verify with getcwd
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Current directory: %s\n", cwd);
    } else {
        perror("getcwd");
        exit(1);
    }

    return 0;
}
