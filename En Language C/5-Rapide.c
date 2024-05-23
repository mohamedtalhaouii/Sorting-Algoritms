
//Tri Rapide (Quick Sort)
//Complexité : O(n²)

void triRapide(int T[], int bas, int haut)
{
    if (bas < haut)
    {
        int pi = partition(T, bas, haut);
        triRapide(T, bas, pi - 1);
        triRapide(T, pi + 1, haut);
    }
}
int partition(int T[], int bas, int haut)
{
    int pivot = T[haut];
    int i = (bas - 1);
    for (int j = bas; j < haut; j++)
    {
        if (T[j] <= pivot)
        {
            i++;
            echanger(&T[i], &T[j]);
        }
    }
    echanger(&T[i + 1], &T[haut]);
    return (i + 1);
}

void echanger(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}