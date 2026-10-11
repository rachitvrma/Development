// Sum of squares of special elements

int sumOfSquares(int *nums, int numsSize) {
    int placeholder = nums[numsSize];

    // All the indexes have to be +1 ed
    int specials[numsSize];

    int sum = 0;

    int counter = 0;
    while (counter < numsSize) {
        if (!(numsSize % (counter + 1)))
            sum = sum + nums[counter] * nums[counter];

        counter++;
    }

    return sum;
}
