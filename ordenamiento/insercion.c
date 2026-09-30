void Insercion(int vec[], int n) {
    int i, j, elem;
    
    // Arranca en 1 porque asume que el elemento 0 ya esta en su lugar[cite: 2]
    for (i = 1; i < n; i++) {
        elem = vec[i]; // Carta a insertar
        j = i;
        
        // Mientras queden elementos a la izquierda y sean mayores que nuestra carta[cite: 2]
        while (j > 0 && vec[j-1] > elem) {
            vec[j] = vec[j-1]; // Desplaza el elemento a la derecha para hacer lugar[cite: 2]
            j--; // Retrocede la mirada
        }
        vec[j] = elem; // Inserta la carta en el hueco final[cite: 2]
    }
}

//segunda opcion
void ordInsercion(int numeros[], int n) {
    for (int i = 1; i < n; i++) {
        int actual = numeros[i];
        int j = i - 1;
        
        // Desplaza los elementos mayores hacia la derecha
        while (j >= 0 && numeros[j] > actual) {
            numeros[j + 1] = numeros[j];
            j--;
        }
        // Inserta el elemento en su lugar
        numeros[j + 1] = actual;
    }
}