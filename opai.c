#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

void main()
{
  struct stat theStat;
  FILE *fp;

  fp = fopen("opai.txt", "w");

  if (fp)
  {
    int fsize = 0;
    int mb = 1024 * 1024; // 1MB

    for (fsize; fsize < mb; fsize = theStat.st_size)
    {
      stat("opai.txt", &theStat);
      fprintf(fp, "おっぱい"); // おっぱい is paiotsu
    }

    fclose(fp);
  }
}
