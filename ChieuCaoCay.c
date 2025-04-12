
int ChieuCaoCay(TREE t)
{
    if (t == NULL)
        return 0;
    int leftHeight = ChieuCaoCay(t->pLeft);
    int rightHeight = ChieuCaoCay(t->pRight);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}
