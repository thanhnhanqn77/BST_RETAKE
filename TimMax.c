
int TimMax(TREE t)
{
    if (t == NULL) return -1; // cây rỗng
    while (t->pRight != NULL)
    {
        t = t->pRight;
    }
    return t->data;
}
