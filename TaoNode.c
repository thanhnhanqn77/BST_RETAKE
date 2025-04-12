#include <stdio.h>
#include <stdlib.h>
#include "KhoiTaoCay.c"
#include "ThemNodeVaoCay.c"
#include "TimMax.c"
#include "TimMin.c"
#include "ChieuCaoCay.c"
#include "DiTimNodeTheMang.c"
#include "XoaNode.c"
#include "Menu.c"
NODE* TaoNode(int x)
{
    NODE* p = (NODE*)malloc(sizeof(NODE));
    if (p == NULL) return NULL;
    p->data = x;
    p->pLeft = NULL;
    p->pRight = NULL;
    return p;
}
