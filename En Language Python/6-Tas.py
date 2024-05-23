
def entasser(tableau, n, i):
    plus_grand = i
    gauche = 2 * i + 1
    droit = 2 * i + 2

    if gauche < n and tableau[gauche] > tableau[plus_grand]:
        plus_grand = gauche

    if droit < n and tableau[droit] > tableau[plus_grand]:
        plus_grand = droit

    if plus_grand != i:
        tableau[i], tableau[plus_grand] = tableau[plus_grand], tableau[i]
        entasser(tableau, n, plus_grand)

def tri_par_tas(tableau):
    n = len(tableau)

    # Construction du tas
    for i in range(n // 2 - 1, -1, -1):
        entasser(tableau, n, i)

    # Extraction d'éléments du tas
    for i in range(n - 1, 0, -1):
        tableau[i], tableau[0] = tableau[0], tableau[i]
        entasser(tableau, i, 0)

# Exemple d'utilisation
tableau = [64, 25, 12, 22, 11]
tri_par_tas(tableau)
print("Tableau trié par tas:", tableau)
