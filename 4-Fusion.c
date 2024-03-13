
void triFusion(int T[], int g, int d)
{
    if (g < d)
    {
        int m = (g + d) / 2;
        triFusion(T, g, m);
        triFusion(T, m + 1, d);
        fusion(T, g, m, d);
    }
}

fusion(int T[], int g, int m, int d)
{
    int i, j, k;
    int n1 = m - g + 1;
    int n2 = d - m;
    int Tg[n1], Td[n2];
    for (i = 0; i < n1; i++)
    {
        Tg[i] = T[g + i];
    }
    for (j = 0; j < n2; j++)
    {
        Td[j] = T[m + 1 + j];
    }
    i = 0;
    j = 0;
    k = g;
    while (i < n1 && j < n2) 
    {
        if (Tg[i] <= Td[j]){
            T[k] = Tg[i];
            i++;
        }
        else {
            T[k] = Td[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        T[k] = Tg[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        T[k] = Td[j];
        j++;
        k++;
    }
}