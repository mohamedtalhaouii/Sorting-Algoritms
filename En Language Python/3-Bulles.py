
def tri_a_bulles(tableau):
    n = len(tableau)
    for i in range(n):
        for j in range(0, n-i-1):
            if tableau[j] > tableau[j+1]:
                tableau[j], tableau[j+1] = tableau[j+1], tableau[j]

# Exemple d'utilisation
tableau = [64, 25, 12, 22, 11]
tri_a_bulles(tableau)
print("Tableau trié à bulles:", tableau)
