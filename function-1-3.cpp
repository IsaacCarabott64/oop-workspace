int num_count(int array[], int n, int number){
    if (n < 1){
        return 0;
    }

    int matches = 0;
    for (int i = 0; i < n; i++){
        if (array[i] == number){
            matches += 1;
        }
    }
    return matches;
}