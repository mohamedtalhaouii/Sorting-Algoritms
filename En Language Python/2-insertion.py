
def tri_par_insertion(tableau):
    for i in range(1, len(tableau)):
        cle = tableau[i]
        j = i - 1
        while j >= 0 and cle < tableau[j]:
            tableau[j + 1] = tableau[j]
            j -= 1
        tableau[j + 1] = cle

# Exemple d'utilisation
tableau = [64, 25, 12, 22, 11]
tri_par_insertion(tableau)
print("Tableau trié par insertion:", tableau)
