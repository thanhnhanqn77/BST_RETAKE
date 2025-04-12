
NODE* TaoNode(int x)
{
    NODE* p = (NODE*)malloc(sizeof(NODE));
    if (p == NULL) return NULL;
    p->data = x;
    p->pLeft = NULL;
    p->pRight = NULL;
    return p;
}
