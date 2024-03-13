
void triBulle(int T[], int taille)
{
    for (int i = 0 ; i < taille - 1 ; i++)
    {
        for (int j = 0; j < taille - i - 1; j++)
        {
            if (T[j] > T[j + 1])
            {
                echanger(&T[j], &T[j + 1]);
            }
        }
    }

}

void echanger(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}