
def tri_par_selection(tableau):
    n = len(tableau)
    for i in range(n - 1):
        min_index = i
        for j in range(i + 1, n):
            if tableau[j] < tableau[min_index]:
                min_index = j
        tableau[i], tableau[min_index] = tableau[min_index], tableau[i]

# Exemple d'utilisation
tableau = [64, 25, 12, 22, 11]
tri_par_selection(tableau)
print("Tableau trié par sélection:", tableau)
