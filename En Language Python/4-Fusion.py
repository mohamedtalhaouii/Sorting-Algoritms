
def tri_fusion(tableau):
    if len(tableau) > 1:
        milieu = len(tableau) // 2
        gauche = tableau[:milieu]
        droite = tableau[milieu:]

        tri_fusion(gauche)
        tri_fusion(droite)

        i = j = k = 0

        while i < len(gauche) and j < len(droite):
            if gauche[i] < droite[j]:
                tableau[k] = gauche[i]
                i += 1
            else:
                tableau[k] = droite[j]
                j += 1
            k += 1

        while i < len(gauche):
            tableau[k] = gauche[i]
            i += 1
            k += 1

        while j < len(droite):
            tableau[k] = droite[j]
            j += 1
            k += 1

# Exemple d'utilisation
tableau = [64, 25, 12, 22, 11]
tri_fusion(tableau)
print("Tableau trié par fusion:", tableau)
