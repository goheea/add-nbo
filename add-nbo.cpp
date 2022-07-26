#include <stdio.h>
#include <netinet/in.h>

int main(int argc, char* argv[]) {
	uint32_t a;
	uint32_t b;
	
	FILE* fp1 = fopen(argv[1], "rb");
	FILE* fp2 = fopen(argv[2], "rb");
	
	fread(&a,1,4,fp1);
	fread(&b,1,4,fp2);
	
	uint32_t c = ntohl(a);
	uint32_t d = ntohl(b);
	uint32_t result = c+d;
	
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)",c,c,d,d,result,result);
	return 0;
}
