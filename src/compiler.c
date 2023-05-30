#include <stdio.h>

#include "common.h"
#include "compiler.h"
#include "scanner.h"

void compile(const char* source) {
    initScanner(source);
    // temp
    int line = -1;
    for (;;) {
        Token token = scanToken();
        if (token.line != line) {
            printf("%4d ", token.line);
            line = token.line;
        } else {
            printf("   | ");
        }
        //printf("%s (%2d) '%.*s'\n", getTokenType(token.type), token.type, token.length, token.start);
        printf("%s '%.*s'\n", getTokenType(token.type), token.length, token.start);

        if (token.type == TOKEN_EOF) break;
    }
}