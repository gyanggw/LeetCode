int reverseDegree(char* s) {
    int data = 0, sum = 0, product = 1, i = 0;
    
    while (s[i] != '\0') {
        data = s[i] - 'a'+1;
        data=27-data;
        product = (i+1)*data;
        sum+=product;
        i++; 
    }
    return sum;
}