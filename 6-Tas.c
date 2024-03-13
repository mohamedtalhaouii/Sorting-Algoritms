
//Tri Par Tas (Heap Sort)
//Complexité : O(n.log(n))

void triTas(int T[], int taille)
{
    for (int i = taille / 2 - 1 ; i >= 0 ; i--)
    {
        tas(T, taille, i);
    }
    for (int i = taille - 1 ; i >= 0 ; i--)
    {
        echanger(&T[0], &T[i]);
        tas(T, i, 0);
    }
}

void tas(int T[], int taille, int i)
{
    int maxIdx = i;
    int g = 2 * i + 1;
    int d = 2 * i + 2;
    if (g < taille && T[g] > T[maxIdx])
    {
        maxIdx = g;
    }
    if (d < taille && T[g] > T[maxIdx]) 
    {
        maxIdx = d;
    }
    if (maxIdx != i)
    {
        echanger(&T[i], &T[maxIdx]);
        tas(T, taille, maxIdx);
    }
}

void echanger(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}