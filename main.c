#include <stdio.h>

int main() {
    int main(int argc, char* argv[])
    {
        int i;

        for (i = 0; i < argc; i++)
            printf("argv[%i]: %s\n", i, argv[i]);

        return 0;
    }
    return 0;
}
