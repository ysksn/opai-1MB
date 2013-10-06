#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

void main()
{
  struct stat theStat;
  FILE *fp;

  if (fp = fopen("opai.txt", "w"))
  {
    int fsize;
    int count;
    const int ONE_MB = 1024 * 1024; // 1MB

    for (fsize = 0, count = 0; fsize < ONE_MB; fsize = theStat.st_size)
    {
      stat("opai.txt", &theStat);
      fprintf(fp, "おっぱい"); // おっぱい is paiotsu
      count++;
    }

    fclose(fp);
    printf("%d-おっぱい are about 1MB.\n", count);
  }
}
