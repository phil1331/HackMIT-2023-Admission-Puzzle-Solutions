#include "out.h"



void _main(void)

{
  main();
                    // WARNING: Subroutine does not return
  exit(0);
}



void win(undefined4 param_1)

{
  puts("[\x1b[32m*\x1b[0m] drats, i guess i owe you a flag now!");
  printf("[\x1b[32m*\x1b[0m] here is the flag: ");
  xxprint(ciphertext,0x50,param_1);
  puts("");
  puts("[\x1b[32m*\x1b[0m] also have a beaver for your troubles: ");
  puts(
      "\n                   |    :|\n                   |     |\n                   |    .|\n               ____|    .|\n             .\' .  ).   ,\'\n           .\' c   \'7 ) (\n       _.-\"       |.\'   `.\n     .\'           \"8E   :|\n     |          _}\"\"    :|\n     |         (   |     |\n    .\'         )   |    :|\n.odCG8o_.---.__8E  |    .|    \n`Y8MMP\"\"       \"\"  `-...-\'   cgmm\n"
      );
  return;
}



undefined4 main(void)

{
  size_t sVar1;
  char acStack_91 [141];
  
  puts(&DAT_80000928);
  puts("~ the state-of-the-art passphrase checker powered by AI and beavers (i think?) ~");
  puts("  we use machine learning models or something to update the program as it executes ");
  puts("");
  puts(
      "[\x1b[32m*\x1b[0m] remember to submit the \x1b[1mflag\x1b[0m, not the passphrase on the command center!\x1b[0m"
      );
  printf("[\x1b[32m*\x1b[0m] enter passphrase: ");
  gets(acStack_91 + 1);
  sVar1 = strlen(acStack_91 + 1);
  acStack_91[sVar1] = '\0';
  sVar1 = strlen(acStack_91 + 1);
  if (sVar1 == 0x40) {
    (*(code *)code)(acStack_91 + 1,0x80000ea4);
    win(acStack_91 + 1);
    return 0;
  }
                    // WARNING: Subroutine does not return
  exit(1);
}



ssize_t _x(int __fd,void *__buf,size_t __nbytes)

{
  ecall();
  return __fd;
}



ssize_t write(int __fd,void *__buf,size_t __n)

{
  ecall();
  return __fd;
}



void exit(int __status)

{
  ecall();
  return;
}



void xxprint(void)

{
  ecall();
  return;
}



int putc(int __c,FILE *__stream)

{
  ssize_t sVar1;
  undefined auStack_11 [13];
  
  auStack_11[0] = SUB41(__stream,0);
  sVar1 = write(__c,auStack_11,1);
  return sVar1;
}



void printint(int param_1,uint param_2,uint param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char acStack_20 [16];
  
  if ((param_4 == 0) || (-1 < (int)param_2)) {
    bVar2 = false;
  }
  else {
    param_2 = -param_2;
    bVar2 = true;
  }
  iVar5 = 0;
  do {
    iVar4 = iVar5;
    iVar5 = iVar4 + 1;
    acStack_20[iVar4] = "0123456789ABCDEF"[param_2 % param_3];
    bVar1 = param_3 <= param_2;
    param_2 = param_2 / param_3;
  } while (bVar1);
  if (bVar2) {
    acStack_20[iVar4 + 1] = '-';
    iVar5 = iVar4 + 2;
  }
  if (0 < iVar5) {
    pcVar3 = acStack_20 + iVar5;
    do {
      putc(param_1,(FILE *)(uint)(byte)pcVar3[-1]);
      pcVar3 = pcVar3 + -1;
    } while (pcVar3 != acStack_20);
  }
  return;
}



void printptr(int param_1,uint param_2)

{
  int iVar1;
  
  putc(param_1,(FILE *)0x30);
  putc(param_1,(FILE *)0x78);
  iVar1 = 8;
  do {
    putc(param_1,(FILE *)(uint)(byte)"0123456789ABCDEF"[param_2 >> 0x1c]);
    param_2 = param_2 << 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



size_t strlen(char *__s)

{
  size_t sVar1;
  
  if (*__s != '\0') {
    sVar1 = 0;
    do {
      sVar1 = sVar1 + 1;
    } while (__s[sVar1] != '\0');
    return sVar1;
  }
  return 0;
}



char * gets(char *__s)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  int in_a1;
  char acStack_21 [5];
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    if (((in_a1 <= iVar2) || (sVar3 = _x(0,acStack_21,1), sVar3 < 1)) ||
       (__s[iVar1] = acStack_21[0], iVar1 = iVar2, acStack_21[0] == '\n')) break;
  } while (acStack_21[0] != '\r');
  __s[iVar1] = '\0';
  return __s;
}



void * memcpy(void *__dest,void *__src,size_t __n)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (__dest < __src) {
    if (__n != 0) {
      puVar1 = (undefined *)__dest;
      do {
        puVar2 = puVar1 + 1;
                    // WARNING: Load size is inaccurate
        *puVar1 = *__src;
        __src = (undefined *)((int)__src + 1);
        puVar1 = puVar2;
      } while (puVar2 != (undefined *)((int)__dest + __n));
      return __dest;
    }
  }
  else {
    puVar2 = (undefined *)((int)__dest + __n);
    puVar1 = (undefined *)((int)__src + __n);
    if (__n != 0) {
      do {
        puVar1 = puVar1 + -1;
        puVar2 = puVar2 + -1;
        *puVar2 = *puVar1;
      } while ((undefined *)__dest != puVar2);
    }
  }
  return __dest;
}



int vprintf(char *__format,__gnuc_va_list __arg)

{
  byte *pbVar1;
  FILE *pFVar2;
  byte *pbVar3;
  char *pcVar4;
  byte **in_a2;
  int iVar5;
  int iVar6;
  
                    // WARNING: Load size is inaccurate
  pFVar2 = (FILE *)(uint)*__arg;
  pcVar4 = __format;
  if (pFVar2 != (FILE *)0x0) {
    pbVar1 = (byte *)((int)__arg + 1);
    iVar6 = 0;
    do {
      if (iVar6 == 0) {
        iVar5 = 0x25;
        if (pFVar2 != (FILE *)0x25) {
          pcVar4 = (char *)putc((int)__format,pFVar2);
          iVar5 = iVar6;
        }
      }
      else {
        iVar5 = iVar6;
        if (iVar6 == 0x25) {
          if (pFVar2 == (FILE *)0x25) {
            pcVar4 = (char *)putc((int)__format,(FILE *)0x25);
            iVar5 = 0;
          }
          else {
            switch((uint)((int)&pFVar2[-1]._markers + 1) & 0xff) {
            case 0:
              pcVar4 = (char *)putc((int)__format,(FILE *)(uint)*(byte *)in_a2);
              iVar5 = 0;
              in_a2 = in_a2 + 1;
              break;
            case 1:
              pcVar4 = (char *)printint(__format,*in_a2,10,1);
              iVar5 = 0;
              in_a2 = in_a2 + 1;
              break;
            default:
              putc((int)__format,(FILE *)0x25);
              pcVar4 = (char *)putc((int)__format,pFVar2);
              iVar5 = 0;
              break;
            case 9:
              pcVar4 = (char *)printint(__format,*in_a2,10,0);
              iVar5 = 0;
              in_a2 = in_a2 + 1;
              break;
            case 0xd:
              pcVar4 = (char *)printptr(__format,*in_a2);
              iVar5 = 0;
              in_a2 = in_a2 + 1;
              break;
            case 0x10:
              pbVar3 = *in_a2;
              if (pbVar3 == (byte *)0x0) {
                pbVar3 = &UNK_80000ddc;
                pFVar2 = (FILE *)0x28;
              }
              else {
                pFVar2 = (FILE *)(uint)*pbVar3;
                if (pFVar2 == (FILE *)0x0) {
                  iVar5 = 0;
                  in_a2 = in_a2 + 1;
                  break;
                }
              }
              do {
                pcVar4 = (char *)putc((int)__format,pFVar2);
                pbVar3 = pbVar3 + 1;
                pFVar2 = (FILE *)(uint)*pbVar3;
              } while (pFVar2 != (FILE *)0x0);
              iVar5 = 0;
              in_a2 = in_a2 + 1;
              break;
            case 0x15:
              pcVar4 = (char *)printint(__format,*in_a2,0x10,0);
              iVar5 = 0;
              in_a2 = in_a2 + 1;
            }
          }
        }
      }
      pFVar2 = (FILE *)(uint)*pbVar1;
      pbVar1 = pbVar1 + 1;
      iVar6 = iVar5;
    } while (pFVar2 != (FILE *)0x0);
  }
  return (int)pcVar4;
}



int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = vprintf((char *)__stream,__format);
  return iVar1;
}



int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = vprintf((char *)0x1,__format);
  return iVar1;
}



int puts(char *__s)

{
  size_t __n;
  int iVar1;
  
  __n = strlen(__s);
  write(1,__s,__n);
  iVar1 = putc(1,(FILE *)0xa);
  return iVar1;
}



