#ifndef CAYNHIPHAN_H
#define CAYNHIPHAN_H

NODE* TaoNode(int x)
{
    NODE* p = (NODE*)malloc(sizeof(NODE));
    if (p == NULL) return NULL;
    p->data = x;
    p->pLeft = NULL;
    p->pRight = NULL;
    return p;
}
typedef NODE* TREE;


void KhoiTaoCay(TREE* t);
NODE* TaoNode(int x);
void ThemNodeVaoCay(TREE* t, int x);
int TimMax(TREE t);
int TimMin(TREE t);
int ChieuCaoCay(TREE t);
void DiTimNodeTheMang(NODE** x, NODE** y);
void XoaNode(TREE* t, int data);
void Menu(TREE* t);
#endif
