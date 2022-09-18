#include <stddef.h>	/* size_t */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

void base64_encode
	( const char		*src
	, size_t		 srclen
	, char			*out
	, size_t		*outlen
	, int			 flags
	) ;

int base64_decode
	( const char		*src
	, size_t		 srclen
	, char			*out
	, size_t		*outlen
	, int			 flags
	) ;

void s(const char* s, size_t len) {
	write(1, s, (int)len);
	puts("");
}

void p(const char* s) {
	write(1, s, strlen(s));
	puts("");
}

int main() {
    const char* in1 = "foobarfoobar";
    char* out1 = malloc(20);
    size_t outlen1 = 0;
    base64_encode(in1, sizeof(in1) - 1, out1, &outlen1, 0);
}