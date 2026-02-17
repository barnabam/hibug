#include <stdio.h>

// clang hi.c -o bug

void print_version() {
    #ifdef __STDC_VERSION__
        char* c_version;
        switch (__STDC_VERSION__) {
            case 199409:
                c_version = "C94";
                break;
            case 199901:
                c_version = "C99";
                break;
            case 201112:
                c_version = "C11";
                break;
            case 201710:
                c_version = "C17";
                break;
            case 202311L:
                c_version = "C23";
                break;
            default:
                c_version = "??";
                break;
        }
        printf ("C version: (%s) (%ld)", c_version, __STDC_VERSION__);
    #else
        printf ("C(89), C(90)");
    #endif

    #ifdef __STRICT_ANSI__
        printf (" (ANSI %d)\n", __STDC__);
    #else
        printf("\n");
    #endif
    return;
}

int main(int argc, char *argv[]) {
  print_version();
  printf("hi bug!\n");
}

