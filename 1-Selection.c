
//Tri Par Selection ( Selection Sort )
//Complexité : O(n²)

//ordre Decroissante
void triSelection(int T[], int taille)
{
    for (int i = 0 ; i < taille - 1 ; i++)
    {
        int min = i;
        for (int j = i + 1 ; j < taille ; i++)
        {
            if (T[j] < T[min])
            {
                min = j;
            }
        }
        echanger(&T[min], &T[i];);
    }

}
void echanger(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    
    return 0;
}