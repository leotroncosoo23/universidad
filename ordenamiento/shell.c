void ordShell(int numeros[], int n) {
    // La brecha arranca en la mitad del arreglo y se va dividiendo por 2
    for (int brecha = n / 2; brecha > 0; brecha /= 2) {
        
        for (int i = brecha; i < n; i++) {
            int temp = numeros[i];
            int j;
            
            // Compara elementos separados por la brecha
            for (j = i; j >= brecha && numeros[j - brecha] > temp; j -= brecha) {
                numeros[j] = numeros[j - brecha];
            }
            numeros[j] = temp;
        }
    }
}