
def partitionner(tableau, bas, haut):
    pivot = tableau[haut]
    i = bas - 1
    for j in range(bas, haut):
        if tableau[j] <= pivot:
            i += 1
            tableau[i], tableau[j] = tableau[j], tableau[i]
    tableau[i + 1], tableau[haut] = tableau[haut], tableau[i + 1]
    return i + 1

def tri_rapide(tableau, bas, haut):
    if bas < haut:
        pivot = partitionner(tableau, bas, haut)
        tri_rapide(tableau, bas, pivot - 1)
        tri_rapide(tableau, pivot + 1, haut)

# Exemple d'utilisation
tableau = [64, 25, 12, 22, 11]
tri_rapide(tableau, 0, len(tableau) - 1)
print("Tableau trié par rapide:", tableau)
