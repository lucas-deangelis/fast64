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
    const char* in2 = "foobarfoobar2";
    char* out1 = malloc(20);
    char* out2 = malloc(20);
    size_t* outlen1 = 0;
    size_t* outlen2 = 0;
	p(in1);
	p(in2);
	p(out1);
	p(out2);
    base64_encode(in1, strlen(in1), out1, outlen1, 0);
    base64_encode(in2, strlen(in2), out2, outlen2, 0);
	puts("finished encoding");
	printf("%ln\n", outlen1);
	printf("%ln\n", outlen2);
	p(in1);
	p(in2);
	s(out1, *outlen1);
	s(out2, *outlen2);
}