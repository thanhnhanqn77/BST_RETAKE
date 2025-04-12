int TimMin(TREE t)
{
    if (t == NULL) return -1;
    while (t->pLeft != NULL)
    {
        t = t->pLeft;
    }
    return t->data;
}
