#include <unistd.h>

#define OFFSET 10

// Minus to encode
char encode(char c) {
    char encoded;

    encoded = c - 10;

    return encoded;
}

int main(int argc, char** argv) {
    if (argc < 2) return 1;

    int i = 0;
    char* encoded = argv[1];

    while (encoded[i]) {
        write(1, &encoded[i], 1);
        ++i;
    }
    write(1, "\n", 1);
}
