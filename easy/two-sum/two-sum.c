int* twoSum(int* nbr, int nbrSz, int trgt, int* rtrnSz) 
{
    int *tmp = malloc(sizeof(int) * 2);

    *rtrnSz = 2;

    for (int i = 0; i < nbrSz -1; ++i) {
        for (int j = i + 1; j < nbrSz; ++j) {
            if (nbr[i] + nbr[j] == trgt) {
                tmp[0] = i; tmp[1] = j;
                return tmp;
            }
        }
    }
    return tmp;
}