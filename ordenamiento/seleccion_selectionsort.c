// 1. Herramienta auxiliar para intercambiar
void Intercambiar(int vec[], int i, int j) {
    int aux;
    aux = vec[i];
    vec[i] = vec[j];
    vec[j] = aux;
}

// 2. Herramienta auxiliar para encontrar la POSICION del mas chico
int Minimo(int vect[], int posi, int posf) {
    int m = posi;
    for (int i = posi + 1; i < posf; i++) {
        if (vect[i] < vect[m]) {
            m = i;
        }
    }
    return m;
}

// 3. El algoritmo principal de Seleccion
void OrdSeleccion(int vec[], int n) {
    int i, mini;
    for (i = 0; i < n - 1; i++) {
        mini = Minimo(vec, i, n); // Busca el menor
        if (mini != i) {
            Intercambiar(vec, i, mini); // Lo manda al frente[cite: 2]
        }
    }
}

//otra opcion
void ordSeleccion(int numeros[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minimo = i;
        
        // Busca la posición del menor elemento
        for (int j = i + 1; j < n; j++) {
            
            if (numeros[j] < numeros[minimo]) {
                minimo = j;
            }
        }
        // Intercambia
        int aux = numeros[i];
        numeros[i] = numeros[minimo];
        numeros[minimo] = aux;
    }
}