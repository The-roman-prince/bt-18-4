#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <unistd.h>

int main()
{
    int client = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    addr.sin_port = htons(9000);

    int ret = connect(client, (struct sockaddr *)&addr, sizeof(addr));
    if (ret == -1)
    {
        perror("connect() failed");
        return 1;
    }
char computer[64];
char disk[2];
short int disklength, numberdisk;
char buf[256];


    while (1)
    {
          printf("Nhap ten may tinh.\n");
          scanf("%s", computer);


        if (strncmp(computer, "0000", 4) == 0)
            break;

        
    }
    
    
    close(client);
}