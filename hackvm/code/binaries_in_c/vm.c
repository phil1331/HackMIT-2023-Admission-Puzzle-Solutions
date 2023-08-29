#include "out.h"



int _init(EVP_PKEY_CTX *ctx)

{
  int in_EAX;
  
  return in_EAX;
}



void exit(int __status)

{
  undefined auStack_18 [12];
  int local_c;
  
  local_c = __status;
  __funcs_on_exit();
  __libc_exit_fini();
  __stdio_exit_needed();
  _Exit(local_c);
  _start_c(auStack_18,0);
  return;
}



void processEntry entry(void)

{
  _start_c();
  return;
}



void _start_c(undefined4 *param_1)

{
  __libc_start_main(main,*param_1,param_1 + 2,_init,_fini,0);
  return;
}



// WARNING: Removing unreachable block (ram,0x00401083)
// WARNING: Removing unreachable block (ram,0x0040108f)

void FUN_00401070(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x004010c4)
// WARNING: Removing unreachable block (ram,0x004010d0)

void FUN_004010a0(void)

{
  return;
}



void FUN_004010e0(void)

{
  if (DAT_0040b320 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  FUN_00401070();
  DAT_0040b320 = 1;
  return;
}



void thunk_FUN_004010a0(void)

{
  FUN_004010a0();
  return;
}



void FUN_00401139(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  
  pbVar1 = param_2 + 0x20;
  pbVar7 = param_1;
  do {
    *pbVar7 = *param_2;
    pbVar7[1] = param_2[1];
    pbVar7[2] = param_2[2];
    pbVar7[3] = param_2[3];
    param_2 = param_2 + 4;
    pbVar7 = pbVar7 + 4;
  } while (param_2 != pbVar1);
  uVar8 = 8;
  do {
    bVar4 = param_1[0x1c];
    bVar5 = param_1[0x1d];
    bVar2 = param_1[0x1e];
    bVar3 = param_1[0x1f];
    if ((uVar8 & 7) == 0) {
      uVar6 = (ulong)bVar5;
      bVar5 = (&DAT_00408300)[bVar2];
      bVar2 = (&DAT_00408300)[bVar3];
      bVar3 = (&DAT_00408300)[bVar4];
      bVar4 = (&DAT_00408300)[uVar6] ^ (&DAT_004082f0)[uVar8 >> 3];
    }
    else if ((uVar8 & 7) == 4) {
      bVar4 = (&DAT_00408300)[bVar4];
      bVar5 = (&DAT_00408300)[bVar5];
      bVar2 = (&DAT_00408300)[bVar2];
      bVar3 = (&DAT_00408300)[bVar3];
    }
    param_1[0x20] = bVar4 ^ *param_1;
    param_1[0x21] = bVar5 ^ param_1[1];
    param_1[0x22] = bVar2 ^ param_1[2];
    param_1[0x23] = bVar3 ^ param_1[3];
    uVar8 = uVar8 + 1;
    param_1 = param_1 + 4;
  } while (uVar8 != 0x3c);
  return;
}



void FUN_00401221(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  param_3 = param_3 + (ulong)((uint)(param_1 << 4) & 0xff0);
  lVar1 = param_2 + 0x10;
  do {
    lVar2 = 0;
    do {
      *(byte *)(param_2 + lVar2) = *(byte *)(param_2 + lVar2) ^ *(byte *)(param_3 + lVar2);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 4);
    param_2 = param_2 + 4;
    param_3 = param_3 + 4;
  } while (param_2 != lVar1);
  return;
}



void FUN_0040125a(void)

{
  ulong uVar1;
  
  if (DAT_0040b340 != '\0') {
    DAT_0040b341 = '\x01';
    uVar1 = 0;
    do {
      if (DAT_0040b341 != '\0') {
        fprintf((FILE *)__stderr_FILE,"[\x1b[32m+\x1b[0m] x%d=0x%08x\n",uVar1 & 0xffffffff,
                (ulong)*(uint *)(ctx + uVar1 * 4 + 4));
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x20);
    DAT_0040b341 = 0;
    return;
  }
  return;
}



void FUN_004012cf(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_138 [66];
  
  puVar9 = local_138;
  puVar7 = puVar9;
  do {
    *puVar7 = (uint)*param_2 << 0x18 | (uint)param_2[1] << 0x10 | (uint)param_2[3] |
              (uint)param_2[2] << 8;
    param_2 = param_2 + 4;
    puVar7 = puVar7 + 1;
  } while (puVar7 != local_138 + 0x10);
  do {
    uVar1 = puVar9[0xe];
    uVar2 = puVar9[1];
    puVar9[0x10] = ((uVar1 << 0xf | uVar1 >> 0x11) ^ (uVar1 << 0xd | uVar1 >> 0x13) ^ uVar1 >> 10) +
                   *puVar9 + puVar9[9] +
                   ((uVar2 >> 7 | uVar2 << 0x19) ^ (uVar2 << 0xe | uVar2 >> 0x12) ^ uVar2 >> 3);
    puVar9 = puVar9 + 1;
  } while (puVar9 != local_138 + 0x30);
  lVar12 = 0;
  uVar2 = *(uint *)(param_1 + 0x58);
  uVar10 = *(uint *)(param_1 + 0x5c);
  uVar1 = *(uint *)(param_1 + 0x60);
  uVar6 = *(uint *)(param_1 + 100);
  uVar16 = *(uint *)(param_1 + 0x68);
  uVar8 = *(uint *)(param_1 + 0x6c);
  uVar3 = *(uint *)(param_1 + 0x54);
  uVar5 = *(uint *)(param_1 + 0x50);
  do {
    uVar11 = uVar5;
    uVar14 = uVar3;
    uVar15 = uVar16;
    uVar16 = uVar6;
    uVar6 = uVar1;
    uVar13 = uVar2;
    iVar4 = ((uVar6 >> 6 | uVar6 << 0x1a) ^ (uVar6 >> 0xb | uVar6 << 0x15) ^
            (uVar6 << 7 | uVar6 >> 0x19)) +
            *(int *)((long)local_138 + lVar12) + *(int *)((long)&DAT_00408400 + lVar12) +
            (~uVar6 & uVar15 ^ uVar6 & uVar16) + uVar8;
    uVar1 = iVar4 + uVar10;
    uVar5 = iVar4 + ((uVar11 >> 2 | uVar11 << 0x1e) ^ (uVar11 >> 0xd | uVar11 << 0x13) ^
                    (uVar11 << 10 | uVar11 >> 0x16)) +
                    ((uVar14 ^ uVar13) & uVar11 ^ uVar14 & uVar13);
    lVar12 = lVar12 + 4;
    uVar2 = uVar14;
    uVar10 = uVar13;
    uVar8 = uVar15;
    uVar3 = uVar11;
  } while (lVar12 != 0x100);
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) + uVar5;
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) + uVar11;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) + uVar14;
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) + uVar13;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) + uVar1;
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) + uVar6;
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) + uVar16;
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) + uVar15;
  return;
}



void FUN_004014cc(long param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x6a09e667;
  *(undefined4 *)(param_1 + 0x54) = 0xbb67ae85;
  *(undefined4 *)(param_1 + 0x58) = 0x3c6ef372;
  *(undefined4 *)(param_1 + 0x5c) = 0xa54ff53a;
  *(undefined4 *)(param_1 + 0x60) = 0x510e527f;
  *(undefined4 *)(param_1 + 100) = 0x9b05688c;
  *(undefined4 *)(param_1 + 0x68) = 0x1f83d9ab;
  *(undefined4 *)(param_1 + 0x6c) = 0x5be0cd19;
  return;
}



void FUN_00401514(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  if (param_3 != 0) {
    uVar4 = 0;
    uVar3 = 0;
    do {
      uVar1 = *(uint *)(param_1 + 0x40);
      *(undefined *)(param_1 + (ulong)uVar1) = *(undefined *)(param_2 + uVar3);
      iVar2 = uVar1 + 1;
      *(int *)(param_1 + 0x40) = iVar2;
      if (iVar2 == 0x40) {
        FUN_004012cf(param_1,param_1);
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x200;
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      uVar4 = uVar4 + 1;
      uVar3 = (ulong)uVar4;
    } while (uVar3 < param_3);
    return;
  }
  return;
}



void FUN_00401583(undefined (*param_1) [16],undefined *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  
  uVar2 = *(uint *)param_1[4];
  if (uVar2 < 0x38) {
    (*param_1)[uVar2] = 0x80;
    if (uVar2 + 1 < 0x38) {
      uVar3 = (ulong)(uVar2 + 1);
      do {
        (*param_1)[uVar3] = 0;
        uVar3 = uVar3 + 1;
      } while ((uint)uVar3 < 0x38);
    }
  }
  else {
    uVar1 = uVar2 + 1;
    (*param_1)[uVar2] = 0x80;
    if (uVar1 < 0x40) {
      puVar4 = *param_1 + uVar1;
      do {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (puVar4 != *param_1 + (ulong)(0x3e - uVar2) + (ulong)uVar1 + 1);
    }
    FUN_004012cf(param_1,param_1);
    *param_1 = (undefined  [16])0x0;
    param_1[1] = (undefined  [16])0x0;
    param_1[2] = (undefined  [16])0x0;
    *(undefined8 *)param_1[3] = 0;
  }
  lVar5 = (ulong)(uVar2 * 8) + *(long *)(param_1[4] + 8);
  *(long *)(param_1[4] + 8) = lVar5;
  param_1[3][0xf] = (char)lVar5;
  param_1[3][0xe] = (char)((ulong)lVar5 >> 8);
  param_1[3][0xd] = (char)((ulong)lVar5 >> 0x10);
  param_1[3][0xc] = (char)((ulong)lVar5 >> 0x18);
  param_1[3][0xb] = (char)((ulong)lVar5 >> 0x20);
  param_1[3][10] = (char)((ulong)lVar5 >> 0x28);
  param_1[3][9] = (char)((ulong)lVar5 >> 0x30);
  param_1[3][8] = (char)((ulong)lVar5 >> 0x38);
  FUN_004012cf(param_1,param_1);
  iVar7 = 0x18;
  do {
    bVar6 = (byte)iVar7;
    *param_2 = (char)(*(uint *)param_1[5] >> (bVar6 & 0x1f));
    param_2[4] = (char)(*(uint *)(param_1[5] + 4) >> (bVar6 & 0x1f));
    param_2[8] = (char)(*(uint *)(param_1[5] + 8) >> (bVar6 & 0x1f));
    param_2[0xc] = (char)(*(uint *)(param_1[5] + 0xc) >> (bVar6 & 0x1f));
    param_2[0x10] = (char)(*(uint *)param_1[6] >> (bVar6 & 0x1f));
    param_2[0x14] = (char)(*(uint *)(param_1[6] + 4) >> (bVar6 & 0x1f));
    param_2[0x18] = (char)(*(uint *)(param_1[6] + 8) >> (bVar6 & 0x1f));
    param_2[0x1c] = (char)(*(uint *)(param_1[6] + 0xc) >> (bVar6 & 0x1f));
    iVar7 = iVar7 + -8;
    param_2 = param_2 + 1;
  } while (iVar7 != -8);
  return;
}



void FUN_004016c3(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00401139();
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 0xf0) = *param_3;
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  return;
}



void FUN_004016df(long param_1,byte *param_2,long param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined6 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined2 uVar11;
  undefined6 uVar12;
  undefined7 uVar13;
  undefined8 uVar14;
  int iVar15;
  byte *pbVar16;
  long lVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  byte bVar20;
  byte bVar21;
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_38 [4];
  byte local_34 [4];
  
  if (param_3 == 0) {
    return;
  }
  pbVar1 = param_2 + param_3;
  iVar15 = 0x10;
  do {
    if (iVar15 == 0x10) {
      local_48 = *(undefined8 *)(param_1 + 0xf0);
      uStack_40 = *(undefined8 *)(param_1 + 0xf8);
      FUN_00401221(0,&local_48,param_1);
      iVar15 = 1;
      while( true ) {
        pbVar18 = local_38;
        do {
          pbVar16 = pbVar18 + -0x10;
          do {
            *pbVar16 = (&DAT_00408300)[*pbVar16];
            uVar14 = uStack_40;
            uVar7 = local_48;
            pbVar16 = pbVar16 + 4;
          } while (pbVar16 != pbVar18);
          pbVar18 = pbVar18 + 1;
        } while (pbVar18 != local_34);
        uVar9 = local_48._1_1_;
        uVar10 = local_48._5_1_;
        local_48._0_2_ = CONCAT11(uVar10,(undefined)local_48);
        uVar5 = (undefined2)local_48;
        local_48._0_6_ = CONCAT15(uStack_40._1_1_,(undefined5)local_48);
        uVar6 = (undefined6)local_48;
        uVar10 = uStack_40._5_1_;
        uStack_40._0_2_ = CONCAT11(uVar10,(undefined)uStack_40);
        uVar11 = (undefined2)uStack_40;
        uStack_40._0_6_ = CONCAT15(uVar9,(undefined5)uStack_40);
        uVar12 = (undefined6)uStack_40;
        local_48._2_1_ = SUB81(uVar7,2);
        uVar9 = local_48._2_1_;
        uStack_40._2_1_ = SUB81(uVar14,2);
        local_48._0_3_ = CONCAT12(uStack_40._2_1_,uVar5);
        uStack_40._0_3_ = CONCAT12(uVar9,uVar11);
        local_48._6_1_ = SUB81(uVar7,6);
        uVar9 = local_48._6_1_;
        uStack_40._6_1_ = SUB81(uVar14,6);
        local_48._7_1_ = SUB81(uVar7,7);
        uVar10 = local_48._7_1_;
        local_48._0_7_ =
             CONCAT16(uStack_40._6_1_,CONCAT33((int3)((uint6)uVar6 >> 0x18),(undefined3)local_48));
        uVar8 = local_48;
        uStack_40._7_1_ = SUB81(uVar14,7);
        uStack_40._0_7_ =
             CONCAT16(uVar9,CONCAT33((int3)((uint6)uVar12 >> 0x18),(undefined3)uStack_40));
        uVar13 = (undefined7)uStack_40;
        local_48._3_1_ = SUB81(uVar7,3);
        uVar9 = local_48._3_1_;
        uStack_40._3_1_ = SUB81(uVar14,3);
        uStack_40 = CONCAT17(uStack_40._3_1_,uVar13);
        local_48 = CONCAT17(uVar9,(undefined7)local_48);
        puVar19 = &local_48;
        if (iVar15 == 0xe) break;
        do {
          bVar2 = *(byte *)puVar19;
          bVar21 = bVar2 ^ *(byte *)((long)puVar19 + 1);
          bVar20 = *(byte *)((long)puVar19 + 2) ^ *(byte *)((long)puVar19 + 3);
          bVar4 = bVar21 ^ bVar20;
          *(byte *)puVar19 = (char)bVar21 >> 7 & 0x1bU ^ bVar21 * '\x02' ^ bVar2 ^ bVar4;
          *(byte *)((long)puVar19 + 1) =
               (char)(*(byte *)((long)puVar19 + 1) ^ *(byte *)((long)puVar19 + 2)) >> 7 & 0x1bU ^
               (*(byte *)((long)puVar19 + 1) ^ *(byte *)((long)puVar19 + 2)) * '\x02' ^
               bVar4 ^ *(byte *)((long)puVar19 + 1);
          *(byte *)((long)puVar19 + 2) =
               (char)bVar20 >> 7 & 0x1bU ^ bVar20 * '\x02' ^ bVar4 ^ *(byte *)((long)puVar19 + 2);
          *(byte *)((long)puVar19 + 3) =
               (bVar2 ^ *(byte *)((long)puVar19 + 3)) * '\x02' ^
               (char)(bVar2 ^ *(byte *)((long)puVar19 + 3)) >> 7 & 0x1bU ^
               bVar4 ^ *(byte *)((long)puVar19 + 3);
          puVar19 = (undefined8 *)((long)puVar19 + 4);
        } while (puVar19 != (undefined8 *)local_38);
        FUN_00401221(iVar15,&local_48,param_1);
        iVar15 = iVar15 + 1;
      }
      FUN_00401221(0xe,&local_48,param_1);
      lVar17 = 0xf;
      do {
        cVar3 = *(char *)(param_1 + 0xf0 + lVar17);
        if (cVar3 != -1) {
          *(char *)(param_1 + 0xf0 + (long)(int)lVar17) = cVar3 + '\x01';
          iVar15 = 0;
          goto LAB_0040170f;
        }
        *(undefined *)(param_1 + 0xf0 + lVar17) = 0;
        lVar17 = lVar17 + -1;
      } while (lVar17 != -1);
      iVar15 = 0;
    }
LAB_0040170f:
    *param_2 = *param_2 ^ *(byte *)((long)&local_48 + (long)iVar15);
    iVar15 = iVar15 + 1;
    param_2 = param_2 + 1;
    if (param_2 == pbVar1) {
      return;
    }
  } while( true );
}



void FUN_00401906(byte *param_1,int param_2,byte param_3)

{
  byte *pbVar1;
  
  if (0 < param_2) {
    pbVar1 = param_1 + param_2;
    do {
      *param_1 = *param_1 ^ param_3;
      param_1 = param_1 + 1;
    } while (param_1 != pbVar1);
  }
  return;
}



bool FUN_0040191f(int param_1,long param_2)

{
  char *__s1;
  int iVar1;
  char **ppcVar2;
  char local_68;
  undefined local_67;
  undefined local_66;
  undefined local_65;
  undefined local_64;
  undefined local_63;
  undefined local_62;
  undefined local_61;
  undefined local_60;
  undefined local_5f;
  undefined local_5e;
  undefined local_5d;
  undefined local_5c;
  undefined local_5b;
  undefined local_5a;
  undefined8 local_59;
  char local_4e;
  undefined local_4d;
  undefined local_4c;
  undefined4 local_4b;
  undefined8 local_47;
  char local_3f;
  undefined local_3e;
  undefined local_3d;
  undefined4 local_3c;
  
  local_3c = 0x948881;
  local_3d = 0x8c;
  local_3e = 0xc9;
  local_3f = -0x37;
  FUN_00401906(&local_3f,6,0xffffffe4);
  local_47 = 0xf6f0f2e1e7bebe;
  FUN_00401906(&local_47,7,0xffffff93);
  local_4b = 0x352123;
  local_4c = 0x34;
  local_4d = 0x6b;
  local_4e = 'k';
  FUN_00401906(&local_4e,6,0x46);
  local_59 = 0xeec697c1c6c490;
  local_5a = 0x8a;
  local_5b = 0x81;
  local_5c = 0x89;
  local_5d = 0x91;
  local_5e = 0x83;
  local_5f = 0x96;
  local_60 = 0x85;
  local_61 = 0xc4;
  local_62 = 0x8a;
  local_63 = 0x93;
  local_64 = 0x8b;
  local_65 = 0x8a;
  local_66 = 0x8f;
  local_67 = 0x8a;
  local_68 = -0x6f;
  FUN_00401906(&local_68,0x16,0xffffffe4);
  if (1 < param_1) {
    ppcVar2 = (char **)(param_2 + 8);
    do {
      __s1 = *ppcVar2;
      if (*__s1 == '-') {
        iVar1 = strcmp(__s1,&local_3f);
        if (iVar1 == 0) {
          return false;
        }
        iVar1 = strcmp(__s1,(char *)&local_47);
        if (iVar1 == 0) {
          DAT_0040b341 = 1;
          __s1 = DAT_0040b348;
        }
        else {
          iVar1 = strcmp(__s1,&local_4e);
          if (iVar1 != 0) {
            fprintf((FILE *)__stderr_FILE,&local_68,__s1);
            return false;
          }
          DAT_0040b340 = 1;
          __s1 = DAT_0040b348;
        }
      }
      DAT_0040b348 = __s1;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != (char **)(param_2 + 0x10 + (ulong)(param_1 - 2) * 8));
  }
  return DAT_0040b348 != (char *)0x0;
}



undefined8 FUN_00401b2c(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  int *__addr;
  int *piVar2;
  stat sStack_c8;
  
  if (DAT_0040b348 == (char *)0x0) {
    return 0;
  }
  param_1[1] = 0;
  param_1[3] = 0x88000000;
  *param_1 = 0x80000000;
  __fd = open(DAT_0040b348,0);
  if (__fd != -1) {
    iVar1 = fstat(__fd,&sStack_c8);
    if (iVar1 != -1) {
      if (0x88000000 < sStack_c8.st_size) {
        sStack_c8.st_size = 0x88000000;
      }
      __addr = (int *)mmap((void *)0x0,sStack_c8.st_size,1,2,__fd,0);
      if (((__addr != (int *)0xffffffffffffffff) && (*__addr == 0x464c457f)) &&
         (*(short *)(__addr + 4) == 2)) {
        piVar2 = (int *)((ulong)(uint)__addr[7] + (long)__addr);
        if (*(short *)(__addr + 0xb) != 0) {
          iVar1 = 0;
          do {
            if (*piVar2 == 1) {
              if (sStack_c8.st_size < (long)((ulong)(uint)piVar2[4] + (ulong)(uint)piVar2[1]))
              goto LAB_00401c69;
              memcpy((void *)((long)param_1 + (ulong)(piVar2[2] + 0x80000000) + 0x84),
                     (void *)((long)__addr + (ulong)(uint)piVar2[1]),(ulong)(uint)piVar2[4]);
            }
            iVar1 = iVar1 + 1;
            piVar2 = piVar2 + 8;
          } while (iVar1 < (int)(uint)*(ushort *)(__addr + 0xb));
        }
        munmap(__addr,sStack_c8.st_size);
        close(__fd);
        return 1;
      }
LAB_00401c69:
      munmap(__addr,sStack_c8.st_size);
    }
    close(__fd);
  }
  return 0;
}



int FUN_00401c93(uint param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 - 1 & 0x1f);
  return (param_1 & ~(-1 << (param_2 & 0x1f)) ^ uVar1) - uVar1;
}



byte * FUN_00401cb1(byte *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  
  uVar7 = param_2 >> 7;
  uVar6 = param_2 >> 0x14;
  bVar8 = (byte)uVar6 & 0x1f;
  uVar1 = FUN_00401c93(uVar6,0xc);
  uVar2 = FUN_00401c93(uVar6 & 0xfe0 | uVar7 & 0x1f,0xc);
  uVar3 = FUN_00401c93(param_2 >> 0x13 & 0x1000 | (param_2 & 0x80) << 4 | uVar6 & 0x7e0 |
                       uVar7 & 0x1e,0xc);
  uVar4 = FUN_00401c93(param_2 >> 0xc,0x14);
  uVar5 = FUN_00401c93(param_2 >> 0xb & 0x100000 | param_2 >> 9 & 0x800 | param_2 & 0xff000 |
                       uVar6 & 0x7fe,0x14);
  *param_1 = (byte)param_2 & 0x7f;
  param_1[1] = (byte)uVar7 & 0x1f;
  param_1[2] = (byte)(param_2 >> 0xf) & 0x1f;
  param_1[3] = bVar8;
  param_1[4] = (byte)(param_2 >> 0xc) & 7;
  param_1[5] = (byte)(param_2 >> 0x19);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  param_1[0x1c] = bVar8;
  return param_1;
}



undefined8 FUN_00401df7(undefined8 *param_1,int param_2,char *param_3)

{
  void *__dest;
  size_t sVar1;
  undefined auStack_1c8 [240];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined local_c8 [112];
  undefined local_58 [40];
  
  __dest = calloc(1,(ulong)(param_2 - 0xf));
  FUN_004014cc(local_c8);
  sVar1 = strlen(param_3);
  FUN_00401514(local_c8,param_3,sVar1);
  FUN_00401583(local_c8,local_58);
  local_d8 = *param_1;
  local_d0 = param_1[1];
  memcpy(__dest,param_1 + 2,(ulong)(param_2 - 0x10));
  FUN_00401139(auStack_1c8,local_58);
  FUN_004016df(auStack_1c8,__dest,(ulong)(param_2 - 0x10));
  printf("%s",__dest);
  free(__dest);
  return 0;
}



void FUN_00401ed4(long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  if (DAT_0040b341 == '\0') {
    if (param_2 != 0x3f) {
      if (param_2 < 0x40) {
        if (param_2 == 0x1b) {
LAB_00401fbe:
          FUN_00401df7(param_1 + 0x84 + (ulong)(param_3 + 0x80000000),param_4,
                       param_1 + 0x84 + (ulong)(param_5 + 0x80000000));
          return;
        }
      }
      else {
        if (param_2 == 0x40) {
LAB_00401f0b:
          write(param_3,(void *)(param_1 + 0x84 + (ulong)(param_4 + 0x80000000)),(ulong)param_5);
          return;
        }
        if (param_2 == 0x5d) {
LAB_00401fea:
                    // WARNING: Subroutine does not return
          exit(param_3);
        }
      }
LAB_00401f86:
                    // WARNING: Subroutine does not return
      exit(1);
    }
  }
  else {
    fprintf((FILE *)__stderr_FILE,
            "[\x1b[32m+\x1b[0m] syscall=0x%08x, a0=0x%08x, a1=0x%08x, a2=0x%08x\n",(ulong)param_2,
            (ulong)param_3,(ulong)param_4,(ulong)param_5);
    if (param_2 != 0x3f) {
      if (param_2 < 0x40) {
        if (param_2 == 0x1b) goto LAB_00401fbe;
      }
      else {
        if (param_2 == 0x40) goto LAB_00401f0b;
        if (param_2 == 0x5d) goto LAB_00401fea;
      }
      if (DAT_0040b341 != '\0') {
        fwrite(&DAT_00408080,1,0x24,(FILE *)__stderr_FILE);
      }
      goto LAB_00401f86;
    }
  }
  read(param_3,(void *)(param_1 + 0x84 + (ulong)(param_4 + 0x80000000)),(ulong)param_5);
  return;
}



undefined8 FUN_00401ff2(long param_1,uint param_2,uint *param_3)

{
  if (-1 < (int)param_2) {
    if (DAT_0040b341 != '\0') {
      fprintf((FILE *)__stderr_FILE,
              "[\x1b[31m-\x1b[0m] memory out of bounds access, address=0x%08x\n",(ulong)param_2);
    }
                    // WARNING: Subroutine does not return
    exit(1);
  }
  if (param_2 + 1 < 0x88000001) {
    *param_3 = (uint)*(byte *)(param_1 + 0x84 + (ulong)(param_2 + 0x80000000));
    return 1;
  }
  if (DAT_0040b341 != '\0') {
    fprintf((FILE *)__stderr_FILE,"[\x1b[31m-\x1b[0m] memory out of bounds access, address=0x%08x\n"
            ,(ulong)param_2);
  }
                    // WARNING: Subroutine does not return
  exit(1);
}



undefined8 FUN_0040207c(long param_1,uint param_2,uint *param_3)

{
  if (-1 < (int)param_2) {
    if (DAT_0040b341 != '\0') {
      fprintf((FILE *)__stderr_FILE,
              "[\x1b[31m-\x1b[0m] memory out of bounds access, address=0x%08x\n",(ulong)param_2);
    }
                    // WARNING: Subroutine does not return
    exit(1);
  }
  if (param_2 + 2 < 0x88000001) {
    *param_3 = (uint)CONCAT11(*(undefined *)(param_1 + 0x84 + (ulong)(param_2 + 0x80000001)),
                              *(undefined *)(param_1 + 0x84 + (ulong)(param_2 + 0x80000000)));
    return 1;
  }
  if (DAT_0040b341 != '\0') {
    fprintf((FILE *)__stderr_FILE,"[\x1b[31m-\x1b[0m] memory out of bounds access, address=0x%08x\n"
            ,(ulong)param_2);
  }
                    // WARNING: Subroutine does not return
  exit(1);
}



undefined8 FUN_00402119(long param_1,uint param_2,uint *param_3)

{
  if (-1 < (int)param_2) {
    if (DAT_0040b341 != '\0') {
      fprintf((FILE *)__stderr_FILE,
              "[\x1b[31m-\x1b[0m] memory out of bounds access, address=0x%08x\n",(ulong)param_2);
    }
                    // WARNING: Subroutine does not return
    exit(1);
  }
  if (param_2 + 4 < 0x88000001) {
    *param_3 = (uint)*(byte *)(param_1 + 0x84 + (ulong)(param_2 + 0x80000001)) << 8 |
               (uint)*(byte *)(param_1 + 0x84 + (ulong)(param_2 + 0x80000002)) << 0x10 |
               (uint)*(byte *)(param_1 + 0x84 + (ulong)(param_2 + 0x80000000)) |
               (uint)*(byte *)(param_1 + 0x84 + (ulong)(param_2 + 0x80000003)) << 0x18;
    return 1;
  }
  if (DAT_0040b341 != '\0') {
    fprintf((FILE *)__stderr_FILE,"[\x1b[31m-\x1b[0m] memory out of bounds access, address=0x%08x\n"
            ,(ulong)param_2);
  }
                    // WARNING: Subroutine does not return
  exit(1);
}



undefined4 FUN_004021e5(undefined8 param_1,undefined8 param_2,int param_3,char param_4)

{
  undefined4 local_1c [3];
  
  if (param_3 == 0x10) {
    FUN_0040207c(param_1,param_2,local_1c);
  }
  else if (param_3 == 0x20) {
    FUN_00402119(param_1,param_2,local_1c);
  }
  else if (param_3 == 8) {
    FUN_00401ff2(param_1,param_2,local_1c);
  }
  else {
    local_1c[0] = 0;
  }
  if (param_4 != '\0') {
    local_1c[0] = FUN_00401c93(local_1c[0],param_3);
  }
  return local_1c[0];
}



undefined8 FUN_00402249(long param_1,uint param_2,undefined param_3)

{
  if (-1 < (int)param_2) {
    if (DAT_0040b341 != '\0') {
      fprintf((FILE *)__stderr_FILE,
              "[\x1b[31m-\x1b[0m] memory out of bounds access, address=0x%08x\n",(ulong)param_2);
    }
                    // WARNING: Subroutine does not return
    exit(1);
  }
  if (param_2 + 1 < 0x88000001) {
    *(undefined *)(param_1 + 0x84 + (ulong)(param_2 + 0x80000000)) = param_3;
    return 1;
  }
  if (DAT_0040b341 != '\0') {
    fprintf((FILE *)__stderr_FILE,"[\x1b[31m-\x1b[0m] memory out of bounds access, address=0x%08x\n"
            ,(ulong)param_2);
  }
                    // WARNING: Subroutine does not return
  exit(1);
}



undefined8 FUN_004022d0(long param_1,uint param_2,undefined8 param_3)

{
  if (-1 < (int)param_2) {
    if (DAT_0040b341 != '\0') {
      fprintf((FILE *)__stderr_FILE,
              "[\x1b[31m-\x1b[0m] memory out of bounds access, address=0x%08x\n",(ulong)param_2);
    }
                    // WARNING: Subroutine does not return
    exit(1);
  }
  if (param_2 + 2 < 0x88000001) {
    *(char *)(param_1 + 0x84 + (ulong)(param_2 + 0x80000000)) = (char)param_3;
    *(char *)(param_1 + 0x84 + (ulong)(param_2 + 0x80000001)) = (char)((ulong)param_3 >> 8);
    return 1;
  }
  if (DAT_0040b341 != '\0') {
    fprintf((FILE *)__stderr_FILE,"[\x1b[31m-\x1b[0m] memory out of bounds access, address=0x%08x\n"
            ,(ulong)param_2);
  }
                    // WARNING: Subroutine does not return
  exit(1);
}



undefined8 FUN_00402367(long param_1,uint param_2,undefined4 param_3)

{
  if (-1 < (int)param_2) {
    if (DAT_0040b341 != '\0') {
      fprintf((FILE *)__stderr_FILE,
              "[\x1b[31m-\x1b[0m] memory out of bounds access, address=0x%08x\n",(ulong)param_2);
    }
                    // WARNING: Subroutine does not return
    exit(1);
  }
  if (param_2 + 4 < 0x88000001) {
    *(char *)(param_1 + 0x84 + (ulong)(param_2 + 0x80000000)) = (char)param_3;
    *(char *)(param_1 + 0x84 + (ulong)(param_2 + 0x80000001)) = (char)((uint)param_3 >> 8);
    *(char *)(param_1 + 0x84 + (ulong)(param_2 + 0x80000002)) = (char)((uint)param_3 >> 0x10);
    *(char *)(param_1 + 0x84 + (ulong)(param_2 + 0x80000003)) = (char)((uint)param_3 >> 0x18);
    return 1;
  }
  if (DAT_0040b341 != '\0') {
    fprintf((FILE *)__stderr_FILE,"[\x1b[31m-\x1b[0m] memory out of bounds access, address=0x%08x\n"
            ,(ulong)param_2);
  }
                    // WARNING: Subroutine does not return
  exit(1);
}



void FUN_00402420(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  if (param_3 == 0x10) {
    FUN_004022d0(param_1,param_2,param_4);
  }
  else if (param_3 == 0x20) {
    FUN_00402367();
  }
  else if (param_3 == 8) {
    FUN_00402249();
  }
  return;
}



char FUN_0040244f(uint *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  
  param_1[1] = 0;
  uVar2 = *param_1;
  if ((uVar2 & 3) == 0) {
    bVar1 = *param_2;
    if (bVar1 < 0x38) {
      if (bVar1 < 0x13) {
        if (bVar1 == 3) {
          switch(param_2[4]) {
          case 0:
            bVar1 = param_2[1];
            uVar2 = FUN_004021e5(param_1,*(int *)(param_2 + 8) + param_1[(ulong)param_2[2] + 1],8,1)
            ;
            param_1[(long)(int)(uint)bVar1 + 1] = uVar2;
            *param_1 = *param_1 + 4;
            cVar4 = '\x01';
            break;
          case 1:
            bVar1 = param_2[1];
            uVar2 = FUN_004021e5(param_1,*(int *)(param_2 + 8) + param_1[(ulong)param_2[2] + 1],0x10
                                 ,1);
            param_1[(long)(int)(uint)bVar1 + 1] = uVar2;
            *param_1 = *param_1 + 4;
            cVar4 = '\x01';
            break;
          case 2:
            bVar1 = param_2[1];
            uVar2 = FUN_004021e5(param_1,*(int *)(param_2 + 8) + param_1[(ulong)param_2[2] + 1],0x20
                                 ,0);
            param_1[(long)(int)(uint)bVar1 + 1] = uVar2;
            *param_1 = *param_1 + 4;
            cVar4 = '\x01';
            break;
          default:
            cVar4 = '\0';
            break;
          case 4:
            bVar1 = param_2[1];
            uVar2 = FUN_004021e5(param_1,*(int *)(param_2 + 8) + param_1[(ulong)param_2[2] + 1],8,0)
            ;
            param_1[(long)(int)(uint)bVar1 + 1] = uVar2;
            *param_1 = *param_1 + 4;
            cVar4 = '\x01';
            break;
          case 5:
            bVar1 = param_2[1];
            uVar2 = FUN_004021e5(param_1,*(int *)(param_2 + 8) + param_1[(ulong)param_2[2] + 1],0x10
                                 ,0);
            param_1[(long)(int)(uint)bVar1 + 1] = uVar2;
            *param_1 = *param_1 + 4;
            cVar4 = '\x01';
          }
        }
        else {
          cVar4 = '\0';
        }
      }
      else {
        switch(bVar1) {
        case 0x13:
          bVar1 = param_2[4];
          if ((bVar1 & 0xfb) == 1) {
            uVar5 = (uint)param_2[0x1c];
          }
          else {
            uVar5 = *(uint *)(param_2 + 8);
          }
          if (bVar1 < 8) {
            bVar3 = (byte)uVar5;
            switch(bVar1) {
            case 0:
              param_1[(ulong)param_2[1] + 1] = uVar5 + param_1[(ulong)param_2[2] + 1];
              *param_1 = uVar2 + 4;
              cVar4 = '\x01';
              break;
            case 1:
              param_1[(ulong)param_2[1] + 1] = param_1[(ulong)param_2[2] + 1] << (bVar3 & 0x1f);
              *param_1 = uVar2 + 4;
              cVar4 = '\x01';
              break;
            case 2:
              param_1[(ulong)param_2[1] + 1] =
                   (uint)((int)param_1[(ulong)param_2[2] + 1] < (int)uVar5);
              *param_1 = uVar2 + 4;
              cVar4 = '\x01';
              break;
            case 3:
              param_1[(ulong)param_2[1] + 1] = (uint)(param_1[(ulong)param_2[2] + 1] < uVar5);
              *param_1 = uVar2 + 4;
              cVar4 = '\x01';
              break;
            case 4:
              param_1[(ulong)param_2[1] + 1] = uVar5 ^ param_1[(ulong)param_2[2] + 1];
              *param_1 = uVar2 + 4;
              cVar4 = '\x01';
              break;
            case 5:
              if (param_2[5] == 0) {
                param_1[(ulong)param_2[1] + 1] = param_1[(ulong)param_2[2] + 1] >> (bVar3 & 0x1f);
                *param_1 = uVar2 + 4;
                cVar4 = '\x01';
              }
              else if (param_2[5] == 0x20) {
                param_1[(ulong)param_2[1] + 1] =
                     (int)param_1[(ulong)param_2[2] + 1] >> (bVar3 & 0x1f);
                *param_1 = uVar2 + 4;
                cVar4 = '\x01';
              }
              else {
                cVar4 = '\0';
              }
              break;
            case 6:
              param_1[(ulong)param_2[1] + 1] = uVar5 | param_1[(ulong)param_2[2] + 1];
              *param_1 = uVar2 + 4;
              cVar4 = '\x01';
              break;
            case 7:
              param_1[(ulong)param_2[1] + 1] = uVar5 & param_1[(ulong)param_2[2] + 1];
              *param_1 = uVar2 + 4;
              cVar4 = '\x01';
            }
          }
          else {
            cVar4 = '\0';
          }
          break;
        default:
          cVar4 = '\0';
          break;
        case 0x17:
          param_1[(ulong)param_2[1] + 1] = *(int *)(param_2 + 0x14) * 0x1000 + uVar2;
          *param_1 = uVar2 + 4;
          cVar4 = '\x01';
          break;
        case 0x23:
          bVar1 = param_2[4];
          if (bVar1 == 1) {
            FUN_004022d0(param_1,*(int *)(param_2 + 0xc) + param_1[(ulong)param_2[2] + 1],
                         param_1[(ulong)param_2[3] + 1]);
            *param_1 = *param_1 + 4;
            cVar4 = '\x01';
          }
          else if (bVar1 == 2) {
            FUN_00402367(param_1,*(int *)(param_2 + 0xc) + param_1[(ulong)param_2[2] + 1],
                         param_1[(ulong)param_2[3] + 1]);
            *param_1 = *param_1 + 4;
            cVar4 = '\x01';
          }
          else {
            cVar4 = '\0';
            if (bVar1 == 0) {
              FUN_00402249(param_1,*(int *)(param_2 + 0xc) + param_1[(ulong)param_2[2] + 1],
                           param_1[(ulong)param_2[3] + 1]);
              *param_1 = *param_1 + 4;
              cVar4 = '\x01';
            }
          }
          break;
        case 0x33:
          bVar1 = param_2[5];
          if (bVar1 == 1) {
            if (param_2[4] < 8) {
              switch(param_2[4]) {
              case 0:
                param_1[(ulong)param_2[1] + 1] =
                     param_1[(ulong)param_2[2] + 1] * param_1[(ulong)param_2[3] + 1];
                *param_1 = uVar2 + 4;
                cVar4 = '\x01';
                break;
              case 1:
                param_1[(ulong)param_2[1] + 1] =
                     (uint)((ulong)param_1[(ulong)param_2[3] + 1] *
                            (ulong)param_1[(ulong)param_2[2] + 1] >> 0x20);
                *param_1 = uVar2 + 4;
                cVar4 = '\x01';
                break;
              case 2:
                param_1[(ulong)param_2[1] + 1] =
                     (uint)((ulong)param_1[(ulong)param_2[3] + 1] *
                            (ulong)param_1[(ulong)param_2[2] + 1] >> 0x20);
                *param_1 = uVar2 + 4;
                cVar4 = '\x01';
                break;
              case 3:
                param_1[(ulong)param_2[1] + 1] =
                     (uint)((ulong)param_1[(ulong)param_2[3] + 1] *
                            (ulong)param_1[(ulong)param_2[2] + 1] >> 0x20);
                *param_1 = uVar2 + 4;
                cVar4 = '\x01';
                break;
              case 4:
                param_1[(ulong)param_2[1] + 1] =
                     (int)param_1[(ulong)param_2[2] + 1] / (int)param_1[(ulong)param_2[3] + 1];
                *param_1 = uVar2 + 4;
                cVar4 = '\x01';
                break;
              case 5:
                param_1[(ulong)param_2[1] + 1] =
                     param_1[(ulong)param_2[2] + 1] / param_1[(ulong)param_2[3] + 1];
                *param_1 = uVar2 + 4;
                cVar4 = '\x01';
                break;
              case 6:
                param_1[(ulong)param_2[1] + 1] =
                     (int)param_1[(ulong)param_2[2] + 1] % (int)param_1[(ulong)param_2[3] + 1];
                *param_1 = uVar2 + 4;
                cVar4 = '\x01';
                break;
              case 7:
                param_1[(ulong)param_2[1] + 1] =
                     param_1[(ulong)param_2[2] + 1] % param_1[(ulong)param_2[3] + 1];
                *param_1 = uVar2 + 4;
                cVar4 = '\x01';
              }
            }
            else {
              cVar4 = '\0';
            }
          }
          else if (param_2[4] < 8) {
            switch(param_2[4]) {
            case 0:
              if (bVar1 == 0) {
                param_1[(ulong)param_2[1] + 1] =
                     param_1[(ulong)param_2[3] + 1] + param_1[(ulong)param_2[2] + 1];
                *param_1 = uVar2 + 4;
                cVar4 = '\x01';
              }
              else {
                cVar4 = '\0';
                if (bVar1 == 0x20) {
                  param_1[(ulong)param_2[1] + 1] =
                       param_1[(ulong)param_2[2] + 1] - param_1[(ulong)param_2[3] + 1];
                  *param_1 = uVar2 + 4;
                  cVar4 = '\x01';
                }
              }
              break;
            case 1:
              param_1[(ulong)param_2[1] + 1] =
                   param_1[(ulong)param_2[2] + 1] << ((byte)param_1[(ulong)param_2[3] + 1] & 0x1f);
              *param_1 = uVar2 + 4;
              cVar4 = '\x01';
              break;
            case 2:
              param_1[(ulong)param_2[1] + 1] =
                   (uint)((int)param_1[(ulong)param_2[2] + 1] < (int)param_1[(ulong)param_2[3] + 1])
              ;
              *param_1 = uVar2 + 4;
              cVar4 = '\x01';
              break;
            case 3:
              param_1[(ulong)param_2[1] + 1] =
                   (uint)(param_1[(ulong)param_2[2] + 1] < param_1[(ulong)param_2[3] + 1]);
              *param_1 = uVar2 + 4;
              cVar4 = '\x01';
              break;
            case 4:
              param_1[(ulong)param_2[1] + 1] =
                   param_1[(ulong)param_2[2] + 1] ^ param_1[(ulong)param_2[3] + 1];
              *param_1 = uVar2 + 4;
              cVar4 = '\x01';
              break;
            case 5:
              if (bVar1 == 0) {
                param_1[(ulong)param_2[1] + 1] =
                     param_1[(ulong)param_2[2] + 1] >> ((byte)param_1[(ulong)param_2[3] + 1] & 0x1f)
                ;
                *param_1 = uVar2 + 4;
                cVar4 = '\x01';
              }
              else {
                cVar4 = '\0';
                if (bVar1 == 0x20) {
                  param_1[(ulong)param_2[1] + 1] =
                       (int)param_1[(ulong)param_2[2] + 1] >>
                       ((byte)param_1[(ulong)param_2[3] + 1] & 0x1f);
                  *param_1 = uVar2 + 4;
                  cVar4 = '\x01';
                }
              }
              break;
            case 6:
              param_1[(ulong)param_2[1] + 1] =
                   param_1[(ulong)param_2[2] + 1] | param_1[(ulong)param_2[3] + 1];
              *param_1 = uVar2 + 4;
              cVar4 = '\x01';
              break;
            case 7:
              param_1[(ulong)param_2[1] + 1] =
                   param_1[(ulong)param_2[2] + 1] & param_1[(ulong)param_2[3] + 1];
              *param_1 = uVar2 + 4;
              cVar4 = '\x01';
            }
          }
          else {
            cVar4 = '\0';
          }
          break;
        case 0x37:
          param_1[(ulong)param_2[1] + 1] = *(int *)(param_2 + 0x14) << 0xc;
          *param_1 = uVar2 + 4;
          cVar4 = '\x01';
        }
      }
    }
    else if (bVar1 == 0x6f) {
      param_1[(ulong)param_2[1] + 1] = uVar2 + 4;
      *param_1 = uVar2 + *(int *)(param_2 + 0x18);
      cVar4 = '\x01';
    }
    else if (bVar1 < 0x70) {
      if (bVar1 == 99) {
        switch(param_2[4]) {
        case 0:
          uVar5 = uVar2 + 4;
          if (param_1[(ulong)param_2[2] + 1] == param_1[(ulong)param_2[3] + 1]) {
            uVar5 = uVar2 + *(int *)(param_2 + 0x10);
          }
          *param_1 = uVar5;
          cVar4 = '\x01';
          break;
        case 1:
          uVar5 = uVar2 + 4;
          if (param_1[(ulong)param_2[2] + 1] != param_1[(ulong)param_2[3] + 1]) {
            uVar5 = uVar2 + *(int *)(param_2 + 0x10);
          }
          *param_1 = uVar5;
          cVar4 = '\x01';
          break;
        default:
          cVar4 = '\0';
          break;
        case 4:
          uVar5 = uVar2 + 4;
          if ((int)param_1[(ulong)param_2[2] + 1] < (int)param_1[(ulong)param_2[3] + 1]) {
            uVar5 = uVar2 + *(int *)(param_2 + 0x10);
          }
          *param_1 = uVar5;
          cVar4 = '\x01';
          break;
        case 5:
          uVar5 = uVar2 + 4;
          if ((int)param_1[(ulong)param_2[3] + 1] <= (int)param_1[(ulong)param_2[2] + 1]) {
            uVar5 = uVar2 + *(int *)(param_2 + 0x10);
          }
          *param_1 = uVar5;
          cVar4 = '\x01';
          break;
        case 6:
          uVar5 = uVar2 + 4;
          if (param_1[(ulong)param_2[2] + 1] < param_1[(ulong)param_2[3] + 1]) {
            uVar5 = uVar2 + *(int *)(param_2 + 0x10);
          }
          *param_1 = uVar5;
          cVar4 = '\x01';
          break;
        case 7:
          uVar5 = uVar2 + 4;
          if (param_1[(ulong)param_2[3] + 1] <= param_1[(ulong)param_2[2] + 1]) {
            uVar5 = uVar2 + *(int *)(param_2 + 0x10);
          }
          *param_1 = uVar5;
          cVar4 = '\x01';
        }
      }
      else if (bVar1 == 0x67) {
        uVar5 = param_1[(ulong)param_2[2] + 1];
        param_1[(ulong)param_2[1] + 1] = uVar2 + 4;
        *param_1 = uVar5 + *(int *)(param_2 + 8) & 0xfffffffe;
        cVar4 = '\x01';
      }
      else {
        cVar4 = '\0';
      }
    }
    else if (bVar1 == 0x73) {
      uVar2 = FUN_00401ed4(param_1,param_1[0x12],param_1[0xb],param_1[0xc],param_1[0xd]);
      param_1[0xb] = uVar2;
      *param_1 = *param_1 + 4;
      cVar4 = '\x01';
    }
    else {
      cVar4 = '\0';
    }
  }
  else {
    cVar4 = DAT_0040b341;
    if (DAT_0040b341 != '\0') {
      fprintf((FILE *)__stderr_FILE,"[\x1b[31m-\x1b[0m] misaligned memory access, address=0x%08x\n",
              (ulong)uVar2);
      cVar4 = '\0';
    }
  }
  return cVar4;
}



uint FUN_00402d4e(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined auStack_48 [44];
  uint local_1c;
  
  uVar1 = FUN_00402119(param_1,*param_1,&local_1c);
  if ((char)uVar1 != '\0') {
    FUN_00401cb1(auStack_48,local_1c);
    if (DAT_0040b341 != 0) {
      fprintf((FILE *)__stderr_FILE,"[\x1b[32m+\x1b[0m] address=0x%08x, instruction=0x%08x\n",
              (ulong)*param_1,(ulong)local_1c);
    }
    uVar2 = FUN_0040244f(param_1,auStack_48);
    uVar1 = uVar2;
    if (((char)uVar2 == '\0') && (uVar1 = (uint)DAT_0040b341, DAT_0040b341 != 0)) {
      fprintf((FILE *)__stderr_FILE,
              "[\x1b[31m-\x1b[0m] halting @ address=0x%08x, instruction=0x%08x\n",(ulong)*param_1,
              (ulong)local_1c);
      uVar1 = uVar2;
    }
  }
  return uVar1;
}



undefined8 main(undefined4 param_1,undefined8 *param_2)

{
  char cVar1;
  
  setbuf((FILE *)__stdout_FILE,(char *)0x0);
  setbuf((FILE *)__stdin_FILE,(char *)0x0);
  setbuf((FILE *)__stderr_FILE,(char *)0x0);
  atexit(FUN_0040125a);
  cVar1 = FUN_0040191f(param_1,param_2);
  if (cVar1 == '\0') {
    fprintf((FILE *)__stderr_FILE,"usage: %s [options] <filename>\n",*param_2);
  }
  else {
    cVar1 = FUN_00401b2c(ctx);
    if (cVar1 == '\0') {
      fprintf((FILE *)__stderr_FILE,"could not load program \'%s\'\n",DAT_0040b348);
    }
    else {
      do {
        cVar1 = FUN_00402d4e(ctx);
      } while (cVar1 != '\0');
    }
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00403018)
// WARNING: Removing unreachable block (ram,0x00402ff4)

void __init_libc(long param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined4 local_150;
  byte abStack_14a [2];
  undefined4 local_148;
  undefined4 local_140;
  ulong local_138 [6];
  undefined8 local_108;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_b8;
  long local_80;
  undefined8 local_70;
  char *local_40;
  long local_38;
  
  bVar7 = 0;
  puVar4 = local_138;
  for (lVar5 = 0x4c; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined4 *)puVar4 = 0;
    puVar4 = (ulong *)((long)puVar4 + 4);
  }
  lVar5 = 0;
  do {
    lVar1 = lVar5 * 8;
    lVar5 = lVar5 + 1;
  } while (*(long *)(param_1 + lVar1) != 0);
  __libc._8_8_ = param_1 + lVar5 * 8;
  for (puVar4 = (ulong *)__libc._8_8_; uVar3 = *puVar4, uVar3 != 0; puVar4 = puVar4 + 2) {
    if (uVar3 < 0x26) {
      local_138[uVar3] = puVar4[1];
    }
  }
  __hwcap = local_b8;
  if (local_38 != 0) {
    __sysinfo = local_38;
  }
  __libc._48_8_ = local_108;
  program_invocation_name = param_2;
  program_invocation_short_name = param_2;
  if ((param_2 == (char *)0x0) &&
     (param_2 = local_40, program_invocation_name = local_40,
     program_invocation_short_name = local_40, local_40 == (char *)0x0)) {
    param_2 = "";
    program_invocation_name = param_2;
    program_invocation_short_name = param_2;
  }
  while( true ) {
    cVar2 = *param_2;
    param_2 = param_2 + 1;
    if (cVar2 == '\0') break;
    if (cVar2 == '/') {
      program_invocation_short_name = param_2;
    }
  }
  environ = param_1;
  __init_tls(local_138);
  __init_ssp(local_70);
  if (((local_e0 != local_d8) || (local_d0 != local_c8)) || (local_80 != 0)) {
    puVar6 = &local_150;
    for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
    }
    local_148 = 1;
    local_140 = 2;
    syscall();
    lVar5 = 0;
    do {
      if ((abStack_14a[lVar5 * 8] & 0x20) != 0) {
        syscall();
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    __libc[2] = 1;
  }
  return;
}



void __libc_start_init(EVP_PKEY_CTX *param_1)

{
  undefined **ppuVar1;
  
  _init(param_1);
  for (ppuVar1 = &PTR_thunk_FUN_004010a0_0040af98; ppuVar1 < &PTR_FUN_0040afa0;
      ppuVar1 = (code **)ppuVar1 + 1) {
    (*(code *)*ppuVar1)();
  }
  return;
}



void FUN_00403052(code *param_1,int param_2,long param_3)

{
  int __status;
  
  __libc_start_init();
  __status = (*param_1)(param_2,param_3,param_3 + 8 + (long)param_2 * 8);
                    // WARNING: Subroutine does not return
  exit(__status);
}



void __libc_start_main(code *param_1,int param_2,undefined8 *param_3)

{
  int __status;
  
  __init_libc(param_3 + (long)param_2 + 1,*param_3);
  __libc_start_init();
  __status = (*param_1)(param_2,param_3,param_3 + (long)param_2 + 1);
                    // WARNING: Subroutine does not return
  exit(__status);
}



void __funcs_on_exit(void)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  
  __lock(&DAT_0840b3e4);
  for (; DAT_0840b3f0 != (undefined8 *)0x0; DAT_0840b3f0 = (undefined8 *)*DAT_0840b3f0) {
    while( true ) {
      iVar3 = DAT_0840b3e8 + -1;
      if (DAT_0840b3e8 < 1) break;
      uVar1 = DAT_0840b3f0[(long)iVar3 + 0x21];
      pcVar2 = (code *)DAT_0840b3f0[(long)iVar3 + 1];
      DAT_0840b3e8 = iVar3;
      __unlock(&DAT_0840b3e4);
      (*pcVar2)(uVar1);
      __lock(&DAT_0840b3e4);
    }
    DAT_0840b3e8 = 0x20;
  }
  return;
}



void __cxa_finalize(void)

{
  return;
}



undefined8 __cxa_atexit(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  __lock(&DAT_0840b3e4);
  if (DAT_0840b3f0 == (undefined8 *)0x0) {
    DAT_0840b3f0 = (undefined8 *)&DAT_0840b400;
  }
  if (DAT_0840b3e8 == 0x20) {
    puVar1 = (undefined8 *)__libc_calloc(0x208,1);
    if (puVar1 == (undefined8 *)0x0) {
      __unlock(&DAT_0840b3e4);
      return 0xffffffff;
    }
    *puVar1 = DAT_0840b3f0;
    DAT_0840b3f0 = puVar1;
    DAT_0840b3e8 = 0;
  }
  puVar1 = DAT_0840b3f0;
  DAT_0840b3f0[(long)DAT_0840b3e8 + 1] = param_1;
  puVar1[(long)DAT_0840b3e8 + 0x21] = param_2;
  DAT_0840b3e8 = DAT_0840b3e8 + 1;
  __unlock(&DAT_0840b3e4);
  return 0;
}



int atexit(__func *__func)

{
  int iVar1;
  
  iVar1 = __cxa_atexit(&DAT_004030bd,__func,0);
  return iVar1;
}



void __libc_exit_fini(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &__atexit_lockptr;
  while (&PTR_FUN_0040afa0 < ppuVar1) {
    ppuVar1 = (code **)ppuVar1 + -1;
    (*(code *)*ppuVar1)();
  }
  _fini();
  return;
}



int open(char *__file,int __oflag,...)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_EDX;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((__oflag & 0x40U) == 0) {
    uVar3 = 0;
    if ((__oflag & 0x410000U) != 0x410000) goto LAB_00403267;
  }
  uVar3 = in_EDX;
LAB_00403267:
  iVar2 = __syscall_cp(2,__file,(long)(int)(__oflag | 0x8000),uVar3,0,0);
  if ((-1 < iVar2) && (((uint)__oflag >> 0x13 & 1) != 0)) {
    syscall();
  }
  iVar2 = __syscall_ret((long)iVar2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar2;
}



ulong __syscall_ret(ulong param_1)

{
  int *piVar1;
  
  if (param_1 < 0xfffffffffffff001) {
    return param_1;
  }
  piVar1 = __errno_location();
  *piVar1 = -(int)param_1;
  return 0xffffffffffffffff;
}



void * calloc(size_t __nmemb,size_t __size)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  int *piVar6;
  size_t sVar7;
  void *pvVar8;
  
  if ((__size == 0) ||
     (auVar1._8_8_ = 0, auVar1._0_8_ = __size, auVar2._8_8_ = 0, auVar2._0_8_ = __nmemb,
     SUB168(auVar1 * auVar2,8) == 0)) {
    sVar7 = __size * __nmemb;
    pvVar4 = (void *)malloc(sVar7);
    if (pvVar4 != (void *)0x0) {
      if ((__malloc_replaced == 0) && (iVar3 = __malloc_allzerop(pvVar4), iVar3 != 0)) {
        return pvVar4;
      }
      if (0xfff < sVar7) {
        pvVar8 = (void *)((long)pvVar4 + sVar7);
        sVar7 = (size_t)((uint)pvVar8 & 0xfff);
LAB_00403388:
        pvVar5 = memset((void *)((long)pvVar8 - sVar7),0,sVar7);
        sVar7 = (long)pvVar5 - (long)pvVar4;
        if (0xfff < sVar7) {
          pvVar8 = pvVar5;
          do {
            if ((*(ulong *)((long)pvVar8 + -8) | *(ulong *)((long)pvVar8 + -0x10)) != 0) {
              sVar7 = (0x1000 - (long)pvVar5) + (long)pvVar8;
              break;
            }
            pvVar8 = (void *)((long)pvVar8 + -0x10);
            sVar7 = 0;
          } while ((void *)((long)pvVar5 + -0x1000) != pvVar8);
          goto LAB_00403388;
        }
      }
      pvVar4 = memset(pvVar4,0,sVar7);
      return pvVar4;
    }
  }
  else {
    piVar6 = __errno_location();
    *piVar6 = 0xc;
  }
  return (void *)0x0;
}



undefined8 free(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 in_RAX;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  ulong uVar12;
  undefined auVar13 [16];
  
  if (param_1 == 0) {
    return in_RAX;
  }
  lVar7 = FUN_0040382d();
  uVar12 = (ulong)*(byte *)(param_1 + -3);
  lVar8 = FUN_00403920(lVar7);
  uVar11 = (uint)uVar12 & 0x1f;
  pcVar2 = (char *)(lVar8 + *(long *)(lVar7 + 0x10) + 0xc + (ulong)uVar11 * lVar8);
  uVar9 = (uVar12 & 0xffffffff) >> 5 & 7;
  if (0x9f < (byte)uVar12) {
    if ((char)uVar9 != '\x05') {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    uVar9 = (ulong)*(uint *)(pcVar2 + -4);
    if (uVar9 < 5) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (pcVar2[-5] != '\0') {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  if ((ulong)((long)pcVar2 - param_1) < uVar9) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (pcVar2[-uVar9] == '\0') {
    if (*pcVar2 != '\0') {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    uVar11 = 1 << (sbyte)uVar11;
    bVar3 = *(byte *)(lVar7 + 0x20);
    *(undefined *)(param_1 + -3) = 0xff;
    *(undefined2 *)(param_1 + -2) = 0;
    do {
      uVar4 = *(uint *)(lVar7 + 0x1c);
      uVar6 = *(uint *)(lVar7 + 0x18) | uVar4;
      if ((uVar11 & uVar6) != 0) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      if ((uVar4 == 0) || (uVar6 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
        if (__libc[3] != '\0') {
          __lock(&__malloc_lock);
        }
        auVar13 = FUN_0040395a(lVar7,(uint)uVar12 & 0x1f);
        __unlock(&__malloc_lock);
        if (auVar13._8_8_ == 0) {
          return param_3;
        }
        piVar10 = __errno_location();
        iVar5 = *piVar10;
        munmap(auVar13._0_8_,auVar13._8_8_);
        *piVar10 = iVar5;
        return param_3;
      }
      if (__libc[3] == '\0') {
        *(uint *)(lVar7 + 0x1c) = uVar11 + uVar4;
        return param_3;
      }
      LOCK();
      puVar1 = (uint *)(lVar7 + 0x1c);
      if (uVar4 == *puVar1) {
        *puVar1 = uVar11 + uVar4;
        uVar6 = uVar4;
      }
      else {
        uVar6 = *puVar1;
      }
      UNLOCK();
    } while (uVar4 != uVar6);
    return param_3;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void * __libc_calloc(ulong param_1,ulong param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  int *piVar6;
  size_t sVar7;
  void *pvVar8;
  
  if ((param_2 == 0) ||
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, auVar2._8_8_ = 0, auVar2._0_8_ = param_1,
     SUB168(auVar1 * auVar2,8) == 0)) {
    sVar7 = param_2 * param_1;
    pvVar4 = (void *)__libc_malloc(sVar7);
    if (pvVar4 != (void *)0x0) {
      if ((__malloc_replaced == 0) && (iVar3 = __malloc_allzerop(pvVar4), iVar3 != 0)) {
        return pvVar4;
      }
      if (0xfff < sVar7) {
        pvVar8 = (void *)((long)pvVar4 + sVar7);
        sVar7 = (size_t)((uint)pvVar8 & 0xfff);
LAB_00403488:
        pvVar5 = memset((void *)((long)pvVar8 - sVar7),0,sVar7);
        sVar7 = (long)pvVar5 - (long)pvVar4;
        if (0xfff < sVar7) {
          pvVar8 = pvVar5;
          do {
            if ((*(ulong *)((long)pvVar8 + -8) | *(ulong *)((long)pvVar8 + -0x10)) != 0) {
              sVar7 = (0x1000 - (long)pvVar5) + (long)pvVar8;
              break;
            }
            pvVar8 = (void *)((long)pvVar8 + -0x10);
            sVar7 = 0;
          } while ((void *)((long)pvVar5 + -0x1000) != pvVar8);
          goto LAB_00403488;
        }
      }
      pvVar4 = memset(pvVar4,0,sVar7);
      return pvVar4;
    }
  }
  else {
    piVar6 = __errno_location();
    *piVar6 = 0xc;
  }
  return (void *)0x0;
}



void * FUN_00403500(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  void *pvVar8;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((long)param_1 < 0) {
    piVar4 = __errno_location();
    *piVar4 = 0xc;
LAB_004037ab:
    pvVar8 = (void *)0x0;
  }
  else {
    uVar7 = 1;
    if (param_1 != 0) {
      uVar7 = param_1;
    }
    if (param_1 < 2) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
      do {
        uVar2 = uVar2 * 2;
        if (uVar7 <= uVar2) break;
      } while (uVar2 < 0x10);
      uVar2 = uVar2 - 1;
    }
    __lock(&DAT_0840b6c8);
    puVar1 = DAT_0840b6b8;
    pvVar8 = (void *)((-(long)DAT_0840b6c0 & uVar2) + (long)DAT_0840b6c0);
    if ((ulong)((long)DAT_0840b6b8 - (long)pvVar8) < uVar7) {
      if (pvVar8 == (void *)0x0) {
        syscall();
        DAT_0840b6b0 = (undefined *)0x1000;
        DAT_0840b6b8 = (undefined *)0x1000;
        DAT_0840b6c0 = (void *)0x1000;
LAB_00403653:
        uVar2 = (long)pvVar8 + (uVar7 - (long)puVar1) + 0xfff & 0xfffffffffffff000;
        if (uVar2 < ~(ulong)DAT_0840b6b0) {
          lVar5 = 0x800000;
          if (0x7fffff < (ulong)__libc._8_8_) {
            lVar5 = __libc._8_8_;
          }
          if ((DAT_0840b6b0 + uVar2 <= (undefined1 *)(lVar5 + -0x800000)) ||
             ((ulong)__libc._8_8_ <= DAT_0840b6b0)) {
            puVar6 = ctx + 0x3f4ca0;
            if (ctx + 0x3f4c9f < auStack_38) {
              puVar6 = auStack_38;
            }
            if (((DAT_0840b6b0 + uVar2 <= puVar6 + -0x800000) || (auStack_38 <= DAT_0840b6b0)) &&
               (syscall(), DAT_0840b6b0 + uVar2 == (undefined *)0xc)) {
              DAT_0840b6b0 = DAT_0840b6b8 + uVar2;
              pvVar8 = DAT_0840b6c0;
              DAT_0840b6b8 = DAT_0840b6b0;
              goto LAB_00403703;
            }
          }
        }
      }
      else {
        DAT_0840b6c0 = pvVar8;
        if (DAT_0840b6b8 == DAT_0840b6b0) goto LAB_00403653;
      }
      uVar2 = uVar7 + 0xfff & 0xfffffffffffff000;
      if ((uVar2 - uVar7 <= uVar2 >> 3) ||
         (uVar3 = (ulong)(0x1000 << ((byte)(DAT_0840b6a8 >> 1) & 0x1f)),
         uVar3 - uVar7 <= (ulong)((long)DAT_0840b6b8 - (long)DAT_0840b6c0))) {
        pvVar8 = mmap((void *)0x0,uVar2,3,0x22,-1,0);
        __unlock(&DAT_0840b6c8);
        if (pvVar8 != (void *)0xffffffffffffffff) goto LAB_00403600;
        goto LAB_004037ab;
      }
      if ((uVar2 < uVar3) && (uVar2 = uVar3, DAT_0840b6a8 < 0xc)) {
        DAT_0840b6a8 = DAT_0840b6a8 + 1;
      }
      pvVar8 = mmap((void *)0x0,uVar2,3,0x22,-1,0);
      if (pvVar8 == (void *)0xffffffffffffffff) {
        pvVar8 = (void *)0x0;
        __unlock(&DAT_0840b6c8);
        goto LAB_00403600;
      }
      DAT_0840b6b8 = (undefined *)(uVar2 + (long)pvVar8);
    }
LAB_00403703:
    DAT_0840b6c0 = (void *)(uVar7 + (long)pvVar8);
    __unlock(&DAT_0840b6c8);
  }
LAB_00403600:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return pvVar8;
}



undefined  [16] __libc_malloc(ulong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  long *__addr;
  long lVar5;
  ulong uVar6;
  ulong in_R10;
  int iVar7;
  undefined auVar8 [16];
  
  if (0x7fffffffffffeffe < param_1) {
    piVar4 = __errno_location();
    *piVar4 = 0xc;
    goto LAB_004049b1;
  }
  if (0x1ffeb < param_1) {
    __addr = (long *)mmap((void *)0x0,param_1 + 0x14,3,0x22,-1,0);
    if (__addr != (long *)0xffffffffffffffff) {
      if (__libc[3] != '\0') {
        __lock(&__malloc_lock);
      }
      FUN_00403eef();
      lVar5 = __malloc_alloc_meta();
      if (lVar5 == 0) {
        __unlock(&__malloc_lock);
        munmap(__addr,param_1 + 0x14);
        goto LAB_004049b1;
      }
      *(long **)(lVar5 + 0x10) = __addr;
      iVar7 = 0;
      *__addr = lVar5;
      *(undefined4 *)(lVar5 + 0x1c) = 0;
      DAT_0840b6ec = DAT_0840b6ec + 1;
      *(ulong *)(lVar5 + 0x20) = param_1 + 0x1013 & 0xfffffffffffff000 | 0xfe0;
      *(undefined4 *)(lVar5 + 0x18) = 0;
      goto LAB_00404983;
    }
    goto LAB_004049b1;
  }
  uVar2 = FUN_00403e67();
  uVar6 = (ulong)(int)uVar2;
  if (__libc[3] != '\0') {
    __lock(&__malloc_lock);
  }
  lVar5 = *(long *)(&DAT_0840b730 + (long)(int)uVar2 * 8);
  if (lVar5 == 0) {
    if ((int)uVar2 < 4) {
LAB_00404931:
      if (lVar5 != 0) goto LAB_00404936;
    }
    else if (((((int)uVar2 < 0x20) && (uVar2 != 6)) && ((uVar6 & 1) == 0)) &&
            (*(long *)(&DAT_0840b8b0 + (long)(int)uVar2 * 8) == 0)) {
      uVar3 = uVar2 | 1;
      uVar6 = *(ulong *)(&DAT_0840b8b0 + (long)(int)uVar3 * 8);
      lVar5 = *(long *)(&DAT_0840b730 + (long)(int)uVar3 * 8);
      if ((lVar5 == 0) || ((*(int *)(lVar5 + 0x18) == 0 && (*(int *)(lVar5 + 0x1c) == 0)))) {
        uVar6 = uVar6 + 3;
      }
      if (0xc < uVar6) {
        uVar3 = uVar2;
      }
      uVar6 = (ulong)(int)uVar3;
      lVar5 = *(long *)(&DAT_0840b730 + (long)(int)uVar3 * 8);
      goto LAB_00404931;
    }
  }
  else {
LAB_00404936:
    uVar2 = *(uint *)(lVar5 + 0x18);
    uVar3 = -uVar2 & uVar2;
    if (uVar3 != 0) {
      *(uint *)(lVar5 + 0x18) = uVar2 - uVar3;
      iVar7 = (int)(char)(&DAT_00408520)[(-uVar3 & uVar3) * 0x76be629 >> 0x1b];
      goto LAB_00404983;
    }
  }
  iVar7 = FUN_00404222(uVar6 & 0xffffffff,param_1);
  if (iVar7 < 0) {
    __unlock(&__malloc_lock);
LAB_004049b1:
    auVar8._8_8_ = 0;
    auVar8._0_8_ = in_R10;
    return auVar8 << 0x40;
  }
  lVar5 = *(long *)(&DAT_0840b730 + uVar6 * 8);
LAB_00404983:
  iVar1 = DAT_0840b6ec;
  __unlock(&__malloc_lock);
  auVar8 = FUN_00403d72(lVar5,iVar7,param_1,iVar1,in_R10);
  return auVar8;
}



undefined  [16] malloc(ulong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  long *__addr;
  long lVar5;
  ulong uVar6;
  ulong in_R10;
  int iVar7;
  undefined auVar8 [16];
  
  if (0x7fffffffffffeffe < param_1) {
    piVar4 = __errno_location();
    *piVar4 = 0xc;
    goto LAB_004049b1;
  }
  if (0x1ffeb < param_1) {
    __addr = (long *)mmap((void *)0x0,param_1 + 0x14,3,0x22,-1,0);
    if (__addr != (long *)0xffffffffffffffff) {
      if (__libc[3] != '\0') {
        __lock(&__malloc_lock);
      }
      FUN_00403eef();
      lVar5 = __malloc_alloc_meta();
      if (lVar5 == 0) {
        __unlock(&__malloc_lock);
        munmap(__addr,param_1 + 0x14);
        goto LAB_004049b1;
      }
      *(long **)(lVar5 + 0x10) = __addr;
      iVar7 = 0;
      *__addr = lVar5;
      *(undefined4 *)(lVar5 + 0x1c) = 0;
      DAT_0840b6ec = DAT_0840b6ec + 1;
      *(ulong *)(lVar5 + 0x20) = param_1 + 0x1013 & 0xfffffffffffff000 | 0xfe0;
      *(undefined4 *)(lVar5 + 0x18) = 0;
      goto LAB_00404983;
    }
    goto LAB_004049b1;
  }
  uVar2 = FUN_00403e67();
  uVar6 = (ulong)(int)uVar2;
  if (__libc[3] != '\0') {
    __lock(&__malloc_lock);
  }
  lVar5 = *(long *)(&DAT_0840b730 + (long)(int)uVar2 * 8);
  if (lVar5 == 0) {
    if ((int)uVar2 < 4) {
LAB_00404931:
      if (lVar5 != 0) goto LAB_00404936;
    }
    else if (((((int)uVar2 < 0x20) && (uVar2 != 6)) && ((uVar6 & 1) == 0)) &&
            (*(long *)(&DAT_0840b8b0 + (long)(int)uVar2 * 8) == 0)) {
      uVar3 = uVar2 | 1;
      uVar6 = *(ulong *)(&DAT_0840b8b0 + (long)(int)uVar3 * 8);
      lVar5 = *(long *)(&DAT_0840b730 + (long)(int)uVar3 * 8);
      if ((lVar5 == 0) || ((*(int *)(lVar5 + 0x18) == 0 && (*(int *)(lVar5 + 0x1c) == 0)))) {
        uVar6 = uVar6 + 3;
      }
      if (0xc < uVar6) {
        uVar3 = uVar2;
      }
      uVar6 = (ulong)(int)uVar3;
      lVar5 = *(long *)(&DAT_0840b730 + (long)(int)uVar3 * 8);
      goto LAB_00404931;
    }
  }
  else {
LAB_00404936:
    uVar2 = *(uint *)(lVar5 + 0x18);
    uVar3 = -uVar2 & uVar2;
    if (uVar3 != 0) {
      *(uint *)(lVar5 + 0x18) = uVar2 - uVar3;
      iVar7 = (int)(char)(&DAT_00408520)[(-uVar3 & uVar3) * 0x76be629 >> 0x1b];
      goto LAB_00404983;
    }
  }
  iVar7 = FUN_00404222(uVar6 & 0xffffffff,param_1);
  if (iVar7 < 0) {
    __unlock(&__malloc_lock);
LAB_004049b1:
    auVar8._8_8_ = 0;
    auVar8._0_8_ = in_R10;
    return auVar8 << 0x40;
  }
  lVar5 = *(long *)(&DAT_0840b730 + uVar6 * 8);
LAB_00404983:
  iVar1 = DAT_0840b6ec;
  __unlock(&__malloc_lock);
  auVar8 = FUN_00403d72(lVar5,iVar7,param_1,iVar1,in_R10);
  return auVar8;
}



void FUN_004037f5(long **param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2[1] != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (*param_2 != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  plVar1 = *param_1;
  if (plVar1 != (long *)0x0) {
    param_2[1] = (long)plVar1;
    lVar2 = *plVar1;
    *param_2 = lVar2;
    *(long **)(lVar2 + 8) = param_2;
    *(long **)param_2[1] = param_2;
    return;
  }
  param_2[1] = (long)param_2;
  *param_2 = (long)param_2;
  *param_1 = param_2;
  return;
}



void FUN_0040382d(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  if ((param_1 & 0xf) != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  uVar6 = (ulong)*(ushort *)(param_1 - 2);
  uVar7 = *(byte *)(param_1 - 3) & 0x1f;
  bVar2 = *(byte *)(param_1 - 3) & 0x1f;
  if (*(char *)(param_1 - 4) != '\0') {
    if (*(ushort *)(param_1 - 2) != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    uVar6 = (ulong)*(int *)(param_1 - 8);
    if (*(int *)(param_1 - 8) < 0x10000) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  iVar5 = (int)uVar6;
  lVar8 = param_1 - (long)(iVar5 << 4);
  uVar1 = *(ulong *)(lVar8 + -0x10);
  if (*(long *)(uVar1 + 0x10) != lVar8 + -0x10) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if ((*(byte *)(uVar1 + 0x20) & 0x1f) < uVar7) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if ((*(uint *)(uVar1 + 0x18) >> bVar2 & 1) != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if ((*(uint *)(uVar1 + 0x1c) >> bVar2 & 1) != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (*(long *)(uVar1 & 0xfffffffffffff000) != __malloc_context) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  uVar3 = (ushort)*(undefined4 *)(uVar1 + 0x20);
  uVar4 = uVar3 >> 6 & 0x3f;
  if ((byte)uVar4 < 0x30) {
    if (iVar5 < (int)(*(ushort *)(__malloc_size_classes + (ulong)uVar4 * 2) * uVar7)) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (iVar5 < (int)((uint)*(ushort *)
                             (__malloc_size_classes +
                             (ulong)(*(uint *)(uVar1 + 0x20) >> 6 & 0x3f) * 2) * (uVar7 + 1))) {
LAB_004038fd:
      if ((0xfff < *(ulong *)(uVar1 + 0x20)) &&
         (((*(ulong *)(uVar1 + 0x20) & 0xfffffffffffff000) >> 4) - 1 < uVar6)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      return;
    }
  }
  else if ((uVar3 & 0xfc0) == 0xfc0) goto LAB_004038fd;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



long FUN_00403920(long param_1)

{
  if (((*(byte *)(param_1 + 0x20) & 0x1f) == 0) && (0xfff < *(ulong *)(param_1 + 0x20))) {
    return (*(ulong *)(param_1 + 0x20) & 0xfffffffffffff000) - 0x10;
  }
  return (long)(int)((uint)*(ushort *)
                            (__malloc_size_classes +
                            (ulong)(*(uint *)(param_1 + 0x20) >> 6 & 0x3f) * 2) << 4);
}



undefined8 FUN_0040395a(long *param_1,byte param_2)

{
  uint *puVar1;
  byte bVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  char cVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  undefined auVar16 [16];
  
  bVar15 = 0;
  uVar13 = 1 << (param_2 & 0x1f);
  bVar2 = *(byte *)(param_1 + 4);
  uVar12 = *(uint *)((long)param_1 + 0x1c) | *(uint *)(param_1 + 3);
  uVar14 = bVar2 & 0x1f;
  uVar11 = *(uint *)(param_1 + 4) >> 6 & 0x3f;
  if ((uVar13 + uVar12 != (2 << (bVar2 & 0x1f)) + -1) || ((bVar2 & 0x20) == 0)) {
    if (uVar12 != 0) goto LAB_00403bc2;
    if (0x2f < uVar11) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
LAB_00403b9f:
    if (*(long **)(&DAT_0840b730 + (long)(int)uVar11 * 8) != param_1) {
      FUN_004037f5(&__malloc_context + (int)(uVar11 + 10),param_1);
    }
LAB_00403bc2:
    LOCK();
    *(uint *)((long)param_1 + 0x1c) = *(uint *)((long)param_1 + 0x1c) | uVar13;
    UNLOCK();
    return 0;
  }
  plVar7 = (long *)param_1[1];
  if (0x2f < uVar11) {
    if (plVar7 != (long *)0x0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    goto LAB_00403abe;
  }
  uVar5 = FUN_00403920();
  if (((uVar5 < (ulong)(long)(int)((uint)*(ushort *)(__malloc_size_classes + (long)(int)uVar11 * 2)
                                  << 4)) || ((ulong)param_1[4] < 0x1000)) || (param_1 != plVar7)) {
    if (plVar7 == (long *)0x0) goto LAB_00403abe;
  }
  else if (((uVar11 - 7 < 0x20) && (99 < (byte)(&DAT_0840ba50)[(int)(uVar11 - 7)])) &&
          ((*(ulong *)(&DAT_0840b8b0 + (long)(int)uVar11 * 8) < (ulong)((long)(int)(uVar14 + 1) * 9)
           || (0x13 < (int)(uVar14 + 1))))) {
    if (uVar12 != 0) goto LAB_00403bc2;
    goto LAB_00403b9f;
  }
  plVar7 = (long *)param_1[1];
  lVar8 = (long)(int)uVar11 + 10;
  plVar3 = (long *)(&__malloc_context)[lVar8];
  if (param_1 == plVar7) {
    (&__malloc_context)[lVar8] = 0;
  }
  else {
    *(long **)(*param_1 + 8) = plVar7;
    *plVar7 = *param_1;
    if (param_1 == (long *)(&__malloc_context)[lVar8]) {
      (&__malloc_context)[lVar8] = param_1[1];
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  if ((plVar3 == param_1) && (lVar8 = *(long *)(&DAT_0840b730 + (long)(int)uVar11 * 8), lVar8 != 0))
  {
    if (*(int *)(lVar8 + 0x18) != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    iVar4 = 2 << (*(byte *)(*(long *)(lVar8 + 0x10) + 8) & 0x1f);
    do {
      uVar11 = *(uint *)(lVar8 + 0x1c);
      LOCK();
      puVar1 = (uint *)(lVar8 + 0x1c);
      if (uVar11 == *puVar1) {
        *puVar1 = -iVar4 & uVar11;
        uVar12 = uVar11;
      }
      else {
        uVar12 = *puVar1;
      }
      UNLOCK();
    } while (uVar11 != uVar12);
    *(uint *)(lVar8 + 0x18) = iVar4 - 1U & uVar11;
  }
LAB_00403abe:
  uVar11 = *(uint *)(param_1 + 4) >> 6 & 0x3f;
  if (uVar11 < 0x30) {
    *(ulong *)(&DAT_0840b8b0 + (long)(int)uVar11 * 8) =
         *(long *)(&DAT_0840b8b0 + (long)(int)uVar11 * 8) + ~(ulong)(*(byte *)(param_1 + 4) & 0x1f);
  }
  if ((ulong)param_1[4] < 0x1000) {
    lVar8 = param_1[2];
    uVar6 = FUN_0040382d(lVar8);
    bVar2 = *(byte *)(lVar8 + -3);
    *(undefined8 *)param_1[2] = 0;
    auVar16 = FUN_0040395a(uVar6,bVar2 & 0x1f);
  }
  else {
    cVar9 = DAT_0840ba70 + '\x01';
    if (DAT_0840ba70 == -1) {
      puVar10 = &__malloc_context;
      do {
        *(undefined *)(puVar10 + 0x6a) = 0;
        puVar10 = (undefined8 *)((long)puVar10 + 1);
      } while (puVar10 != (undefined8 *)&DAT_0840b700);
      cVar9 = '\x01';
    }
    DAT_0840ba70 = cVar9;
    if (uVar11 - 7 < 0x20) {
      (&DAT_0840ba30)[(int)(uVar11 - 7)] = cVar9;
    }
    auVar16._8_8_ = param_1[4] & 0xfffffffffffff000;
    auVar16._0_8_ = param_1[2];
  }
  uVar6 = auVar16._0_8_;
  plVar7 = param_1;
  for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined4 *)plVar7 = 0;
    plVar7 = (long *)((long)plVar7 + (ulong)bVar15 * -8 + 4);
  }
  FUN_004037f5(&DAT_0840b6f0,param_1,auVar16._8_8_,0,uVar6);
  return uVar6;
}



undefined8 __libc_free(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 in_RAX;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  ulong uVar12;
  undefined auVar13 [16];
  
  if (param_1 == 0) {
    return in_RAX;
  }
  lVar7 = FUN_0040382d();
  uVar12 = (ulong)*(byte *)(param_1 + -3);
  lVar8 = FUN_00403920(lVar7);
  uVar11 = (uint)uVar12 & 0x1f;
  pcVar2 = (char *)(lVar8 + *(long *)(lVar7 + 0x10) + 0xc + (ulong)uVar11 * lVar8);
  uVar9 = (uVar12 & 0xffffffff) >> 5 & 7;
  if (0x9f < (byte)uVar12) {
    if ((char)uVar9 != '\x05') {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    uVar9 = (ulong)*(uint *)(pcVar2 + -4);
    if (uVar9 < 5) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (pcVar2[-5] != '\0') {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  if ((ulong)((long)pcVar2 - param_1) < uVar9) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (pcVar2[-uVar9] == '\0') {
    if (*pcVar2 != '\0') {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    uVar11 = 1 << (sbyte)uVar11;
    bVar3 = *(byte *)(lVar7 + 0x20);
    *(undefined *)(param_1 + -3) = 0xff;
    *(undefined2 *)(param_1 + -2) = 0;
    do {
      uVar4 = *(uint *)(lVar7 + 0x1c);
      uVar6 = *(uint *)(lVar7 + 0x18) | uVar4;
      if ((uVar11 & uVar6) != 0) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      if ((uVar4 == 0) || (uVar6 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
        if (__libc[3] != '\0') {
          __lock(&__malloc_lock);
        }
        auVar13 = FUN_0040395a(lVar7,(uint)uVar12 & 0x1f);
        __unlock(&__malloc_lock);
        if (auVar13._8_8_ == 0) {
          return param_3;
        }
        piVar10 = __errno_location();
        iVar5 = *piVar10;
        munmap(auVar13._0_8_,auVar13._8_8_);
        *piVar10 = iVar5;
        return param_3;
      }
      if (__libc[3] == '\0') {
        *(uint *)(lVar7 + 0x1c) = uVar11 + uVar4;
        return param_3;
      }
      LOCK();
      puVar1 = (uint *)(lVar7 + 0x1c);
      if (uVar4 == *puVar1) {
        *puVar1 = uVar11 + uVar4;
        uVar6 = uVar4;
      }
      else {
        uVar6 = *puVar1;
      }
      UNLOCK();
    } while (uVar4 != uVar6);
    return param_3;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00403d00(long **param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2[1] != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (*param_2 != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  plVar1 = *param_1;
  if (plVar1 != (long *)0x0) {
    param_2[1] = (long)plVar1;
    lVar2 = *plVar1;
    *param_2 = lVar2;
    *(long **)(lVar2 + 8) = param_2;
    *(long **)param_2[1] = param_2;
    return;
  }
  param_2[1] = (long)param_2;
  *param_2 = (long)param_2;
  *param_1 = param_2;
  return;
}



long FUN_00403d38(long param_1)

{
  if (((*(byte *)(param_1 + 0x20) & 0x1f) == 0) && (0xfff < *(ulong *)(param_1 + 0x20))) {
    return (*(ulong *)(param_1 + 0x20) & 0xfffffffffffff000) - 0x10;
  }
  return (long)(int)((uint)*(ushort *)
                            (__malloc_size_classes +
                            (ulong)(*(uint *)(param_1 + 0x20) >> 6 & 0x3f) * 2) << 4);
}



long FUN_00403d72(long param_1,int param_2,long param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar3 = FUN_00403d38();
  uVar4 = (lVar3 - param_3) - 4;
  uVar6 = uVar4 >> 4;
  lVar5 = *(long *)(param_1 + 0x10) + 0x10 + param_2 * lVar3;
  lVar3 = lVar5 + -4 + lVar3;
  param_4 = param_4 & 0xff;
  if (*(char *)(lVar5 + -3) != '\0') {
    param_4 = (uint)(byte)((char)*(undefined2 *)(lVar5 + -2) + 1);
  }
  if (*(char *)(lVar5 + -4) != '\0') {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (((uVar6 < (ulong)(long)(int)param_4) &&
      (uVar4 = uVar4 >> 5 | uVar6, uVar4 = uVar4 | uVar4 >> 2,
      param_4 = param_4 & ((uint)uVar4 | (uint)(uVar4 >> 4)), uVar6 < (ulong)(long)(int)param_4)) &&
     (param_4 = (param_4 - (int)uVar6) - 1, uVar6 < (ulong)(long)(int)param_4)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (param_4 != 0) {
    *(short *)(lVar5 + -2) = (short)param_4;
    *(undefined *)(lVar5 + -3) = 0xe0;
    lVar5 = lVar5 + (int)(param_4 << 4);
    *(undefined *)(lVar5 + -4) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  *(char *)(lVar5 + -3) = (char)param_2;
  *(short *)(lVar5 + -2) = (short)((lVar5 - lVar1) - 0x10U >> 4);
  iVar2 = ((int)lVar3 - (int)lVar5) - (int)param_3;
  if ((iVar2 != 0) && (*(undefined *)(lVar3 + -iVar2) = 0, 4 < iVar2)) {
    *(undefined *)(lVar3 + -5) = 0;
    *(int *)(lVar3 + -4) = iVar2;
    iVar2 = 5;
  }
  *(byte *)(lVar5 + -3) = (char)(iVar2 << 5) + (*(byte *)(lVar5 + -3) & 0x1f);
  return lVar5;
}



ulong FUN_00403e67(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = param_1 + 3U >> 4;
  if (0x9f < param_1 + 3U) {
    uVar3 = uVar3 + 1;
    uVar4 = (uint)((uVar3 & 0xffffffff) >> 2) | (uint)((uVar3 & 0xffffffff) >> 1);
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    iVar1 = (char)(&DAT_00408520)[(uVar4 + 1 & ~uVar4) * 0x76be629 >> 0x1b] * 4;
    iVar2 = iVar1 + -4;
    if (*(ushort *)(__malloc_size_classes + (long)(iVar1 + -3) * 2) < uVar3) {
      iVar2 = iVar1 + -2;
    }
    uVar3 = (ulong)(iVar2 + (uint)(*(ushort *)(__malloc_size_classes + (long)iVar2 * 2) < uVar3));
  }
  return uVar3;
}



void FUN_00403eef(void)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = DAT_0840ba70 + '\x01';
  if (DAT_0840ba70 == -1) {
    puVar2 = &__malloc_context;
    do {
      *(undefined *)(puVar2 + 0x6a) = 0;
      puVar2 = (undefined8 *)((long)puVar2 + 1);
    } while (puVar2 != (undefined8 *)&DAT_0840b700);
    cVar1 = '\x01';
  }
  DAT_0840ba70 = cVar1;
  return;
}



void __malloc_atfork(int param_1)

{
  if (-1 < param_1) {
    if (param_1 != 0) {
      __malloc_lock = 0;
      return;
    }
    __unlock(&__malloc_lock);
    return;
  }
  if (__libc[3] != '\0') {
    __lock(&__malloc_lock);
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x004040b6)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long * __malloc_alloc_meta(void)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_DAT_0840b6e8 == 0) {
    local_28 = (long)&local_28 * 0x41c64e6d;
    for (lVar4 = 0; *(long *)(__libc._8_8_ + lVar4) != 0; lVar4 = lVar4 + 0x10) {
      if (*(long *)(__libc._8_8_ + lVar4) == 0x19) {
        memcpy(&local_28,(void *)(*(long *)(__libc._8_8_ + 8 + lVar4) + 8),8);
      }
    }
    _DAT_0840b6e8 = 1;
    __malloc_context = local_28;
  }
  plVar6 = DAT_0840b6f0;
  if (DAT_0840b6f0 == (long *)0x0) {
    if (_DAT_0840b700 == 0) {
      if (_DAT_0840b708 == 0) {
        if (DAT_0840ba78 == -1) {
LAB_004040f3:
          lVar4 = 2L << ((byte)DAT_0840b710 & 0x3f);
          pvVar2 = mmap((void *)0x0,lVar4 << 0xc,0,0x22,-1,0);
          if (pvVar2 == (void *)0xffffffffffffffff) goto LAB_00404201;
          DAT_0840b728 = (long *)((long)pvVar2 + 0x1000);
          _DAT_0840b708 = lVar4 + -1;
          DAT_0840b710 = DAT_0840b710 + 1;
          goto LAB_00404148;
        }
        if (DAT_0840ba78 == 0) {
          syscall();
          syscall();
LAB_0040407b:
          DAT_0840ba78 = -1;
          goto LAB_004040f3;
        }
        syscall();
        if (DAT_0840ba78 != -0xff4) goto LAB_0040407b;
        plVar5 = (long *)0xfffffffffffff00c;
        _DAT_0840b708 = 1;
        DAT_0840ba78 = 0xc;
      }
      else {
LAB_00404148:
        plVar5 = DAT_0840b728;
        if (((((ulong)DAT_0840b728 & 0xfff) == 0) &&
            (iVar1 = mprotect(DAT_0840b728,0x1000,3), iVar1 != 0)) &&
           (piVar3 = __errno_location(), *piVar3 != 0x26)) goto LAB_00404201;
      }
      DAT_0840b728 = plVar5 + 0x200;
      _DAT_0840b708 = _DAT_0840b708 + -1;
      plVar6 = plVar5;
      if (DAT_0840b720 != (long *)0x0) {
        DAT_0840b720[1] = (long)plVar5;
        plVar6 = _DAT_0840b718;
      }
      _DAT_0840b718 = plVar6;
      DAT_0840b720 = plVar5;
      *plVar5 = __malloc_context;
      *(undefined4 *)(DAT_0840b720 + 2) = 0x65;
      _DAT_0840b700 = 0x65;
      DAT_0840b6f8 = DAT_0840b720 + 3;
    }
    _DAT_0840b700 = _DAT_0840b700 + -1;
    plVar6 = DAT_0840b6f8;
    DAT_0840b6f8 = DAT_0840b6f8 + 5;
  }
  else {
    plVar5 = (long *)DAT_0840b6f0[1];
    if (DAT_0840b6f0 == plVar5) {
      DAT_0840b6f0 = (long *)0x0;
    }
    else {
      *(long **)(*DAT_0840b6f0 + 8) = plVar5;
      *plVar5 = *plVar6;
      if (plVar6 == DAT_0840b6f0) {
        DAT_0840b6f0 = (long *)plVar6[1];
      }
    }
  }
  plVar6[1] = 0;
  *plVar6 = 0;
LAB_00404201:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar6;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int FUN_00404222(uint param_1,long param_2)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined auVar4 [16];
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  char cVar13;
  long *plVar14;
  long *plVar15;
  undefined *puVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  bool bVar24;
  
  bVar5 = 0;
  uVar21 = (ulong)(int)param_1;
  lVar12 = uVar21 + 10;
  plVar15 = (long *)(&__malloc_context)[lVar12];
  if (plVar15 != (long *)0x0) {
    uVar17 = *(uint *)(plVar15 + 3);
    if (uVar17 == 0) {
      plVar14 = (long *)plVar15[1];
      if (*(int *)((long)plVar15 + 0x1c) == 0) {
        if (plVar15 == plVar14) {
          (&__malloc_context)[lVar12] = 0;
        }
        else {
          *(long **)(*plVar15 + 8) = plVar14;
          *plVar14 = *plVar15;
          if (plVar15 == (long *)(&__malloc_context)[lVar12]) {
            (&__malloc_context)[lVar12] = plVar15[1];
          }
        }
        plVar15[1] = 0;
        *plVar15 = 0;
        plVar14 = *(long **)(&DAT_0840b730 + uVar21 * 8);
        if (plVar14 == (long *)0x0) goto LAB_004043f0;
      }
      else {
        (&__malloc_context)[lVar12] = plVar14;
      }
      uVar17 = *(uint *)((long)plVar14 + 0x1c);
      if ((uVar17 == (2 << (*(byte *)(plVar14 + 4) & 0x1f)) - 1U) &&
         ((*(byte *)(plVar14 + 4) & 0x20) != 0)) {
        plVar14 = (long *)plVar14[1];
        *(long **)(&DAT_0840b730 + uVar21 * 8) = plVar14;
        uVar17 = *(uint *)((long)plVar14 + 0x1c);
      }
      lVar12 = plVar14[2];
      plVar15 = plVar14;
      if (((2 << (*(byte *)(lVar12 + 8) & 0x1f)) - 1U & uVar17) == 0) {
        plVar15 = (long *)plVar14[1];
        if (plVar14 == plVar15) {
          iVar6 = (*(byte *)(lVar12 + 8) & 0x1f) + 2;
          uVar17 = iVar6 * (uint)*(ushort *)
                                  (__malloc_size_classes +
                                  (ulong)(*(uint *)(plVar15 + 4) >> 6 & 0x3f) * 2) * 0x10 + 0x10;
          while (uVar7 = (uint)*(ushort *)
                                (__malloc_size_classes +
                                (ulong)(*(uint *)(plVar15 + 4) >> 6 & 0x3f) * 2) * 0x10 + uVar17,
                (int)(uVar17 ^ uVar7 - 1) < 0x1000) {
            iVar6 = iVar6 + 1;
            uVar17 = uVar7;
          }
          iVar8 = (*(byte *)(plVar15 + 4) & 0x1f) + 1;
          if (iVar6 < iVar8) {
            iVar8 = iVar6;
          }
          *(byte *)(lVar12 + 8) = (char)iVar8 - 1U & 0x1f | *(byte *)(lVar12 + 8) & 0xe0;
        }
        else {
          *(long **)(&DAT_0840b730 + uVar21 * 8) = plVar15;
        }
      }
      if (*(int *)(plVar15 + 3) != 0) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      iVar6 = 2 << (*(byte *)(plVar15[2] + 8) & 0x1f);
      do {
        uVar17 = *(uint *)((long)plVar15 + 0x1c);
        LOCK();
        puVar1 = (uint *)((long)plVar15 + 0x1c);
        if (uVar17 == *puVar1) {
          *puVar1 = -iVar6 & uVar17;
          uVar7 = uVar17;
        }
        else {
          uVar7 = *puVar1;
        }
        UNLOCK();
      } while (uVar17 != uVar7);
      uVar17 = iVar6 - 1U & uVar17;
      *(uint *)(plVar15 + 3) = uVar17;
      if (uVar17 == 0) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      uVar7 = (*(uint *)(plVar15 + 4) >> 6 & 0x3f) - 7;
      if (uVar7 < 0x20) {
        if ((&DAT_0840ba50)[(int)uVar7] != '\0') {
          (&DAT_0840ba50)[(int)uVar7] = (&DAT_0840ba50)[(int)uVar7] + -1;
        }
      }
    }
    uVar7 = -uVar17 & uVar17;
    *(uint *)(plVar15 + 3) = uVar17 - uVar7;
    if (uVar7 != 0) {
      return (int)(char)(&DAT_00408520)[(-uVar7 & uVar7) * 0x76be629 >> 0x1b];
    }
  }
LAB_004043f0:
  uVar3 = *(ushort *)(__malloc_size_classes + uVar21 * 2);
  puVar9 = (undefined4 *)__malloc_alloc_meta();
  uVar23 = (ulong)(int)((uint)uVar3 << 4);
  if (puVar9 == (undefined4 *)0x0) {
    return -1;
  }
  uVar11 = *(ulong *)(&DAT_0840b8b0 + uVar21 * 8);
  if ((int)param_1 < 9) {
    iVar6 = 0;
    if (uVar11 < (ulong)(long)(int)((uint)(byte)(&DAT_00408550)[uVar21 * 3] << 2)) {
      iVar6 = ~-(uint)(uVar11 < (ulong)(long)(int)((uint)(byte)(&DAT_00408551)[uVar21 * 3] << 2)) +
              2;
    }
    uVar17 = (uint)(byte)(&DAT_00408550)[(long)iVar6 + uVar21 * 3];
  }
  else {
    for (uVar17 = (uint)(byte)(&DAT_00408540)[param_1 & 3];
        ((uVar17 & 1) == 0 && (uVar11 < (ulong)(long)(int)(uVar17 * 4))); uVar17 = (int)uVar17 >> 1)
    {
    }
    for (; 0xfffff < (long)(int)uVar17 * uVar23; uVar17 = (int)uVar17 >> 1) {
    }
  }
  if (uVar17 == 1) {
    uVar20 = uVar23;
    if (uVar23 + 0x10 < 0x801) {
      uVar17 = 2;
      goto LAB_004044bd;
    }
  }
  else {
LAB_004044bd:
    uVar20 = (long)(int)uVar17 * uVar23;
    if (uVar20 + 0x10 < 0x801) {
      lVar12 = uVar20 + 0xc;
      iVar6 = FUN_00403e67(lVar12);
      iVar8 = FUN_00404222(iVar6,lVar12);
      if (-1 < iVar8) {
        puVar10 = (undefined8 *)
                  FUN_00403d72(*(undefined8 *)(&DAT_0840b730 + (long)iVar6 * 8),iVar8,
                               (long)(int)((uint)*(ushort *)
                                                  (__malloc_size_classes + (long)iVar6 * 2) * 0x10 +
                                          -4),DAT_0840b6ec);
        *(ulong *)(puVar9 + 8) = *(ulong *)(puVar9 + 8) & 0xfff;
        puVar16 = (undefined *)((long)puVar10 + 0xc);
        *(byte *)((long)puVar10 + -3) = *(byte *)((long)puVar10 + -3) & 0x1f | 0xc0;
        iVar6 = 0;
        do {
          iVar6 = iVar6 + 1;
          *puVar16 = 0;
          puVar16 = puVar16 + uVar23;
        } while (iVar6 <= (int)uVar17);
        bVar5 = (char)uVar17 - 1;
        goto LAB_00404724;
      }
      goto LAB_00404639;
    }
  }
  uVar7 = param_1 - 7;
  uVar18 = 0;
  if (uVar7 < 0x20) {
    bVar2 = (&DAT_0840ba50)[(int)uVar7];
    if (((&DAT_0840ba30)[(int)uVar7] != 0) &&
       ((int)((uint)DAT_0840ba70 - (uint)(byte)(&DAT_0840ba30)[(int)uVar7]) < 10)) {
      cVar13 = bVar2 + 1;
      if (0x62 < bVar2) {
        cVar13 = -0x6a;
      }
      (&DAT_0840ba50)[(int)uVar7] = cVar13;
    }
    uVar18 = (uint)(99 < bVar2);
  }
  uVar22 = uVar21;
  FUN_00403eef();
  if (((int)param_1 < 0x20) && ((uVar21 & 1) == 0)) {
    uVar11 = uVar11 + *(long *)(&DAT_0840b8b0 + (long)(int)(param_1 + 1) * 8);
  }
  if ((ulong)(long)(int)(uVar17 * 4) <= uVar11) goto LAB_004045b0;
  if (uVar18 == 0) {
    if ((param_1 & 3) == 1) {
      bVar24 = uVar20 < 0x8001;
      uVar7 = 2;
LAB_004045a6:
      if (!bVar24) {
        uVar17 = uVar7;
      }
    }
    else {
      if ((param_1 & 3) == 2) {
        bVar24 = uVar20 < 0x4001;
        uVar7 = 3;
        goto LAB_004045a6;
      }
      if ((param_1 & 3) == 0) {
        if (uVar20 < 0x8001) {
          bVar24 = uVar20 < 0x2001;
          uVar7 = 5;
          goto LAB_004045a6;
        }
        uVar17 = 3;
      }
    }
LAB_004045b0:
    if (((uVar18 != 0) || (7 < uVar17)) ||
       ((uVar21 = param_2 + 0x14 + (ulong)(-(int)param_2 - 0x14U & 0xfff), uVar23 + 0x10 <= uVar21
        && ((uVar21 < 0x4000 || ((ulong)(long)(int)(uVar17 * 2) <= uVar11)))))) goto LAB_004045b9;
    uVar17 = 1;
  }
  else {
LAB_004045b9:
    uVar21 = (long)(int)uVar17 * uVar23 + 0x10 +
             (ulong)(-(int)((long)(int)uVar17 * uVar23) - 0x10U & 0xfff);
  }
  puVar10 = (undefined8 *)mmap((void *)0x0,uVar21,3,0x22,-1,0);
  if (puVar10 != (undefined8 *)0xffffffffffffffff) {
    *(ulong *)(puVar9 + 8) =
         uVar21 & 0xfffffffffffff000 | (ulong)((uint)*(undefined8 *)(puVar9 + 8) & 0xfff);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar23;
    DAT_0840b6ec = DAT_0840b6ec + 1;
    iVar6 = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0xff0)) / auVar4,0) + -1;
    if ((int)uVar17 <= iVar6) {
      iVar6 = uVar17 - 1;
    }
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    bVar5 = (byte)iVar6;
    uVar21 = uVar22;
LAB_00404724:
    *(long *)(&DAT_0840b8b0 + uVar21 * 8) =
         *(long *)(&DAT_0840b8b0 + uVar21 * 8) + (long)(int)uVar17;
    *(undefined8 **)(puVar9 + 4) = puVar10;
    puVar9[6] = (2 << (bVar5 & 0x1f)) + -1;
    puVar9[7] = ((2 << ((char)uVar17 - 1U & 0x1f)) - puVar9[6]) + -1;
    *puVar10 = puVar9;
    *(byte *)(*(long *)(puVar9 + 4) + 8) =
         bVar5 & 0x1f | *(byte *)(*(long *)(puVar9 + 4) + 8) & 0xe0;
    *(ushort *)(puVar9 + 8) =
         (ushort)((param_1 & 0x3f) << 6) | (short)uVar17 - 1U & 0x1f | 0x20 |
         (ushort)puVar9[8] & 0xf000;
    puVar9[6] = puVar9[6] + -1;
    FUN_00403d00(&DAT_0840b730 + uVar21 * 8,puVar9);
    return 0;
  }
LAB_00404639:
  puVar19 = puVar9;
  for (lVar12 = 10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar19 = 0;
    puVar19 = puVar19 + (ulong)bVar5 * -2 + 1;
  }
  FUN_00403d00(&DAT_0840b6f0,puVar9);
  return -1;
}



undefined  [16] __libc_malloc_impl(ulong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  long *__addr;
  long lVar5;
  ulong uVar6;
  ulong in_R10;
  int iVar7;
  undefined auVar8 [16];
  
  if (0x7fffffffffffeffe < param_1) {
    piVar4 = __errno_location();
    *piVar4 = 0xc;
    goto LAB_004049b1;
  }
  if (0x1ffeb < param_1) {
    __addr = (long *)mmap((void *)0x0,param_1 + 0x14,3,0x22,-1,0);
    if (__addr != (long *)0xffffffffffffffff) {
      if (__libc[3] != '\0') {
        __lock(&__malloc_lock);
      }
      FUN_00403eef();
      lVar5 = __malloc_alloc_meta();
      if (lVar5 == 0) {
        __unlock(&__malloc_lock);
        munmap(__addr,param_1 + 0x14);
        goto LAB_004049b1;
      }
      *(long **)(lVar5 + 0x10) = __addr;
      iVar7 = 0;
      *__addr = lVar5;
      *(undefined4 *)(lVar5 + 0x1c) = 0;
      DAT_0840b6ec = DAT_0840b6ec + 1;
      *(ulong *)(lVar5 + 0x20) = param_1 + 0x1013 & 0xfffffffffffff000 | 0xfe0;
      *(undefined4 *)(lVar5 + 0x18) = 0;
      goto LAB_00404983;
    }
    goto LAB_004049b1;
  }
  uVar2 = FUN_00403e67();
  uVar6 = (ulong)(int)uVar2;
  if (__libc[3] != '\0') {
    __lock(&__malloc_lock);
  }
  lVar5 = *(long *)(&DAT_0840b730 + (long)(int)uVar2 * 8);
  if (lVar5 == 0) {
    if ((int)uVar2 < 4) {
LAB_00404931:
      if (lVar5 != 0) goto LAB_00404936;
    }
    else if (((((int)uVar2 < 0x20) && (uVar2 != 6)) && ((uVar6 & 1) == 0)) &&
            (*(long *)(&DAT_0840b8b0 + (long)(int)uVar2 * 8) == 0)) {
      uVar3 = uVar2 | 1;
      uVar6 = *(ulong *)(&DAT_0840b8b0 + (long)(int)uVar3 * 8);
      lVar5 = *(long *)(&DAT_0840b730 + (long)(int)uVar3 * 8);
      if ((lVar5 == 0) || ((*(int *)(lVar5 + 0x18) == 0 && (*(int *)(lVar5 + 0x1c) == 0)))) {
        uVar6 = uVar6 + 3;
      }
      if (0xc < uVar6) {
        uVar3 = uVar2;
      }
      uVar6 = (ulong)(int)uVar3;
      lVar5 = *(long *)(&DAT_0840b730 + (long)(int)uVar3 * 8);
      goto LAB_00404931;
    }
  }
  else {
LAB_00404936:
    uVar2 = *(uint *)(lVar5 + 0x18);
    uVar3 = -uVar2 & uVar2;
    if (uVar3 != 0) {
      *(uint *)(lVar5 + 0x18) = uVar2 - uVar3;
      iVar7 = (int)(char)(&DAT_00408520)[(-uVar3 & uVar3) * 0x76be629 >> 0x1b];
      goto LAB_00404983;
    }
  }
  iVar7 = FUN_00404222(uVar6 & 0xffffffff,param_1);
  if (iVar7 < 0) {
    __unlock(&__malloc_lock);
LAB_004049b1:
    auVar8._8_8_ = 0;
    auVar8._0_8_ = in_R10;
    return auVar8 << 0x40;
  }
  lVar5 = *(long *)(&DAT_0840b730 + uVar6 * 8);
LAB_00404983:
  iVar1 = DAT_0840b6ec;
  __unlock(&__malloc_lock);
  auVar8 = FUN_00403d72(lVar5,iVar7,param_1,iVar1,in_R10);
  return auVar8;
}



bool __malloc_allzerop(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  
  if ((param_1 & 0xf) != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  uVar3 = (ulong)*(ushort *)(param_1 - 2);
  uVar6 = *(byte *)(param_1 - 3) & 0x1f;
  bVar4 = *(byte *)(param_1 - 3) & 0x1f;
  if (*(char *)(param_1 - 4) != '\0') {
    if (*(ushort *)(param_1 - 2) != 0) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    uVar3 = (ulong)*(int *)(param_1 - 8);
    if (*(int *)(param_1 - 8) < 0x10000) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  iVar2 = (int)uVar3;
  lVar7 = param_1 - (long)(iVar2 << 4);
  uVar1 = *(ulong *)(lVar7 + -0x10);
  if (lVar7 + -0x10 != *(long *)(uVar1 + 0x10)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if ((*(byte *)(uVar1 + 0x20) & 0x1f) < uVar6) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if ((*(uint *)(uVar1 + 0x18) >> bVar4 & 1) != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if ((*(uint *)(uVar1 + 0x1c) >> bVar4 & 1) != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (*(long *)(uVar1 & 0xfffffffffffff000) != __malloc_context) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  uVar5 = *(uint *)(uVar1 + 0x20) >> 6 & 0x3f;
  if ((byte)uVar5 < 0x30) {
    if (iVar2 < (int)(*(ushort *)(__malloc_size_classes + (ulong)uVar5 * 2) * uVar6)) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (iVar2 < (int)((uVar6 + 1) *
                     (uint)*(ushort *)
                            (__malloc_size_classes +
                            (ulong)(*(uint *)(uVar1 + 0x20) >> 6 & 0x3f) * 2))) {
LAB_00404a8e:
      if ((0xfff < *(ulong *)(uVar1 + 0x20)) &&
         (((*(ulong *)(uVar1 + 0x20) & 0xfffffffffffff000) >> 4) - 1 < uVar3)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      bVar8 = true;
      uVar6 = *(uint *)(uVar1 + 0x20) >> 6 & 0x3f;
      if ((byte)uVar6 < 0x30) {
        uVar3 = FUN_00403d38();
        bVar8 = uVar3 < (ulong)(long)(int)((uint)*(ushort *)
                                                  (__malloc_size_classes + (ulong)(uVar6 & 0x3f) * 2
                                                  ) << 4);
      }
      return bVar8;
    }
  }
  else if (((ushort)*(uint *)(uVar1 + 0x20) & 0xfc0) == 0xfc0) goto LAB_00404a8e;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void __vm_wait(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00404b6b)
// WARNING: Removing unreachable block (ram,0x00404b70)
// WARNING: Removing unreachable block (ram,0x00404b84)
// WARNING: Removing unreachable block (ram,0x00404b88)

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  int *piVar1;
  void *pvVar2;
  
  if ((__offset & 0xfffU) == 0) {
    if (__len < 0x7fffffffffffffff) {
      if ((__flags & 0x10U) != 0) {
        __vm_wait();
      }
      syscall();
      pvVar2 = (void *)__syscall_ret(9,__len,(long)__prot);
      return pvVar2;
    }
    piVar1 = __errno_location();
    *piVar1 = 0xc;
  }
  else {
    piVar1 = __errno_location();
    *piVar1 = 0x16;
  }
  return (void *)0xffffffffffffffff;
}



int mprotect(void *__addr,size_t __len,int __prot)

{
  int iVar1;
  
  syscall();
  iVar1 = __syscall_ret(10,((long)__addr + __len + 0xfff & 0xfffffffffffff000) -
                           ((ulong)__addr & 0xfffffffffffff000),(long)__prot);
  return iVar1;
}



int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  __vm_wait();
  syscall();
  iVar1 = __syscall_ret(0xb,__len);
  return iVar1;
}



int fstat(int __fd,stat *__buf)

{
  int iVar1;
  
  if (-1 < __fd) {
    iVar1 = fstatat(__fd,"",__buf,0x1000);
    return iVar1;
  }
  iVar1 = __syscall_ret(0xfffffffffffffff7);
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x00404c85)
// WARNING: Removing unreachable block (ram,0x00404c9a)
// WARNING: Removing unreachable block (ram,0x00404cb2)

int fstatat(int __fd,char *__file,stat *__buf,int __flag)

{
  int iVar1;
  long lVar2;
  stat *psVar3;
  long in_FS_OFFSET;
  __dev_t local_d0;
  __ino_t local_c8;
  __nlink_t local_c0;
  undefined8 local_b8;
  __gid_t local_b0;
  __dev_t local_a8;
  __off_t local_a0;
  __blksize_t local_98;
  __blkcnt_t local_90;
  __time_t local_88;
  long local_80;
  __time_t local_78;
  long local_70;
  __time_t local_68;
  long local_60;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((__flag == 0x1000) && (-1 < __fd)) {
    if (*__file == '\0') {
      syscall();
      iVar1 = 5;
      __file = (char *)&local_d0;
      goto LAB_00404d29;
    }
  }
  else {
    if (__fd == -100) {
      if (__flag == 0x100) {
LAB_00404cf8:
        iVar1 = 6;
      }
      else {
LAB_00404d03:
        if (__flag != 0) goto LAB_00404d16;
        iVar1 = 4;
      }
      syscall();
      __file = (char *)&local_d0;
      goto LAB_00404d29;
    }
    if (__flag == 0x100) {
      if (*__file == '/') goto LAB_00404cf8;
    }
    else if (*__file == '/') goto LAB_00404d03;
  }
LAB_00404d16:
  iVar1 = 0x106;
  syscall();
LAB_00404d29:
  if (iVar1 == 0) {
    psVar3 = __buf;
    for (lVar2 = 0x24; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined4 *)&psVar3->st_dev = 0;
      psVar3 = (stat *)((long)&psVar3->st_dev + 4);
    }
    __buf->st_dev = local_d0;
    __buf->st_ino = local_c8;
    __buf->st_nlink = local_c0;
    __buf->st_mode = (undefined4)local_b8;
    __buf->st_uid = local_b8._4_4_;
    __buf->st_gid = local_b0;
    __buf->st_rdev = local_a8;
    __buf->st_size = local_a0;
    __buf->st_blksize = local_98;
    __buf->st_blocks = local_90;
    (__buf->st_atim).tv_sec = local_88;
    (__buf->st_atim).tv_nsec = local_80;
    (__buf->st_mtim).tv_sec = local_78;
    (__buf->st_mtim).tv_nsec = local_70;
    (__buf->st_ctim).tv_sec = local_68;
    (__buf->st_ctim).tv_nsec = local_60;
  }
  iVar1 = __syscall_ret(iVar1,__file);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar1;
}



int fprintf(FILE *__stream,char *__format,...)

{
  char in_AL;
  int iVar1;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM5_Da;
  undefined4 in_XMM6_Da;
  undefined4 in_XMM7_Da;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Da;
    local_78 = in_XMM1_Da;
    local_68 = in_XMM2_Da;
    local_58 = in_XMM3_Da;
    local_48 = in_XMM4_Da;
    local_38 = in_XMM5_Da;
    local_28 = in_XMM6_Da;
    local_18 = in_XMM7_Da;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000008;
  local_d8 = 0x10;
  local_c8 = local_b8;
  local_d4 = 0x30;
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  iVar1 = vfprintf(__stream,__format,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar1;
}



ulong __fwritex(void *param_1,ulong param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  
  if ((*(long *)(param_3 + 0x20) == 0) && (iVar1 = __towrite(param_3), iVar1 != 0)) {
    param_2 = 0;
  }
  else {
    if ((ulong)(*(long *)(param_3 + 0x20) - *(long *)(param_3 + 0x28)) < param_2) {
                    // WARNING: Could not recover jumptable at 0x00404ede. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar2 = (**(code **)(param_3 + 0x48))(param_3,param_1,param_2);
      return uVar2;
    }
    uVar2 = param_2;
    __n = param_2;
    if (-1 < *(int *)(param_3 + 0x90)) {
      do {
        uVar3 = uVar2;
        if (uVar3 == 0) goto LAB_00404f16;
        uVar2 = uVar3 - 1;
      } while (*(char *)((long)param_1 + (uVar3 - 1)) != '\n');
      uVar2 = (**(code **)(param_3 + 0x48))(param_3,param_1,uVar3);
      if (uVar2 < uVar3) {
        return uVar2;
      }
      param_1 = (void *)((long)param_1 + uVar3);
      __n = param_2 - uVar3;
    }
LAB_00404f16:
    memcpy(*(void **)(param_3 + 0x28),param_1,__n);
    *(long *)(param_3 + 0x28) = *(long *)(param_3 + 0x28) + __n;
  }
  return param_2;
}



size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = __size * __n;
  if (__size == 0) {
    __n = 0;
  }
  if (*(int *)((long)&__s->_lock + 4) < 0) {
    uVar2 = __fwritex(__ptr,lVar3,__s);
  }
  else {
    iVar1 = __lockfile(__s);
    uVar2 = __fwritex(__ptr,lVar3,__s);
    if (iVar1 != 0) {
      __unlockfile(__s);
    }
  }
  if (lVar3 - uVar2 != 0) {
    __n = uVar2 / __size;
  }
  return __n;
}



int printf(char *__format,...)

{
  char in_AL;
  int iVar1;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM5_Da;
  undefined4 in_XMM6_Da;
  undefined4 in_XMM7_Da;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Da;
    local_78 = in_XMM1_Da;
    local_68 = in_XMM2_Da;
    local_58 = in_XMM3_Da;
    local_48 = in_XMM4_Da;
    local_38 = in_XMM5_Da;
    local_28 = in_XMM6_Da;
    local_18 = in_XMM7_Da;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_d8 = 8;
  local_d4 = 0x30;
  local_b0 = in_RSI;
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  iVar1 = vfprintf((FILE *)__stdout_FILE,__format,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar1;
}



void setbuf(FILE *__stream,char *__buf)

{
  setvbuf(__stream,__buf,(uint)(__buf == (char *)0x0) * 2,0x400);
  return;
}



int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  *(undefined4 *)&__stream->_offset = 0xffffffff;
  if (__modes == 2) {
    __stream->_markers = (_IO_marker *)0x0;
  }
  else {
    if (1 < (uint)__modes) {
      return -1;
    }
    if ((__buf != (char *)0x0) && (7 < __n)) {
      __stream->_IO_save_end = __buf + 8;
      __stream->_markers = (_IO_marker *)(__n - 8);
    }
    if ((__modes == 1) && (__stream->_markers != (_IO_marker *)0x0)) {
      *(undefined4 *)&__stream->_offset = 10;
    }
  }
  __stream->_flags = __stream->_flags | 0x40;
  return 0;
}



void FUN_0040510c(longdouble *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  uint *puVar4;
  short *psVar5;
  ushort *puVar6;
  char *pcVar7;
  byte *pbVar8;
  ulong *puVar9;
  double *pdVar10;
  longdouble *plVar11;
  
  switch(param_2) {
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
    uVar1 = *param_3;
    if (uVar1 < 0x30) {
      puVar9 = (ulong *)((ulong)uVar1 + *(long *)(param_3 + 4));
      *param_3 = uVar1 + 8;
    }
    else {
      puVar9 = *(ulong **)(param_3 + 2);
      *(ulong **)(param_3 + 2) = puVar9 + 1;
    }
    uVar2 = *puVar9;
    break;
  case 10:
    uVar1 = *param_3;
    if (uVar1 < 0x30) {
      piVar3 = (int *)((ulong)uVar1 + *(long *)(param_3 + 4));
      *param_3 = uVar1 + 8;
    }
    else {
      piVar3 = *(int **)(param_3 + 2);
      *(int **)(param_3 + 2) = piVar3 + 2;
    }
    uVar2 = (ulong)*piVar3;
    break;
  case 0xb:
    uVar1 = *param_3;
    if (uVar1 < 0x30) {
      puVar4 = (uint *)((ulong)uVar1 + *(long *)(param_3 + 4));
      *param_3 = uVar1 + 8;
    }
    else {
      puVar4 = *(uint **)(param_3 + 2);
      *(uint **)(param_3 + 2) = puVar4 + 2;
    }
    uVar2 = (ulong)*puVar4;
    break;
  case 0xf:
    uVar1 = *param_3;
    if (uVar1 < 0x30) {
      psVar5 = (short *)((ulong)uVar1 + *(long *)(param_3 + 4));
      *param_3 = uVar1 + 8;
    }
    else {
      psVar5 = *(short **)(param_3 + 2);
      *(short **)(param_3 + 2) = psVar5 + 4;
    }
    uVar2 = (ulong)*psVar5;
    break;
  case 0x10:
    uVar1 = *param_3;
    if (uVar1 < 0x30) {
      puVar6 = (ushort *)((ulong)uVar1 + *(long *)(param_3 + 4));
      *param_3 = uVar1 + 8;
    }
    else {
      puVar6 = *(ushort **)(param_3 + 2);
      *(ushort **)(param_3 + 2) = puVar6 + 4;
    }
    uVar2 = (ulong)*puVar6;
    break;
  case 0x11:
    uVar1 = *param_3;
    if (uVar1 < 0x30) {
      pcVar7 = (char *)((ulong)uVar1 + *(long *)(param_3 + 4));
      *param_3 = uVar1 + 8;
    }
    else {
      pcVar7 = *(char **)(param_3 + 2);
      *(char **)(param_3 + 2) = pcVar7 + 8;
    }
    uVar2 = (ulong)*pcVar7;
    break;
  case 0x12:
    uVar1 = *param_3;
    if (uVar1 < 0x30) {
      pbVar8 = (byte *)((ulong)uVar1 + *(long *)(param_3 + 4));
      *param_3 = uVar1 + 8;
    }
    else {
      pbVar8 = *(byte **)(param_3 + 2);
      *(byte **)(param_3 + 2) = pbVar8 + 8;
    }
    uVar2 = (ulong)*pbVar8;
    break;
  case 0x19:
    uVar1 = param_3[1];
    if (uVar1 < 0xb0) {
      pdVar10 = (double *)((ulong)uVar1 + *(long *)(param_3 + 4));
      param_3[1] = uVar1 + 0x10;
    }
    else {
      pdVar10 = *(double **)(param_3 + 2);
      *(double **)(param_3 + 2) = pdVar10 + 1;
    }
    *param_1 = (longdouble)*pdVar10;
    return;
  case 0x1a:
    plVar11 = (longdouble *)(*(long *)(param_3 + 2) + 0xfU & 0xfffffffffffffff0);
    *(long *)(param_3 + 2) = (long)plVar11 + 0x10;
    *param_1 = *plVar11;
    return;
  default:
    return;
  }
  *(ulong *)param_1 = uVar2;
  return;
}



char * FUN_00405280(ulong param_1,char *param_2)

{
  undefined auVar1 [16];
  
  for (; param_1 != 0; param_1 = param_1 / 10) {
    param_2 = param_2 + -1;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1;
    *param_2 = SUB161(auVar1 % ZEXT816(10),0) + '0';
  }
  return param_2;
}



void FUN_004052a0(char **param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  while( true ) {
    uVar3 = (int)**param_1 - 0x30;
    if (9 < uVar3) break;
    if (uVar2 < 0xccccccd) {
      uVar1 = 0xffffffff;
      if ((int)uVar3 <= (int)(uVar2 * -10 + 0x7fffffff)) {
        uVar1 = uVar3 + uVar2 * 10;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
    uVar2 = uVar1;
    *param_1 = *param_1 + 1;
  }
  return;
}



void FUN_004052db(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*param_1 & 0x20) == 0) {
    __fwritex(param_2,param_3,param_1);
    return;
  }
  return;
}



void FUN_004052f2(undefined8 param_1,char param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  long in_FS_OFFSET;
  undefined local_130 [256];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_5 & 0x12000) == 0) && (param_4 < param_3)) {
    uVar1 = param_3 - param_4;
    uVar2 = 0x100;
    if ((int)uVar1 < 0x101) {
      uVar2 = uVar1;
    }
    memset(local_130,(int)param_2,(long)(int)uVar2);
    for (uVar2 = uVar1; 0xff < (int)uVar2; uVar2 = uVar2 - 0x100) {
      FUN_004052db(param_1,local_130,0x100);
    }
    FUN_004052db(param_1,local_130,(long)(int)((uVar1 >> 8) * -0x100 + uVar1));
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_004053aa(undefined8 param_1,int param_2,ulong param_3,uint param_4,uint param_5)

{
  undefined auVar1 [16];
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined *puVar7;
  byte *pbVar8;
  byte bVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  byte *pbVar22;
  long lVar23;
  uint *puVar24;
  uint *puVar25;
  long in_FS_OFFSET;
  bool bVar26;
  longdouble in_ST0;
  longdouble lVar27;
  longdouble lVar28;
  uint local_1d48;
  char *local_1d38;
  undefined *local_1d28;
  int local_1d18;
  uint local_1d14 [1770];
  uint local_16c [68];
  byte local_5a;
  byte local_59 [8];
  byte local_51;
  byte local_50 [16];
  long local_40;
  
  param_3 = param_3 & 0xffffffff;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1d18 = 0;
  iVar2 = __signbitl();
  if (iVar2 == 0) {
    local_1d48 = 1;
    local_1d38 = "+0X 0X-0x+0x 0x";
    if ((param_4 >> 0xb & 1) == 0) {
      local_1d48 = param_4 & 1;
      local_1d38 = "0X+0X 0X-0x+0x 0x";
      if ((param_4 & 1) != 0) {
        local_1d38 = " 0X-0x+0x 0x";
      }
    }
  }
  else {
    local_1d48 = 1;
    local_1d38 = "-0X+0X 0X-0x+0x 0x";
  }
  iVar2 = __fpclassifyl();
  if (iVar2 < 2) {
    if ((param_5 & 0x20) == 0) {
      pbVar4 = &DAT_0040863b;
    }
    else {
      pbVar4 = &DAT_00408647;
    }
    iVar2 = local_1d48 + 3;
    FUN_004052f2(param_1,0x20,param_2,iVar2,param_4 & 0xfffeffff);
    FUN_004052db(param_1,local_1d38,local_1d48);
    lVar14 = 3;
  }
  else {
    frexpl(&local_1d18);
    in_ST0 = in_ST0 + in_ST0;
    lVar27 = (longdouble)0;
    if (in_ST0 != lVar27) {
      local_1d18 = local_1d18 + -1;
    }
    uVar20 = param_5 | 0x20;
    uVar17 = (uint)param_3;
    if (uVar20 != 0x61) {
      if ((int)uVar17 < 0) {
        param_3 = 6;
      }
      iVar2 = (int)param_3;
      if (in_ST0 != lVar27) {
        in_ST0 = in_ST0 * (longdouble)2.684355e+08;
        local_1d18 = local_1d18 + -0x1c;
      }
      puVar16 = local_16c;
      puVar24 = puVar16;
      if (local_1d18 < 0) {
        puVar16 = local_1d14;
        puVar24 = puVar16;
      }
      do {
        puVar25 = puVar16 + 1;
        *puVar16 = (uint)(long)ROUND(in_ST0);
        in_ST0 = (in_ST0 - (longdouble)((long)ROUND(in_ST0) & 0xffffffff)) * (longdouble)1e+09;
        puVar16 = puVar25;
      } while (in_ST0 != lVar27);
      bVar26 = false;
      puVar16 = puVar24;
      for (iVar21 = local_1d18; 0 < iVar21; iVar21 = iVar21 - iVar15) {
        iVar15 = 0x1d;
        if (iVar21 < 0x1e) {
          iVar15 = iVar21;
        }
        uVar10 = 0;
        puVar11 = puVar25;
        while (puVar11 = puVar11 + -1, puVar16 <= puVar11) {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = ((ulong)*puVar11 << ((byte)iVar15 & 0x3f)) + uVar10;
          *puVar11 = SUB164(auVar1 % ZEXT816(1000000000),0);
          uVar10 = (ulong)SUB164(auVar1 / ZEXT816(1000000000),0);
        }
        if ((uint)uVar10 != 0) {
          puVar16[-1] = (uint)uVar10;
          puVar16 = puVar16 + -1;
        }
        for (; (puVar16 < puVar25 && (puVar25[-1] == 0)); puVar25 = puVar25 + -1) {
        }
        bVar26 = true;
      }
      if (bVar26) {
        local_1d18 = iVar21;
      }
      uVar10 = 0;
      bVar26 = false;
      uVar19 = (ulong)((iVar2 + 0x1dU) / 9 + 1);
      for (iVar21 = local_1d18; iVar21 < 0; iVar21 = iVar21 + (int)uVar10) {
        uVar10 = 9;
        if (-10 < iVar21) {
          uVar10 = (ulong)(uint)-iVar21;
        }
        uVar17 = 0;
        bVar9 = (byte)uVar10;
        for (puVar11 = puVar16; puVar11 < puVar25; puVar11 = puVar11 + 1) {
          uVar3 = *puVar11;
          *puVar11 = uVar17 + (uVar3 >> (bVar9 & 0x1f));
          uVar17 = (uVar3 & (1 << (bVar9 & 0x1f)) - 1U) * (1000000000 >> (bVar9 & 0x1f));
        }
        if (*puVar16 == 0) {
          puVar16 = puVar16 + 1;
        }
        if (uVar17 != 0) {
          *puVar25 = uVar17;
          puVar25 = puVar25 + 1;
        }
        puVar11 = puVar24;
        if (uVar20 != 0x66) {
          puVar11 = puVar16;
        }
        if ((long)uVar19 < (long)puVar25 - (long)puVar11 >> 2) {
          puVar25 = puVar11 + uVar19;
        }
        bVar26 = true;
      }
      if (bVar26) {
        local_1d18 = iVar21;
      }
      uVar19 = 0;
      if (puVar16 < puVar25) {
        uVar17 = (int)((long)puVar24 - (long)puVar16 >> 2) * 9;
        for (uVar3 = 10; uVar19 = (ulong)uVar17, uVar3 <= *puVar16; uVar3 = uVar3 * 10) {
          uVar17 = uVar17 + 1;
        }
      }
      iVar21 = (iVar2 - (uint)(uVar20 != 0x66) * (int)uVar19) -
               ((uint)(iVar2 != 0) & (uint)CONCAT71((int7)(uVar10 >> 8),uVar20 == 0x67));
      if ((long)iVar21 < (((long)puVar25 - (long)puVar24 >> 2) + -1) * 9) {
        iVar21 = iVar21 + 0x24000;
        uVar17 = 10;
        iVar15 = iVar21 % 9;
        puVar11 = puVar24 + (long)(iVar21 / 9) + -0x3fff;
        while (iVar15 = iVar15 + 1, iVar15 != 9) {
          uVar17 = uVar17 * 10;
        }
        uVar3 = *puVar11;
        uVar13 = uVar3 % uVar17;
        lVar27 = _DAT_00408970;
        if (uVar13 == 0) {
          if (puVar25 != puVar11 + 1) {
            if (((ulong)uVar3 / (ulong)uVar17 & 1) == 0) goto LAB_004059a9;
            goto LAB_004059e9;
          }
        }
        else {
          if (((ulong)uVar3 / (ulong)uVar17 & 1) == 0) {
LAB_004059a9:
            if (((uVar17 != 1000000000) || (puVar11 <= puVar16)) ||
               ((*(byte *)(puVar11 + -1) & 1) == 0)) {
              lVar27 = (longdouble)1.844674e+19;
            }
          }
          if (uVar13 < (uint)((int)uVar17 >> 1)) {
LAB_004059e9:
            lVar28 = (longdouble)0.5;
          }
          else if (((int)uVar17 >> 1 == uVar13) && (puVar25 == puVar11 + 1)) {
            lVar28 = (longdouble)1;
          }
          else {
            lVar28 = (longdouble)1.5;
          }
          if ((local_1d48 != 0) && (*local_1d38 == '-')) {
            lVar27 = -lVar27;
            lVar28 = -lVar28;
          }
          if (lVar28 + lVar27 == lVar27) {
            *puVar11 = uVar3 - uVar13;
          }
          else {
            *puVar11 = uVar17 + (uVar3 - uVar13);
            while (999999999 < *puVar11) {
              puVar12 = puVar11 + -1;
              *puVar11 = 0;
              if (puVar12 < puVar16) {
                puVar16 = puVar16 + -1;
                *puVar16 = 0;
              }
              *puVar12 = *puVar12 + 1;
              puVar11 = puVar12;
            }
            uVar17 = (int)((long)puVar24 - (long)puVar16 >> 2) * 9;
            for (uVar3 = 10; uVar19 = (ulong)uVar17, uVar3 <= *puVar16; uVar3 = uVar3 * 10) {
              uVar17 = uVar17 + 1;
            }
          }
        }
        if (puVar11 + 1 < puVar25) {
          puVar25 = puVar11 + 1;
        }
      }
      for (; (puVar16 < puVar25 && (puVar25[-1] == 0)); puVar25 = puVar25 + -1) {
      }
      iVar21 = (int)uVar19;
      if (uVar20 == 0x67) {
        if (iVar2 == 0) {
          iVar2 = 1;
        }
        if ((iVar21 < iVar2) && (-5 < iVar21)) {
          param_5 = param_5 - 1;
          uVar17 = iVar2 - (iVar21 + 1);
        }
        else {
          param_5 = param_5 - 2;
          uVar17 = iVar2 - 1;
        }
        param_3 = (ulong)uVar17;
        uVar20 = param_4 & 8;
        if ((param_4 & 8) == 0) {
          if ((puVar16 < puVar25) && (puVar25[-1] != 0)) {
            for (uVar10 = 10; (int)((ulong)puVar25[-1] % uVar10) == 0;
                uVar10 = (ulong)(uint)((int)uVar10 * 10)) {
              uVar20 = uVar20 + 1;
            }
          }
          else {
            uVar20 = 9;
          }
          uVar10 = (ulong)(int)uVar17;
          lVar14 = (((long)puVar25 - (long)puVar24 >> 2) + -1) * 9;
          param_3 = (iVar21 + lVar14) - (long)(int)uVar20;
          if ((long)param_3 < 0) {
            param_3 = 0;
          }
          if ((long)uVar10 < (long)param_3) {
            param_3 = uVar10;
          }
          uVar6 = lVar14 - (int)uVar20;
          if ((long)uVar6 < 0) {
            uVar6 = 0;
          }
          if ((long)uVar10 < (long)uVar6) {
            uVar6 = uVar10;
          }
          param_3 = param_3 & 0xffffffff;
          if ((param_5 | 0x20) == 0x66) {
            param_3 = uVar6 & 0xffffffff;
          }
        }
      }
      uVar17 = (uint)param_3;
      if (uVar17 == 0) {
        iVar2 = 1;
        uVar20 = param_4 >> 3 & 1;
      }
      else {
        if (0x7ffffffd < (int)uVar17) goto LAB_00405678;
        iVar2 = uVar17 + 1;
        uVar20 = 1;
      }
      iVar2 = uVar20 + iVar2;
      iVar15 = 0x7fffffff - iVar2;
      if ((param_5 | 0x20) == 0x66) {
        if (iVar21 <= iVar15) {
          if (0 < iVar21) {
            iVar2 = iVar2 + iVar21;
          }
LAB_00405bfa:
          if (iVar2 <= (int)(0x7fffffff - local_1d48)) {
            iVar2 = local_1d48 + iVar2;
            FUN_004052f2(param_1,0x20,param_2,iVar2,param_4);
            FUN_004052db(param_1,local_1d38,local_1d48);
            FUN_004052f2(param_1,0x30,param_2,iVar2,param_4 ^ 0x10000);
            if ((param_5 | 0x20) == 0x66) {
              puVar11 = puVar16;
              if (puVar24 <= puVar16) {
                puVar16 = puVar24;
                puVar11 = puVar24;
              }
              for (; puVar16 <= puVar24; puVar16 = puVar16 + 1) {
                pbVar4 = (byte *)FUN_00405280(*puVar16,local_50);
                pbVar8 = pbVar4;
                if (puVar16 == puVar11) {
                  if (pbVar4 == local_50) {
                    local_51 = 0x30;
                    pbVar4 = &local_51;
                  }
                }
                else {
                  while (local_59 < pbVar8) {
                    pbVar8 = pbVar8 + -1;
                    *pbVar8 = 0x30;
                  }
                  lVar14 = (long)local_59 - (long)pbVar4;
                  if (pbVar4 < local_59) {
                    lVar14 = 0;
                  }
                  pbVar4 = pbVar4 + lVar14;
                }
                FUN_004052db(param_1,pbVar4,(long)local_50 - (long)pbVar4);
              }
              lVar14 = (long)puVar24 + (4 - (long)puVar11);
              if ((long)puVar24 + 1U < (long)puVar11 - 3U) {
                lVar14 = 0;
              }
              puVar11 = (uint *)((long)puVar11 + lVar14);
              uVar20 = param_4 & 8 | uVar17;
              if (uVar20 != 0) {
                FUN_004052db(param_1,&DAT_0040864b,1);
                for (uVar20 = uVar17; (puVar11 < puVar25 && (0 < (int)uVar20)); uVar20 = uVar20 - 9)
                {
                  pbVar8 = (byte *)FUN_00405280(*puVar11,local_50);
                  pbVar4 = pbVar8;
                  while (local_59 < pbVar4) {
                    pbVar4 = pbVar4 + -1;
                    *pbVar4 = 0x30;
                  }
                  lVar14 = (long)local_59 - (long)pbVar8;
                  if (pbVar8 < local_59) {
                    lVar14 = 0;
                  }
                  uVar17 = 9;
                  if ((int)uVar20 < 10) {
                    uVar17 = uVar20;
                  }
                  puVar11 = puVar11 + 1;
                  FUN_004052db(param_1,pbVar8 + lVar14,(long)(int)uVar17);
                }
              }
              FUN_004052f2(param_1,0x30,uVar20 + 9,9,0);
            }
            else {
              puVar24 = puVar16;
              if (puVar25 <= puVar16) {
                puVar25 = puVar16 + 1;
              }
              while ((uVar17 = (uint)param_3, puVar24 < puVar25 && (-1 < (int)uVar17))) {
                pbVar4 = (byte *)FUN_00405280(*puVar24,local_50);
                if (pbVar4 == local_50) {
                  local_51 = 0x30;
                  pbVar4 = &local_51;
                }
                pbVar8 = pbVar4;
                if (puVar24 == puVar16) {
                  FUN_004052db(param_1,pbVar4,1);
                  if ((param_4 & 8 | uVar17) != 0) {
                    FUN_004052db(param_1,&DAT_0040864b,1);
                  }
                  pbVar4 = pbVar4 + 1;
                }
                else {
                  while (local_59 < pbVar8) {
                    pbVar8 = pbVar8 + -1;
                    *pbVar8 = 0x30;
                  }
                  lVar14 = (long)local_59 - (long)pbVar4;
                  if (pbVar4 < local_59) {
                    lVar14 = 0;
                  }
                  pbVar4 = pbVar4 + lVar14;
                }
                lVar23 = (long)local_50 - (long)pbVar4;
                lVar14 = (long)(int)uVar17;
                if (lVar23 < (int)uVar17) {
                  lVar14 = lVar23;
                }
                FUN_004052db(param_1,pbVar4,lVar14);
                puVar24 = puVar24 + 1;
                param_3 = (ulong)(uVar17 - (int)lVar23);
              }
              FUN_004052f2(param_1,0x30,uVar17 + 0x12,0x12,0);
              FUN_004052db(param_1,local_1d28,local_59 + -(long)local_1d28);
            }
            FUN_004052f2(param_1,0x20,param_2,iVar2,param_4 ^ 0x2000);
            if (param_2 <= iVar2) {
              param_2 = iVar2;
            }
            goto LAB_00405f08;
          }
        }
      }
      else {
        pbVar4 = local_59;
        iVar18 = -iVar21;
        if (0 < iVar21) {
          iVar18 = iVar21;
        }
        puVar7 = (undefined *)FUN_00405280((long)iVar18,pbVar4);
        while ((long)pbVar4 - (long)puVar7 < 2) {
          puVar7 = puVar7 + -1;
          *puVar7 = 0x30;
        }
        local_1d28 = puVar7 + -2;
        puVar7[-2] = (char)param_5;
        puVar7[-1] = ((char)(uVar19 >> 0x18) >> 7 & 2U) + 0x2b;
        if ((long)(local_59 + -(long)local_1d28) <= (long)iVar15) {
          iVar2 = iVar2 + (int)(local_59 + -(long)local_1d28);
          goto LAB_00405bfa;
        }
      }
LAB_00405678:
      param_2 = -1;
      goto LAB_00405f08;
    }
    if ((param_5 & 0x20) != 0) {
      local_1d38 = local_1d38 + 9;
    }
    iVar21 = local_1d48 + 2;
    if (uVar17 < 0xf) {
      lVar27 = (longdouble)8.0;
      iVar2 = 0xe - uVar17;
      do {
        lVar27 = lVar27 * (longdouble)16.0;
        bVar26 = iVar2 != 0;
        iVar2 = iVar2 + -1;
      } while (bVar26);
      if (*local_1d38 == '-') {
        in_ST0 = -((-in_ST0 - lVar27) + lVar27);
      }
      else {
        in_ST0 = (in_ST0 + lVar27) - lVar27;
      }
    }
    pbVar8 = local_59;
    iVar2 = -local_1d18;
    if (0 < local_1d18) {
      iVar2 = local_1d18;
    }
    pbVar5 = (byte *)FUN_00405280((long)iVar2,pbVar8);
    if (pbVar5 == pbVar8) {
      local_5a = 0x30;
      pbVar5 = &local_5a;
    }
    pbVar4 = pbVar5 + -2;
    pbVar5[-1] = ((byte)(local_1d18 >> 0x1f) & 2) + 0x2b;
    pbVar5[-2] = (byte)param_5 + 0xf;
    pbVar5 = pbVar8;
    do {
      lVar27 = ROUND(in_ST0);
      in_ST0 = (in_ST0 - (longdouble)(int)lVar27) * _DAT_00408980;
      *pbVar5 = "0123456789ABCDEF"[(int)lVar27] | (byte)param_5 & 0x20;
      pbVar22 = pbVar5 + 1;
      if (pbVar5 == pbVar8) {
        if (((in_ST0 == (longdouble)0) && ((int)uVar17 < 1)) && ((param_4 & 8) == 0)) break;
        pbVar5[1] = 0x2e;
        pbVar22 = pbVar5 + 2;
      }
      pbVar5 = pbVar22;
      pbVar22 = pbVar5;
    } while (in_ST0 != (longdouble)0);
    lVar14 = (long)pbVar8 - (long)pbVar4;
    if ((0x7ffffffd - lVar14) - (long)iVar21 < (long)(int)uVar17) goto LAB_00405678;
    lVar23 = (long)pbVar22 - (long)pbVar8;
    if ((uVar17 == 0) || (iVar15 = uVar17 + 2, (long)(int)uVar17 < lVar23 + -1)) {
      iVar15 = (int)lVar23;
    }
    iVar15 = iVar15 + (int)lVar14;
    iVar2 = iVar15 + iVar21;
    FUN_004052f2(param_1,0x20,param_2,iVar2,param_4);
    FUN_004052db(param_1,local_1d38,iVar21);
    FUN_004052f2(param_1,0x30,param_2,iVar2,param_4 ^ 0x10000);
    FUN_004052db(param_1,local_59,lVar23);
    FUN_004052f2(param_1,0x30,iVar15 - ((int)lVar23 + (int)lVar14),0,0);
  }
  FUN_004052db(param_1,pbVar4,lVar14);
  FUN_004052f2(param_1,0x20,param_2,iVar2,param_4 ^ 0x2000);
  if (param_2 <= iVar2) {
    param_2 = iVar2;
  }
LAB_00405f08:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return param_2;
}



wchar_t FUN_00405f32(byte *param_1,long *param_2,uint *param_3,long param_4,long param_5)

{
  long **pplVar1;
  wchar_t wVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  byte *pbVar10;
  size_t sVar11;
  int *piVar12;
  byte bVar13;
  uint uVar14;
  uint *puVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  char *pcVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  bool bVar25;
  ulong uVar26;
  wchar_t wVar27;
  char *__string;
  long in_FS_OFFSET;
  ulong local_c8;
  long *local_90;
  long *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  char local_6f [46];
  undefined local_41;
  long local_40 [2];
  
  wVar27 = L'\0';
  uVar16 = 0;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  bVar4 = false;
  local_90 = param_2;
switchD_004063ae_caseD_5:
  __string = (char *)local_90;
  wVar27 = wVar27 + (int)uVar16;
  if (*(byte *)local_90 == 0) {
    if (param_1 != (byte *)0x0) goto LAB_004068d3;
    lVar20 = 1;
    if (bVar4) goto LAB_004067c8;
LAB_00406316:
    wVar27 = L'\0';
    goto LAB_004068d3;
  }
  plVar9 = local_90;
  bVar25 = false;
  do {
    bVar3 = bVar25;
    plVar23 = plVar9;
    bVar25 = *(byte *)plVar23 != 0 && *(byte *)plVar23 != 0x25;
    plVar9 = (long *)((long)plVar23 + 1);
  } while (bVar25);
  if (bVar3) {
    local_90 = plVar23;
  }
  bVar3 = false;
  plVar9 = local_90;
  while ((*(byte *)plVar9 == 0x25 && (*(byte *)((long)plVar9 + 1) == 0x25))) {
    plVar23 = (long *)((long)plVar23 + 1);
    bVar3 = true;
    plVar9 = (long *)((long)plVar9 + 2);
  }
  if (bVar3) {
    local_90 = plVar9;
  }
  uVar24 = (long)plVar23 - (long)__string;
  iVar5 = 0x7fffffff - wVar27;
  if ((long)iVar5 < (long)uVar24) goto LAB_00406824;
  uVar16 = uVar24 & 0xffffffff;
  uVar7 = (uint)uVar16;
  if (param_1 != (byte *)0x0) {
    FUN_004052db(param_1,__string,(long)(int)uVar24);
  }
  if ((int)uVar24 != 0) goto LAB_00406017;
  uVar6 = (int)(char)*(byte *)((long)plVar9 + 1) - 0x30;
  if ((uVar6 < 10) && (*(byte *)((long)plVar9 + 2) == 0x24)) {
    lVar20 = (long)(int)uVar6;
    bVar4 = true;
    local_90 = (long *)((long)plVar9 + 3);
  }
  else {
    local_90 = (long *)((long)plVar9 + 1);
    lVar20 = -1;
  }
  uVar6 = 0;
  plVar9 = local_90;
  while( true ) {
    uVar14 = (int)(char)*(byte *)plVar9 - 0x20;
    if (0x1f < uVar14) break;
    bVar13 = (byte)uVar14;
    if ((0x12889U >> (bVar13 & 0x1f) & 1) == 0) {
      if (bVar25) {
        local_90 = plVar9;
      }
      if (*(byte *)plVar9 != 0x2a) goto LAB_00406185;
      bVar13 = *(byte *)((long)plVar9 + 1);
      if (((int)(char)bVar13 - 0x30U < 10) && (*(byte *)((long)plVar9 + 2) == 0x24)) {
        local_90 = (long *)((long)plVar9 + 3);
        if (param_1 == (byte *)0x0) {
          uVar26 = uVar24 & 0xffffffff;
          bVar4 = true;
          *(undefined4 *)(param_5 + -0xc0 + (long)(char)bVar13 * 4) = 10;
          goto LAB_0040619a;
        }
        bVar4 = true;
        uVar14 = *(uint *)(param_4 + -0x300 + (long)(char)bVar13 * 0x10);
      }
      else {
        if (bVar4) goto LAB_00406810;
        local_90 = (long *)((long)plVar9 + 1);
        if (param_1 == (byte *)0x0) {
          uVar26 = uVar24 & 0xffffffff;
          goto LAB_0040619a;
        }
        uVar14 = *param_3;
        if (uVar14 < 0x30) {
          *param_3 = uVar14 + 8;
          puVar15 = (uint *)((ulong)uVar14 + *(long *)(param_3 + 4));
        }
        else {
          puVar15 = *(uint **)(param_3 + 2);
          *(uint **)(param_3 + 2) = puVar15 + 2;
        }
        uVar14 = *puVar15;
      }
      uVar26 = (ulong)uVar14;
      if ((int)uVar14 < 0) {
        uVar6 = uVar6 | 0x2000;
        uVar26 = (ulong)-uVar14;
      }
      goto LAB_0040619a;
    }
    bVar25 = true;
    uVar6 = uVar6 | 1 << (bVar13 & 0x1f);
    plVar9 = (long *)((long)plVar9 + 1);
  }
  if (bVar25) {
    local_90 = plVar9;
  }
LAB_00406185:
  uVar14 = FUN_004052a0(&local_90);
  uVar26 = (ulong)uVar14;
  if ((int)uVar14 < 0) goto LAB_00406824;
LAB_0040619a:
  if (*(byte *)local_90 == 0x2e) {
    if (*(byte *)((long)local_90 + 1) == 0x2a) {
      bVar13 = *(byte *)((long)local_90 + 2);
      if (((int)(char)bVar13 - 0x30U < 10) && (*(byte *)((long)local_90 + 3) == 0x24)) {
        if (param_1 == (byte *)0x0) {
          uVar24 = uVar24 & 0xffffffff;
          *(undefined4 *)(param_5 + -0xc0 + (long)(char)bVar13 * 4) = 10;
        }
        else {
          uVar24 = (ulong)*(uint *)(param_4 + -0x300 + (long)(char)bVar13 * 0x10);
        }
        local_90 = (long *)((long)local_90 + 4);
      }
      else {
        if (bVar4) goto LAB_00406810;
        uVar24 = uVar24 & 0xffffffff;
        if (param_1 != (byte *)0x0) {
          uVar14 = *param_3;
          if (uVar14 < 0x30) {
            puVar15 = (uint *)((ulong)uVar14 + *(long *)(param_3 + 4));
            *param_3 = uVar14 + 8;
          }
          else {
            puVar15 = *(uint **)(param_3 + 2);
            *(uint **)(param_3 + 2) = puVar15 + 2;
          }
          uVar24 = (ulong)*puVar15;
        }
        local_90 = (long *)((long)local_90 + 2);
      }
      uVar22 = (ulong)(~(uint)uVar24 >> 0x1f);
    }
    else {
      local_90 = (long *)((long)local_90 + 1);
      uVar22 = 1;
      uVar14 = FUN_004052a0(&local_90);
      uVar24 = (ulong)uVar14;
    }
  }
  else {
    uVar22 = uVar24 & 0xffffffff;
    uVar24 = 0xffffffff;
  }
  local_c8 = 0;
  plVar9 = local_90;
  while( true ) {
    if (0x39 < (int)(char)*(byte *)plVar9 - 0x41U) goto LAB_00406810;
    plVar23 = (long *)((long)plVar9 + 1);
    bVar13 = (&DAT_00408780)[(long)(int)((int)(char)*(byte *)plVar9 - 0x41U) + local_c8 * 0x3a];
    if (7 < bVar13 - 1) break;
    local_c8 = (ulong)bVar13;
    plVar9 = plVar23;
  }
  uVar14 = (uint)bVar13;
  local_90 = plVar23;
  if (uVar14 == 0) goto LAB_00406810;
  if (uVar14 == 0x1b) {
    if ((int)lVar20 != -1) goto LAB_00406810;
    if (param_1 == (byte *)0x0) goto switchD_004063ae_caseD_5;
  }
  else if ((int)lVar20 == -1) {
    if (param_1 == (byte *)0x0) goto LAB_00406316;
    FUN_0040510c(&local_88,bVar13,param_3);
  }
  else {
    if (param_1 == (byte *)0x0) {
      *(uint *)(param_5 + lVar20 * 4) = uVar14;
      goto switchD_004063ae_caseD_5;
    }
    pplVar1 = (long **)(param_4 + lVar20 * 0x10);
    local_88 = *pplVar1;
    uStack_80 = *(undefined4 *)(pplVar1 + 1);
    uStack_7c = *(undefined4 *)((long)pplVar1 + 0xc);
  }
  uVar14 = (uint)uVar24;
  if ((*param_1 & 0x20) != 0) goto LAB_0040681b;
  bVar13 = *(byte *)plVar9;
  iVar17 = (int)(char)bVar13;
  if (((int)local_c8 != 0) && ((bVar13 & 0xf) == 3)) {
    iVar17 = (int)(char)(bVar13 & 0xdf);
  }
  if ((uVar6 >> 0xd & 1) != 0) {
    uVar6 = uVar6 & 0xfffeffff;
  }
  uVar8 = 0;
  switch(iVar17) {
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
    if ((-1 < (int)uVar14) || ((uVar22 & 1) == 0)) {
      uVar7 = FUN_004053aa(param_1,uVar26,uVar24 & 0xffffffff,uVar6);
      uVar16 = (ulong)uVar7;
      if (-1 < (int)uVar7) goto LAB_00406017;
    }
    goto LAB_00406824;
  default:
    pcVar21 = "-+   0X0x";
    goto LAB_004066c4;
  case 0x43:
    goto switchD_0040638e_caseD_43;
  case 0x53:
    goto switchD_0040638e_caseD_53;
  case 0x58:
  case 0x78:
    goto switchD_0040638e_caseD_58;
  case 99:
    uVar6 = uVar6 & 0xfffeffff;
    pcVar21 = "-+   0X0x";
    uVar14 = 1;
    plVar9 = local_40;
    __string = &local_41;
    local_41 = SUB81(local_88,0);
    goto LAB_004066d7;
  case 100:
  case 0x69:
    if ((long)local_88 < 0) {
      local_88 = (long *)-(long)local_88;
      uVar8 = 1;
      goto LAB_004064fa;
    }
    uVar8 = 1;
    pcVar21 = "+   0X0x";
    if ((uVar6 >> 0xb & 1) == 0) {
      bVar25 = (uVar6 & 1) == 0;
      pcVar21 = "   0X0x";
      if (bVar25) {
        pcVar21 = "-+   0X0x";
      }
      uVar8 = (uint)!bVar25;
    }
    goto LAB_00406501;
  case 0x6d:
    piVar12 = __errno_location();
    __string = strerror(*piVar12);
    goto LAB_004065c6;
  case 0x6e:
    switch(local_c8) {
    case 0:
      *(wchar_t *)local_88 = wVar27;
      break;
    case 1:
    case 2:
    case 6:
    case 7:
      *local_88 = (long)wVar27;
      break;
    case 3:
      *(short *)local_88 = (short)wVar27;
      break;
    case 4:
      *(byte *)local_88 = (byte)wVar27;
    }
    goto switchD_004063ae_caseD_5;
  case 0x6f:
    __string = (char *)local_40;
    for (plVar9 = local_88; plVar9 != (long *)0x0; plVar9 = (long *)((ulong)plVar9 >> 3)) {
      __string = (char *)((long)__string + -1);
      *__string = ((byte)plVar9 & 7) + 0x30;
    }
    pcVar21 = "-+   0X0x";
    uVar7 = uVar8;
    if (((uVar6 & 8) != 0) && ((long)(int)uVar14 <= (long)local_40 - (long)__string)) {
      uVar14 = (int)((long)local_40 - (long)__string) + 1;
    }
    goto LAB_00406516;
  case 0x70:
    iVar17 = 0x78;
    if (uVar14 < 0x10) {
      uVar14 = 0x10;
    }
    uVar6 = uVar6 | 8;
    goto switchD_0040638e_caseD_58;
  case 0x73:
    __string = (char *)local_88;
    if (local_88 == (long *)0x0) {
      __string = "(null)";
    }
LAB_004065c6:
    if ((int)uVar14 < 0) {
      sVar11 = strnlen(__string,0x7fffffff);
      plVar9 = (long *)((long)__string + sVar11);
      if (*(byte *)plVar9 != 0) goto LAB_00406824;
    }
    else {
      sVar11 = strnlen(__string,(long)(int)uVar14);
      plVar9 = (long *)((long)__string + sVar11);
    }
    uVar14 = (uint)sVar11;
    uVar6 = uVar6 & 0xfffeffff;
    pcVar21 = "-+   0X0x";
    goto LAB_004066d7;
  case 0x75:
LAB_004064fa:
    pcVar21 = "-+   0X0x";
LAB_00406501:
    __string = (char *)FUN_00405280(local_88,local_40);
    uVar7 = uVar8;
    goto LAB_00406516;
  }
  while( true ) {
    lVar18 = lVar20 + 1;
    FUN_0040510c(lVar20 * 0x10 + param_4,iVar5,param_3);
    lVar20 = lVar18;
    if (lVar18 == 10) break;
LAB_004067c8:
    iVar5 = *(int *)(param_5 + lVar20 * 4);
    if (iVar5 == 0) goto LAB_00406808;
  }
LAB_00406831:
  wVar27 = L'\x01';
  goto LAB_004068d3;
LAB_00406808:
  if (lVar20 == 10) goto LAB_00406831;
  if (*(int *)(param_5 + lVar20 * 4) != 0) goto LAB_00406810;
  lVar20 = lVar20 + 1;
  goto LAB_00406808;
LAB_00406810:
  piVar12 = __errno_location();
  *piVar12 = 0x16;
  goto LAB_0040681b;
switchD_0040638e_caseD_58:
  __string = (char *)local_40;
  for (plVar9 = local_88; plVar9 != (long *)0x0; plVar9 = (long *)((ulong)plVar9 >> 4)) {
    __string = (char *)((long)__string + -1);
    *__string = "0123456789ABCDEF"[(uint)plVar9 & 0xf] | (byte)iVar17 & 0x20;
  }
  pcVar21 = "-+   0X0x";
  uVar7 = uVar8;
  if ((local_88 != (long *)0x0) && ((uVar6 & 8) != 0)) {
    pcVar21 = &DAT_0040864d + (iVar17 >> 4);
    uVar7 = 2;
  }
LAB_00406516:
  if (((int)uVar14 < 0) && ((uVar22 & 1) != 0)) goto LAB_00406824;
  if ((int)uVar22 != 0) {
    uVar6 = uVar6 & 0xfffeffff;
  }
  plVar9 = local_40;
  if ((uVar14 == 0) && (local_88 == (long *)0x0)) {
    uVar14 = 0;
    __string = (char *)plVar9;
  }
  else {
    pbVar10 = (byte *)((long)plVar9 + ((ulong)(local_88 == (long *)0x0) - (long)__string));
    pbVar19 = (byte *)(long)(int)uVar14;
    if ((long)(byte *)(long)(int)uVar14 <= (long)pbVar10) {
      pbVar19 = pbVar10;
    }
    uVar14 = (uint)pbVar19;
LAB_004066c4:
    plVar9 = local_40;
  }
LAB_004066d7:
  uVar24 = (long)plVar9 - (long)__string;
  if ((long)(int)uVar14 < (long)uVar24) {
    uVar14 = (uint)uVar24;
  }
  if ((int)(0x7fffffff - uVar7) < (int)uVar14) goto LAB_00406824;
  uVar8 = uVar14 + uVar7;
  uVar16 = uVar26;
  if ((int)uVar26 <= (int)uVar8) {
    uVar16 = (ulong)uVar8;
  }
  if (iVar5 < (int)uVar16) goto LAB_00406824;
  FUN_004052f2(param_1,0x20,uVar16,uVar8,uVar6);
  FUN_004052db(param_1,pcVar21,(long)(int)uVar7);
  FUN_004052f2(param_1,0x30,uVar16,uVar8,uVar6 ^ 0x10000);
  FUN_004052f2(param_1,0x30,uVar14,uVar24 & 0xffffffff,0);
  FUN_004052db(param_1,__string,uVar24);
  FUN_004052f2(param_1,0x20,uVar16,uVar8,uVar6 ^ 0x2000);
  goto switchD_004063ae_caseD_5;
switchD_0040638e_caseD_43:
  uVar14 = 0xffffffff;
  local_74 = 0;
  local_78 = SUB84(local_88,0);
  local_88 = (long *)&local_78;
switchD_0040638e_caseD_53:
  plVar9 = local_88;
  uVar24 = 0;
  plVar23 = local_88;
  while ((uVar24 < (ulong)(long)(int)uVar14 && (wVar2 = *(wchar_t *)plVar23, wVar2 != L'\0'))) {
    plVar23 = (long *)((long)plVar23 + 4);
    iVar17 = wctomb(local_6f,wVar2);
    if (iVar17 < 0) goto LAB_0040681b;
    if ((long)(int)uVar14 - uVar24 < (ulong)(long)iVar17) break;
    uVar24 = uVar24 + (long)iVar17;
  }
  if (0x7fffffff < uVar24) goto LAB_00406824;
  uVar16 = 0;
  FUN_004052f2(param_1,0x20,uVar26,uVar24 & 0xffffffff,uVar6);
  while ((uVar16 < uVar24 && (wVar2 = *(wchar_t *)plVar9, wVar2 != L'\0'))) {
    plVar9 = (long *)((long)plVar9 + 4);
    iVar17 = wctomb(local_6f,wVar2);
    uVar16 = uVar16 + (long)iVar17;
    if (uVar24 < uVar16) break;
    FUN_004052db(param_1,local_6f);
  }
  FUN_004052f2(param_1,0x20,uVar26,uVar24 & 0xffffffff,uVar6 ^ 0x2000);
  uVar16 = uVar24 & 0xffffffff;
  if ((int)uVar24 <= (int)uVar26) {
    uVar16 = uVar26;
  }
LAB_00406017:
  if (iVar5 < (int)uVar16) goto LAB_00406824;
  goto switchD_004063ae_caseD_5;
LAB_00406824:
  piVar12 = __errno_location();
  *piVar12 = 0x4b;
LAB_0040681b:
  wVar27 = L'\xffffffff';
LAB_004068d3:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return wVar27;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160 [10];
  undefined local_138 [168];
  char local_90 [80];
  long local_40;
  
  iVar4 = -1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = local_160;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
                    // WARNING: Load size is inaccurate
  local_178 = *__arg;
  uStack_174 = *(undefined4 *)((long)__arg + 4);
  uStack_170 = *(undefined4 *)((long)__arg + 8);
  uStack_16c = *(undefined4 *)((long)__arg + 0xc);
  local_168 = *(undefined8 *)((long)__arg + 0x10);
  iVar2 = FUN_00405f32(0,__format,&local_178,local_138,local_160);
  if (iVar2 < 0) goto LAB_00406a71;
  iVar2 = 0;
  if (-1 < *(int *)((long)&__s->_lock + 4)) {
    iVar2 = __lockfile(__s);
  }
  uVar1 = __s->_flags;
  __s->_flags = uVar1 & 0xffffffdf;
  if (__s->_markers == (_IO_marker *)0x0) {
    iVar4 = -1;
    pcVar7 = __s->_IO_save_end;
    __s->_markers = (_IO_marker *)0x50;
    __s->_IO_save_end = local_90;
    __s->_IO_write_base = (char *)0x0;
    __s->_IO_buf_base = (char *)0x0;
    __s->_IO_write_ptr = (char *)0x0;
    iVar3 = __towrite(__s);
    if (iVar3 == 0) {
LAB_00406a00:
      iVar4 = FUN_00405f32(__s,__format,&local_178,local_138,local_160);
    }
    if (pcVar7 != (char *)0x0) {
      (*(code *)__s->_IO_save_base)(__s,0,0);
      __s->_IO_save_end = pcVar7;
      if (__s->_IO_write_ptr == (char *)0x0) {
        iVar4 = -1;
      }
      __s->_markers = (_IO_marker *)0x0;
      __s->_IO_write_base = (char *)0x0;
      __s->_IO_buf_base = (char *)0x0;
      __s->_IO_write_ptr = (char *)0x0;
    }
  }
  else {
    if (__s->_IO_write_base != (char *)0x0) {
LAB_004069ea:
      pcVar7 = (char *)0x0;
      goto LAB_00406a00;
    }
    iVar4 = -1;
    iVar3 = __towrite(__s);
    if (iVar3 == 0) goto LAB_004069ea;
  }
  if ((__s->_flags & 0x20U) != 0) {
    iVar4 = -1;
  }
  __s->_flags = __s->_flags | uVar1 & 0x20;
  if (iVar2 != 0) {
    __unlockfile(__s);
  }
LAB_00406a71:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int strcmp(char *__s1,char *__s2)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  
  bVar4 = *__s1;
  uVar3 = (uint)(byte)*__s2;
  lVar2 = 1;
  if (*__s2 == bVar4) {
    do {
      if (bVar4 == 0) {
        return -uVar3;
      }
      bVar4 = __s1[lVar2];
      pbVar1 = (byte *)(__s2 + lVar2);
      uVar3 = (uint)*pbVar1;
      lVar2 = lVar2 + 1;
    } while (bVar4 == *pbVar1);
  }
  return bVar4 - uVar3;
}



size_t strlen(char *__s)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar3 = (ulong)__s & 7;
  puVar2 = (ulong *)__s;
  while( true ) {
    if (uVar3 == 0) {
      uVar3 = ~*puVar2 & *puVar2 + 0xfefefefefefefeff;
      while ((uVar3 & 0x8080808080808080) == 0) {
        puVar1 = puVar2 + 1;
        puVar2 = puVar2 + 1;
        uVar3 = ~*puVar1 & *puVar1 + 0xfefefefefefefeff;
      }
      for (; *(char *)puVar2 != '\0'; puVar2 = (ulong *)((long)puVar2 + 1)) {
      }
      return (long)puVar2 - (long)__s;
    }
    if (*(char *)puVar2 == '\0') break;
    puVar2 = (ulong *)((long)puVar2 + 1);
    uVar3 = (ulong)puVar2 & 7;
  }
  return (long)puVar2 - (long)__s;
}



size_t strnlen(char *__string,size_t __maxlen)

{
  void *pvVar1;
  
  pvVar1 = memchr(__string,0,__maxlen);
  if (pvVar1 != (void *)0x0) {
    __maxlen = (long)pvVar1 - (long)__string;
  }
  return __maxlen;
}



void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  ulong uVar2;
  uint uVar3;
  
  pvVar1 = __dest;
  if (7 < __n) {
    uVar2 = (ulong)__dest & 7;
    while (uVar2 != 0) {
                    // WARNING: Load size is inaccurate
      *(undefined *)__dest = *__src;
      __n = __n - 1;
      uVar2 = (ulong)(undefined8 *)((long)__dest + 1) & 7;
      __dest = (undefined8 *)((long)__dest + 1);
      __src = (undefined8 *)((long)__src + 1);
    }
  }
                    // WARNING: Load size is inaccurate
  for (uVar2 = __n >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined8 *)__dest = *__src;
    __src = (undefined8 *)((long)__src + 8);
    __dest = (undefined8 *)((long)__dest + 8);
  }
  uVar3 = (uint)__n & 7;
  if ((__n & 7) != 0) {
    do {
                    // WARNING: Load size is inaccurate
      *(undefined *)__dest = *__src;
      uVar3 = uVar3 - 1;
      __src = (undefined8 *)((long)__src + 1);
      __dest = (undefined8 *)((long)__dest + 1);
    } while (uVar3 != 0);
  }
  return pvVar1;
}



void * memset(void *__s,int __c,size_t __n)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  long *plVar5;
  
  bVar4 = (byte)__c;
  lVar1 = (ulong)bVar4 * 0x101010101010101;
  uVar3 = (uint)__n;
  if (__n < 0x7f) {
    if (uVar3 != 0) {
      *(byte *)__s = bVar4;
      *(byte *)((long)__s + (__n - 1)) = bVar4;
      if (2 < uVar3) {
        *(short *)((long)__s + 1) = (short)lVar1;
        *(short *)((long)__s + (__n - 3)) = (short)lVar1;
        if (6 < uVar3) {
          *(int *)((long)__s + 3) = (int)lVar1;
          *(int *)((long)__s + (__n - 7)) = (int)lVar1;
          if (0xe < uVar3) {
            *(long *)((long)__s + 7) = lVar1;
            *(long *)((long)__s + (__n - 0xf)) = lVar1;
            if (0x1e < uVar3) {
              *(long *)((long)__s + 0xf) = lVar1;
              *(long *)((long)__s + 0x17) = lVar1;
              *(long *)((long)__s + (__n - 0x1f)) = lVar1;
              *(long *)((long)__s + (__n - 0x17)) = lVar1;
              if (0x3e < uVar3) {
                *(long *)((long)__s + 0x1f) = lVar1;
                *(long *)((long)__s + 0x27) = lVar1;
                *(long *)((long)__s + 0x2f) = lVar1;
                *(long *)((long)__s + 0x37) = lVar1;
                *(long *)((long)__s + (__n - 0x3f)) = lVar1;
                *(long *)((long)__s + (__n - 0x37)) = lVar1;
                *(long *)((long)__s + (__n - 0x2f)) = lVar1;
                *(long *)((long)__s + (__n - 0x27)) = lVar1;
              }
            }
          }
        }
      }
    }
    return __s;
  }
  *(long *)((long)__s + (__n - 8)) = lVar1;
  plVar5 = (long *)__s;
  if (((ulong)__s & 0xf) != 0) {
    uVar2 = (ulong)(-(int)__s & 0xf);
    *(long *)__s = lVar1;
    *(long *)((long)__s + 8) = lVar1;
    __n = __n - uVar2;
    plVar5 = (long *)((long)__s + uVar2);
  }
  for (uVar2 = __n >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *plVar5 = lVar1;
    plVar5 = plVar5 + 1;
  }
  return __s;
}



// WARNING: Removing unreachable block (ram,0x00406d0f)

void __lock(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = __libc[3];
  if (__libc[3] != '\0') {
    iVar3 = 0;
    LOCK();
    if (*param_1 == 0) {
      *param_1 = -0x7fffffff;
    }
    else {
      iVar3 = *param_1;
    }
    UNLOCK();
    if (cVar1 < '\0') {
      __libc[3] = '\0';
    }
    if (iVar3 != 0) {
      iVar4 = 10;
      while( true ) {
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0x7fffffff;
        }
        LOCK();
        if (iVar3 == *param_1) {
          *param_1 = iVar3 + -0x7fffffff;
          iVar2 = iVar3;
        }
        else {
          iVar2 = *param_1;
        }
        UNLOCK();
        if (iVar3 == iVar2) break;
        iVar4 = iVar4 + -1;
        iVar3 = iVar2;
        if (iVar4 == 0) {
          LOCK();
          iVar3 = *param_1;
          *param_1 = *param_1 + 1;
          UNLOCK();
          iVar3 = iVar3 + 1;
          do {
            iVar4 = iVar3;
            if (iVar3 < 0) {
              syscall();
              iVar4 = iVar3 + 0x7fffffff;
            }
            LOCK();
            if (iVar4 == *param_1) {
              *param_1 = iVar4 + -0x80000000;
              iVar3 = iVar4;
            }
            else {
              iVar3 = *param_1;
            }
            UNLOCK();
          } while (iVar4 != iVar3);
          return;
        }
      }
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00406d66)

undefined  [16] __unlock(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined auVar3 [16];
  
  uVar2 = (ulong)*param_1;
  if ((int)*param_1 < 0) {
    LOCK();
    uVar1 = *param_1;
    uVar2 = (ulong)uVar1;
    *param_1 = *param_1 + 0x7fffffff;
    UNLOCK();
    if (uVar1 != 0x80000001) {
      param_3 = 1;
      uVar2 = 0xca;
      syscall();
    }
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



undefined  [16]
__syscall_cp_c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  
  syscall();
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_1;
  return auVar1;
}



undefined  [16]
__syscall_cp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  
  syscall();
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_1;
  return auVar1;
}



undefined4 __aio_close(undefined4 param_1)

{
  return param_1;
}



int close(int __fd)

{
  int iVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 in_register_0000003c;
  long lVar2;
  
  iVar1 = __aio_close(CONCAT44(in_register_0000003c,__fd));
  iVar1 = __syscall_cp(3,(long)iVar1,0,0,0,0);
  lVar2 = (long)iVar1;
  if (iVar1 == -4) {
    lVar2 = 0;
  }
  iVar1 = __syscall_ret(lVar2,extraout_RDX,extraout_RDX_00,0);
  return iVar1;
}



ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  undefined8 uVar1;
  ssize_t sVar2;
  
  uVar1 = __syscall_cp(0,(long)__fd,__buf,__nbytes,0,0,0);
  sVar2 = __syscall_ret(uVar1);
  return sVar2;
}



ssize_t write(int __fd,void *__buf,size_t __n)

{
  undefined8 uVar1;
  ssize_t sVar2;
  
  uVar1 = __syscall_cp(1,(long)__fd,__buf,__n,0,0,0);
  sVar2 = __syscall_ret(uVar1);
  return sVar2;
}



undefined8 __init_tp(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *(long *)param_1 = param_1;
  iVar1 = __set_thread_area();
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    if (iVar1 == 0) {
      __libc[0] = 1;
    }
    *(undefined4 *)(param_1 + 0x38) = 2;
    syscall();
    *(undefined4 *)(param_1 + 0x30) = 0xda;
    *(undefined8 *)(param_1 + 0xa8) = 0x840b678;
    *(long *)(param_1 + 0x88) = param_1 + 0x88;
    uVar2 = __sysinfo;
    *(long *)(param_1 + 0x10) = param_1;
    *(long *)(param_1 + 0x18) = param_1;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    uVar2 = 0;
  }
  return uVar2;
}



undefined  [16]
__copy_tls(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined auVar4 [16];
  
  uVar1 = -__libc._32_8_ & (long)param_1 + __libc._24_8_ + -200;
  plVar3 = param_1 + 1;
  for (puVar2 = (undefined8 *)__libc._16_8_; puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    *plVar3 = uVar1 - puVar2[5];
    memcpy((void *)(uVar1 - puVar2[5]),(void *)puVar2[1],puVar2[2]);
    plVar3 = plVar3 + 1;
  }
  *param_1 = __libc._40_8_;
  *(undefined8 **)(uVar1 + 8) = param_1;
  auVar4._8_8_ = param_4;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



// WARNING: Removing unreachable block (ram,0x00406f36)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 __init_tls(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  
  piVar10 = *(int **)(param_1 + 0x18);
  lVar3 = 0;
  piVar2 = piVar10;
  piVar4 = (int *)0x0;
  for (lVar8 = *(long *)(param_1 + 0x28); lVar8 != 0; lVar8 = lVar8 + -1) {
    iVar1 = *piVar2;
    piVar5 = piVar4;
    if (iVar1 == 6) {
      lVar3 = (long)piVar10 - *(long *)(piVar2 + 4);
    }
    else if ((((iVar1 != 2) && (piVar5 = piVar2, iVar1 != 7)) &&
             (piVar5 = piVar4, iVar1 == 0x6474e551)) &&
            (uVar6 = *(ulong *)(piVar2 + 10), __default_stacksize < uVar6)) {
      if (0x800000 < uVar6) {
        uVar6 = 0x800000;
      }
      __default_stacksize = (uint)uVar6;
    }
    piVar2 = (int *)((long)piVar2 + *(long *)(param_1 + 0x20));
    piVar4 = piVar5;
  }
  if (piVar4 != (int *)0x0) {
    _DAT_0840c2f0 = *(undefined8 *)(piVar4 + 8);
    DAT_0840c2e8 = lVar3 + *(long *)(piVar4 + 4);
    DAT_0840c2f8 = *(long *)(piVar4 + 10);
    __libc._40_8_ = 1;
    DAT_0840c300 = *(ulong *)(piVar4 + 0xc);
    __libc._16_8_ = &DAT_0840c2e0;
  }
  lVar8 = DAT_0840c2f8;
  DAT_0840c2f8 = (-(DAT_0840c2e8 + DAT_0840c2f8) & DAT_0840c300 - 1) + DAT_0840c2f8;
  if (DAT_0840c300 < 8) {
    DAT_0840c300 = 8;
  }
  puVar7 = &DAT_0840c320;
  __libc._32_8_ = DAT_0840c300;
  __libc._24_8_ = DAT_0840c2f8 + 0xdf + DAT_0840c300 & 0xfffffffffffffff8;
  uVar9 = 0;
  uVar6 = DAT_0840c300;
  if (0x150 < (ulong)__libc._24_8_) {
    uVar9 = 0xffffffffffffffff;
    piVar10 = (int *)0x0;
    uVar6 = 3;
    syscall();
    puVar7 = (undefined *)0x9;
  }
  _DAT_0840c308 = DAT_0840c2f8;
  uVar9 = __copy_tls(puVar7,__libc._24_8_,uVar6,lVar8,uVar9,piVar10);
  iVar1 = __init_tp(uVar9);
  if (iVar1 < 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return param_3;
}



void __init_ssp(void *param_1)

{
  long *in_FS_OFFSET;
  
  if (param_1 == (void *)0x0) {
    __stack_chk_guard = 0x21ed681ac403718;
  }
  else {
    memcpy(&__stack_chk_guard,param_1,8);
  }
  __stack_chk_guard._0_2_ = (ushort)(byte)__stack_chk_guard;
  *(undefined8 *)(*in_FS_OFFSET + 0x28) = __stack_chk_guard;
  return;
}



void __stack_chk_fail(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * __errno_location(void)

{
  long *in_FS_OFFSET;
  
  return (int *)(*in_FS_OFFSET + 0x34);
}



char * strerror_l(int __errnum,__locale_t __l)

{
  char *pcVar1;
  
  if (0x83 < (uint)__errnum) {
    __errnum = 0;
  }
  pcVar1 = (char *)__lctrans("No error information" + (ushort)(&DAT_004089a0)[__errnum],
                             __l->__locales[5]);
  return pcVar1;
}



char * strerror(int __errnum)

{
  char *pcVar1;
  long *in_FS_OFFSET;
  
  pcVar1 = strerror_l(__errnum,*(__locale_t *)(*in_FS_OFFSET + 0xa8));
  return pcVar1;
}



void _Exit(int __status)

{
  syscall();
  do {
    syscall();
  } while( true );
}



void __procfdname(undefined8 *param_1,uint param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  *(undefined *)((long)param_1 + 0xe) = 0;
  uVar3 = 0xe;
  *param_1 = 0x65732f636f72702f;
  *(undefined4 *)(param_1 + 1) = 0x662f666c;
  *(undefined2 *)((long)param_1 + 0xc) = 0x2f64;
  uVar2 = (ulong)param_2;
  if (param_2 == 0) {
    *(undefined2 *)((long)param_1 + 0xe) = 0x30;
    return;
  }
  do {
    uVar3 = (ulong)((int)uVar3 + 1);
    uVar4 = (uint)uVar2;
    uVar2 = uVar2 / 10;
  } while (9 < uVar4);
  *(undefined *)((long)param_1 + uVar3) = 0;
  do {
    uVar3 = (ulong)((int)uVar3 - 1);
    *(char *)((long)param_1 + uVar3) = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
    bVar1 = 9 < param_2;
    param_2 = param_2 / 10;
  } while (bVar1);
  return;
}



undefined8 __lctrans_impl(undefined8 param_1)

{
  return param_1;
}



undefined8 __lctrans(undefined8 param_1)

{
  return param_1;
}



void __lctrans_cur(undefined8 param_1)

{
  long *in_FS_OFFSET;
  
  __lctrans_impl(param_1,*(undefined8 *)(*(long *)(*in_FS_OFFSET + 0xa8) + 0x28));
  return;
}



uint __fpclassifyl(void)

{
  uint uVar1;
  ulong param_7;
  uint param_8;
  
  uVar1 = (uint)(param_7 >> 0x20);
  if ((param_8 & 0x7fff | uVar1 >> 0x1f) == 0) {
    uVar1 = 3 - (param_7 == 0);
  }
  else {
    uVar1 = ((int)uVar1 >> 0x1f) * -4;
    if ((((ushort)param_8 & 0x7fff) == 0x7fff) && (uVar1 = 0, (long)param_7 < 0)) {
      uVar1 = (uint)((param_7 & 0x7fffffffffffffff) == 0);
    }
  }
  return uVar1;
}



ushort __signbitl(void)

{
  ushort param_8;
  
  return param_8 >> 0xf;
}



void frexpl(int *param_1)

{
  undefined8 param_7;
  ushort in_stack_00000010;
  
  if ((in_stack_00000010 & 0x7fff) == 0) {
    if ((longdouble)CONCAT28(in_stack_00000010,param_7) == (longdouble)0) {
      *param_1 = 0;
    }
    else {
      frexpl(param_1);
      *param_1 = *param_1 + -0x78;
    }
  }
  else if ((in_stack_00000010 & 0x7fff) != 0x7fff) {
    *param_1 = (in_stack_00000010 & 0x7fff) - 0x3ffe;
  }
  return;
}



int wctomb(char *__s,wchar_t __wchar)

{
  size_t sVar1;
  
  if (__s != (char *)0x0) {
    sVar1 = wcrtomb(__s,__wchar,(mbstate_t *)0x0);
    return (int)sVar1;
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040735f)

undefined  [16] __lockfile(ulong param_1,undefined8 param_2,ulong param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long *in_FS_OFFSET;
  undefined auVar8 [16];
  undefined auVar9 [16];
  
  uVar3 = *(uint *)(*in_FS_OFFSET + 0x30);
  if ((*(uint *)(param_1 + 0x8c) & 0xbfffffff) == uVar3) {
    uVar7 = 0;
  }
  else {
    uVar4 = 0;
    puVar1 = (uint *)(param_1 + 0x8c);
    LOCK();
    puVar2 = (uint *)(param_1 + 0x8c);
    if (*puVar2 == 0) {
      *puVar2 = uVar3;
    }
    else {
      uVar4 = *puVar2;
    }
    UNLOCK();
    if (uVar4 != 0) {
LAB_00407327:
      uVar4 = 0;
      LOCK();
      if (*puVar1 == 0) {
        *puVar1 = uVar3 | 0x40000000;
      }
      else {
        uVar4 = *puVar1;
      }
      UNLOCK();
      if (uVar4 == 0) {
        auVar8._8_8_ = param_1;
        auVar8._0_8_ = 1;
        return auVar8;
      }
      uVar6 = uVar4 | 0x40000000;
      param_1 = (ulong)uVar6;
      if ((uVar4 >> 0x1e & 1) == 0) goto LAB_0040736b;
      goto LAB_0040734b;
    }
    uVar7 = 1;
    param_3 = param_1;
  }
  auVar9._8_8_ = param_3;
  auVar9._0_8_ = uVar7;
  return auVar9;
LAB_0040736b:
  LOCK();
  if (uVar4 == *puVar1) {
    *puVar1 = uVar6;
    uVar5 = uVar4;
  }
  else {
    uVar5 = *puVar1;
  }
  UNLOCK();
  if (uVar5 == uVar4) {
LAB_0040734b:
    param_1 = (ulong)(int)uVar6;
    syscall();
  }
  goto LAB_00407327;
}



// WARNING: Removing unreachable block (ram,0x004073b6)

undefined  [16] __unlockfile(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined auVar3 [16];
  
  LOCK();
  uVar1 = *(uint *)(param_1 + 0x8c);
  *(uint *)(param_1 + 0x8c) = 0;
  uVar2 = (ulong)uVar1;
  UNLOCK();
  if ((uVar1 >> 0x1e & 1) != 0) {
    param_1 = 1;
    uVar2 = 0xca;
    syscall();
  }
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



void __stdio_close(long param_1)

{
  __aio_close(*(undefined4 *)(param_1 + 0x78));
  syscall();
  __syscall_ret(3);
  return;
}



ulong __stdio_read(uint *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_48;
  ulong local_40;
  undefined *local_38;
  long local_30;
  long local_20;
  
  local_30 = *(long *)(param_1 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *(undefined **)(param_1 + 0x16);
  local_40 = (param_3 - 1) + (ulong)(local_30 == 0);
  uVar2 = local_40;
  lVar3 = local_30;
  plVar4 = (long *)local_38;
  if (local_40 != 0) {
    uVar2 = 0x13;
    lVar3 = 2;
    plVar4 = &local_48;
  }
  syscall();
  local_48 = param_2;
  uVar2 = __syscall_ret(uVar2,plVar4,lVar3);
  if ((long)uVar2 < 1) {
    *param_1 = *param_1 | (-(uint)(uVar2 == 0) & 0xfffffff0) + 0x20;
    uVar2 = 0;
  }
  else if (local_40 < uVar2) {
    puVar1 = *(undefined **)(param_1 + 0x16);
    *(undefined **)(param_1 + 2) = puVar1;
    *(undefined **)(param_1 + 4) = puVar1 + (uVar2 - local_40);
    uVar2 = param_3;
    if (*(long *)(param_1 + 0x18) != 0) {
      *(undefined **)(param_1 + 2) = puVar1 + 1;
      *(undefined *)(param_2 + -1 + param_3) = *puVar1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void __stdio_seek(long param_1,__off_t param_2,int param_3)

{
  lseek(*(int *)(param_1 + 0x78),param_2,param_3);
  return;
}



long __stdio_write(uint *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_68;
  ulong local_60 [4];
  long local_40;
  
  iVar5 = 2;
  plVar3 = &local_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = *(long *)(param_1 + 0xe);
  local_60[0] = *(long *)(param_1 + 10) - local_68;
  uVar4 = local_60[0] + param_3;
  local_60[1] = param_2;
  local_60[2] = param_3;
  do {
    syscall();
    uVar2 = __syscall_ret(0x14,plVar3,(long)iVar5);
    if (uVar4 == uVar2) {
      lVar1 = *(long *)(param_1 + 0x16);
      *(long *)(param_1 + 0xe) = lVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 0x18) + lVar1;
      *(long *)(param_1 + 10) = lVar1;
LAB_00407594:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
        __stack_chk_fail();
      }
      return param_3;
    }
    if ((long)uVar2 < 0) {
      *param_1 = *param_1 | 0x20;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0xe) = 0;
      *(undefined8 *)(param_1 + 10) = 0;
      if (iVar5 == 2) {
        param_3 = 0;
      }
      else {
        param_3 = param_3 - plVar3[1];
      }
      goto LAB_00407594;
    }
    uVar4 = uVar4 - uVar2;
    if ((ulong)plVar3[1] < uVar2) {
      uVar2 = uVar2 - plVar3[1];
      plVar3 = plVar3 + 2;
      iVar5 = iVar5 + -1;
    }
    *plVar3 = *plVar3 + uVar2;
    plVar3[1] = plVar3[1] - uVar2;
  } while( true );
}



void __stdout_write(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(code **)(param_1 + 0x48) = __stdio_write;
  if ((*param_1 & 0x40) == 0) {
    syscall();
    *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  }
  __stdio_write(param_1,param_2,param_3);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 __towrite(uint *param_1)

{
  long lVar1;
  
  param_1[0x22] = param_1[0x22] - 1 | param_1[0x22];
  if ((*param_1 & 8) != 0) {
    *param_1 = *param_1 | 0x20;
    return 0xffffffff;
  }
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  lVar1 = *(long *)(param_1 + 0x16);
  *(long *)(param_1 + 0xe) = lVar1;
  *(long *)(param_1 + 10) = lVar1;
  *(long *)(param_1 + 8) = lVar1 + *(long *)(param_1 + 0x18);
  return 0;
}



void __towrite_needs_stdio_exit(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)__ofl_lock();
  for (lVar2 = *plVar1; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x70)) {
    FUN_00407884(lVar2);
  }
  FUN_00407884(__stdin_used);
  FUN_00407884(__stdout_used);
  FUN_00407884(__stderr_used);
  return;
}



void * memchr(void *__s,int __c,size_t __n)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = __c & 0xff;
  uVar1 = (ulong)__s & 7;
  while (uVar1 != 0) {
    if (__n == 0) {
      return (void *)0x0;
    }
                    // WARNING: Load size is inaccurate
    if (*__s == uVar2) break;
    __s = (void *)((long)__s + 1);
    __n = __n - 1;
    uVar1 = (ulong)__s & 7;
  }
  if (__n == 0) {
    return (void *)0x0;
  }
                    // WARNING: Load size is inaccurate
  if (*__s == uVar2) goto LAB_00407730;
  if (__n < 8) goto LAB_00407730;
  do {
                    // WARNING: Load size is inaccurate
    uVar1 = *__s ^ (long)(int)uVar2 * 0x101010101010101;
    if ((~uVar1 & uVar1 + 0xfefefefefefefeff & 0x8080808080808080) != 0) break;
    __n = __n - 8;
    __s = (void *)((long)__s + 8);
  } while (7 < __n);
  while( true ) {
    if (__n == 0) {
      return (void *)0x0;
    }
LAB_00407730:
                    // WARNING: Load size is inaccurate
    if (*__s == uVar2) break;
    __s = (void *)((long)__s + 1);
    __n = __n - 1;
  }
  return (ulong *)__s;
}



undefined8 __set_thread_area(void)

{
  syscall();
  return 0x9e;
}



__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  syscall();
  _Var1 = __syscall_ret(8,__offset,(long)__whence);
  return _Var1;
}



size_t wcrtomb(char *__s,wchar_t __wc,mbstate_t *__ps)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  long *in_FS_OFFSET;
  
  if (__s == (char *)0x0) {
    return 1;
  }
  bVar4 = (byte)__wc;
  if ((uint)__wc < 0x80) {
    *__s = bVar4;
    return 1;
  }
  if (**(long **)(*in_FS_OFFSET + 0xa8) == 0) {
    if ((uint)(__wc + L'\xffff2080') < 0x80) {
      *__s = bVar4;
      return 1;
    }
  }
  else {
    bVar1 = (byte)(__wc >> 6);
    if ((uint)__wc < 0x800) {
      __s[1] = bVar4 & 0x3f | 0x80;
      *__s = bVar1 | 0xc0;
      return 2;
    }
    bVar2 = (byte)(__wc >> 0xc);
    if (((uint)(__wc + L'\xffff2000') < 0x2000) || ((uint)__wc < 0xd800)) {
      *__s = bVar2 | 0xe0;
      __s[2] = bVar4 & 0x3f | 0x80;
      __s[1] = bVar1 & 0x3f | 0x80;
      return 3;
    }
    if ((uint)(__wc + L'\xffff0000') < 0x100000) {
      __s[3] = bVar4 & 0x3f | 0x80;
      *__s = (byte)(__wc >> 0x12) | 0xf0;
      __s[1] = bVar2 & 0x3f | 0x80;
      __s[2] = bVar1 & 0x3f | 0x80;
      return 4;
    }
  }
  piVar3 = __errno_location();
  *piVar3 = 0x54;
  return 0xffffffffffffffff;
}



void FUN_00407884(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (-1 < *(int *)(param_1 + 0x8c)) {
    __lockfile();
  }
  if (*(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x38)) {
    (**(code **)(param_1 + 0x48))(param_1,0,0);
  }
  if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
                    // WARNING: Could not recover jumptable at 0x004078cd. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(param_1 + 0x50))(param_1,*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10),1);
    return;
  }
  return;
}



void __stdio_exit_needed(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)__ofl_lock();
  for (lVar2 = *plVar1; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x70)) {
    FUN_00407884(lVar2);
  }
  FUN_00407884(__stdin_used);
  FUN_00407884(__stdout_used);
  FUN_00407884(__stderr_used);
  return;
}



undefined  [16] __ofl_lock(void)

{
  undefined8 in_RAX;
  undefined auVar1 [16];
  
  __lock(&DAT_0840c488);
  auVar1._8_8_ = in_RAX;
  auVar1._0_8_ = &DAT_0840c490;
  return auVar1;
}



void __ofl_unlock(void)

{
  __unlock(&DAT_0840c488);
  return;
}



undefined8 _fini(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



