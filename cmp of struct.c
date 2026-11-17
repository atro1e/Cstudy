int cmp(const void *a, const void *b)
{
    const room *p = a;
    const room *q = b;

    return (p->start > q->start) - (p->start < q->start);
}

