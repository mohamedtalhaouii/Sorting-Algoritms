
//Tri Par insertion ( insertion Sort )
//Complexité : O(n²)

void triInsertion(int T[], int taille)
{
    for (int i = 1 ; i < taille ; i++)
    {
        int tmp = T[i];
        int j = i - 1;
        while (tmp < T[j] && j >= 0)
        {
            T[j + 1] = T[j];
            j--;
        }
        T[j + 1] = tmp;
    }

}