





						close(s);
						close(s);
						exit(0);
						exit(0);
						printf("\nMessage Sending Failed");
						printf("\nMessage Sending Failed");
					if(sntb==-1)
					if(sntb==-1)
					recb=recv(s,buff,sizeof(buff),0);
					{
					{
					}
					}
				buff[i+2]=str1[i];
				buff[i+2]=str1[i];
				buff[i]=str2[j];
				i++;
			break;
			break;
			break;
			break;
			buff[1]=n;
			buff[1]=n;
			buff[1]=n;
			buff[i+2]='\0';
			buff[i+2]='\0';
			buff[i]='\0';
			case 1:printf("\nEnter string to be searched: ");
			case 2:printf("\nEnter string to be searched and replaced: ");
			case 3:sntb=send(s,buff,sizeof(buff),0);
			case 4:sntb=send(s,buff,sizeof(buff),0);
			close(s);
			close(s);
			close(s);
			close(s);
			close(s);
			close(s);
			default:
			exit(0);
			exit(0);
			exit(0);
			exit(0);
			exit(0);
			exit(0);
			for(i=0;i<n;i++)
			for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			i=2;
			if(recb==-1)
			if(recb==-1)
			if(recb==-1)
			if(sntb==-1)
			if(sntb==-1)
			if(sntb==-1)
			n=buff[0];
			n=strlen(str1);
			n=strlen(str1);
			n=strlen(str2);
			printf("%s\n",buff);
			printf("%s\n",buff);
			printf("\n Try Again!\n");
			printf("\nEnter new string: ");
			printf("\nMessage Recieving Failed");
			printf("\nMessage Recieving Failed");
			printf("\nMessage Recieving Failed");
			printf("\nMessage Sending Failed");
			printf("\nMessage Sending Failed");
			printf("\nMessage Sending Failed");
			printf("\nWord found %d number of times!\n",n);
			recb=recv(s,buff,sizeof(buff),0);
			recb=recv(s,buff,sizeof(buff),0);
			scanf("%s",str1);
			scanf("%s",str1);
			scanf("%s",str2);
			sntb=send(s,buff,sizeof(buff),0);
			sntb=send(s,buff,sizeof(buff),0);
			sntb=send(s,buff,sizeof(buff),0);
			{
			{
			{
			{
			{
			{
			{
			}
			}
			}
			}
			}
			}
			}
		buff[0]=ch;
		char str1[50],str2[50];
		close(s);
		close(s);
		close(s);
		exit(0);
		exit(0);
		exit(0);
		exit(0);
		exit(0);
		int n,i,j;
		printf("\n1.Search\n2.Replace\n3.Reorder\n4.Exit\nEnter your choice: ");
		printf("\nConnection error.");
		printf("\nMessage Recieving Failed");
		printf("\nMessage Sending Failed");
		printf("\nSocket creation error.");
		scanf("%d",&ch);
		switch(ch)
		{
		}
	char buff[50];
	close(s);
	if(r==-1)
	if(recb==-1)
	if(s==-1)
	if(sntb==-1)
	if(strcmp(buff,"File does not exist!")==0)
	int ch=0;
	int s,r,recb,sntb,x;
	printf("%s", buff);
	printf("INPUT port number: ");
	printf("Type File Name: ");
	printf("\n");
	printf("\nSocket connected.");
	printf("\nSocket created.");
	printf("\n\n");
	printf("\n\n");
	r=connect(s,(struct sockaddr*)&server,sizeof(server));
	recb=recv(s,buff,sizeof(buff),0);
	s=socket(AF_INET,SOCK_STREAM,0);
	scanf("%d", &x);
	scanf("%s", buff);
	server.sin_addr.s_addr=inet_addr("127.0.0.1");
	server.sin_family=AF_INET;
	server.sin_port=htons(x);
	sntb=send(s,buff,sizeof(buff),0);
	struct sockaddr_in server;
	while(ch!=4)
	{
	{
	{
	{
	{
	{
	}
	}
	}
	}
	}
	}
#include<arpa/inet.h>
#include<fcntl.h>
#include<netinet/in.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
}
