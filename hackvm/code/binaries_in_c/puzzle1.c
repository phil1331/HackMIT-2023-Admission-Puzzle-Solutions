#include "out.h"



void _main(void)

{
  main();
                    // WARNING: Subroutine does not return
  exit(0);
}



int scramble(int param_1)

{
  return ((uint)(param_1 * -0x3361d2af) >> 0x11 | param_1 * 0x16a88000) * 0x1b873593;
}



uint hash(byte *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint auStack_24 [3];
  
  pbVar4 = param_1;
  if (param_2 >> 2 != 0) {
    pbVar4 = param_1 + (param_2 & 0xfffffffc);
    do {
      memcpy(auStack_24,param_1,4);
      param_1 = param_1 + 4;
      uVar2 = scramble(auStack_24[0]);
      param_3 = ((uVar2 ^ param_3) << 0xd | (uVar2 ^ param_3) >> 0x13) * 5 + 0xe6546b64;
    } while (param_1 != pbVar4);
  }
  auStack_24[0] = 0;
  if ((param_2 & 3) != 0) {
    auStack_24[0] = 0;
    pbVar3 = pbVar4 + ((param_2 & 3) - 1);
    do {
      auStack_24[0] = auStack_24[0] << 8 | (uint)*pbVar3;
      bVar1 = pbVar3 != pbVar4;
      pbVar3 = pbVar3 + -1;
    } while (bVar1);
  }
  uVar2 = scramble(auStack_24[0]);
  uVar2 = param_2 ^ param_3 ^ uVar2;
  uVar2 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  return uVar2 >> 0x10 ^ uVar2;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long random(void)

{
  uint uVar1;
  uint *in_a0;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *in_a0;
  uVar3 = in_a0[1];
  uVar2 = in_a0[2];
  uVar4 = in_a0[3];
  *in_a0 = uVar2;
  in_a0[1] = uVar4;
  uVar1 = uVar5 << 0x17 ^ uVar5;
  uVar3 = (uVar5 >> 9 | uVar3 << 0x17) ^ uVar3;
  uVar1 = (uVar3 << 0xe | uVar1 >> 0x12) ^ (uVar4 << 0x1b | uVar2 >> 5) ^ uVar2 ^ uVar1;
  in_a0[2] = uVar1;
  in_a0[3] = uVar3 >> 0x12 ^ uVar4 >> 5 ^ uVar4 ^ uVar3;
  return uVar2 + uVar1;
}



void lose(void)

{
  puts("[\x1b[31m!\x1b[0m] sorry, login failed!");
                    // WARNING: Subroutine does not return
  exit(1);
}



int memcmp(void *__s1,void *__s2,size_t __n)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_30 = 0x7ce8d7c2;
  uStack_2c = 0xa9662f3;
  uStack_28 = 0xda48610b;
  uStack_24 = 0x2dc85cb;
  if (__n != 0) {
    pvVar4 = (void *)((int)__s1 + __n);
    do {
      lVar1 = random();
      uStack_34 = hash(__s1,1,lVar1);
      lVar1 = random();
      uVar2 = hash(&uStack_34,4,lVar1);
      uVar2 = uVar2 ^ uStack_34;
      uVar3 = random();
      uVar2 = uVar2 ^ uVar3;
      uVar3 = uVar2 * 0xe984385 >> 0xb;
      uVar2 = ((int)((ulonglong)uVar2 * 0xe984385 >> 0x20) << 0x15 | uVar3) >> 0x12 | uVar3 << 0xe;
                    // WARNING: Load size is inaccurate
      if (*__s2 != uVar2) {
        return uVar2 - *__s2;
      }
      __s1 = (void *)((int)__s1 + 1);
      __s2 = (void *)((int)__s2 + 4);
    } while (pvVar4 != __s1);
  }
  return 0;
}



void win(undefined4 param_1)

{
  puts("[\x1b[32m*\x1b[0m] logging in as user timthebeaver...");
  printf("[\x1b[31m$\x1b[0m] printing flag.txt: ");
  xxprint(ciphertext,0x50,param_1);
  puts("");
  puts("[\x1b[32m*\x1b[0m] thank you for playing...");
  return;
}



undefined4 main(void)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  char acStack_91 [137];
  
  puts("");
  puts("          .=\"   \"=._.---.");
  puts("        .\"         c \' Y\'`p                 welcome to the BEAVER");
  puts("       /   ,       `.  w_/             reduced instruction set computer");
  puts("   jgs |   \'-.   /     / ");
  puts(" _,..._|      )_-\\ \\_=.");
  puts("`-....-\'`------)))`=-\'\"`\'\"");
  puts("");
  puts(
      "[\x1b[32m*\x1b[0m] remember to submit the \x1b[1mflag\x1b[0m, not the passphrase on the command center!\x1b[0m"
      );
  printf("[\x1b[32m*\x1b[0m] please enter the passphrase: ");
  gets(acStack_91 + 1);
  sVar1 = strlen(acStack_91 + 1);
  acStack_91[sVar1] = '\0';
  sVar1 = strlen(acStack_91 + 1);
  if ((sVar1 == 0x2f) && (iVar2 = memcmp(acStack_91 + 1,password,0x2f), iVar2 == 0)) {
    win(acStack_91 + 1);
    return 0;
  }
  uVar3 = lose();
  ecall();
  return uVar3;
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
                pbVar3 = &UNK_80000dc4;
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



