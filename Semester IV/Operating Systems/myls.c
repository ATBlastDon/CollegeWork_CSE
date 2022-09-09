#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<dirent.h>

int main(int argc, char * argv[])

{

  DIR * dp;
  struct dirent * sd;
  dp = opendir(argv[1]);

  while ((sd = readdir(dp)) != NULL) {
    printf("%s\t", sd -> d_name);
  }

  closedir(dp);


}