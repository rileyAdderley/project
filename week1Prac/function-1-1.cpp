int array_sum (int array[],int n) {
    int sum = 0;
    if (n<1){
        sum = 0;
        return sum;
    }
    
    for (int i = 0; i<n; i++) {
        sum += array[i];
    }
return sum;
}