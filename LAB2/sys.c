#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<sys/utsname.h>
/*
ustname is a structure which maintians the following information about the system

  struct utsname {
               char sysname[];      //Operating system name (e.g., "Linux") 
               char nodename[];    //Name within "some implementation-definednetwork" 
               char release[];    //Operating system release (e.g., "2.6.28") 
               char version[];   //Operating system version 
               char machine[];  //Hardware identifier 
           #ifdef _GNU_SOURCE
               char domainname[]; // NIS or YP domain name 
           #endif
           };
*/

int main()
{
    struct utsname buf1;
    errno =0;
    if(uname(&buf1)!=0)
    {
	    perror("uname doesn't return 0, so there is an error");
	    exit(EXIT_FAILURE);
    }
    printf("System Name = %s\n", buf1.sysname);
    printf("Node Name = %s\n", buf1.nodename);
    printf("Version = %s\n", buf1.version);
    printf("Release = %s\n", buf1.release);
    printf("Machine = %s\n", buf1.machine);
}
