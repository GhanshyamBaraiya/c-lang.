#include <stdio.h>

#define NUM_PRODUCTS 5

int main() {
    int product_number[NUM_PRODUCTS];
    float price[NUM_PRODUCTS];
    int quantity[NUM_PRODUCTS];
    float rate[NUM_PRODUCTS];
    float discount_amount[NUM_PRODUCTS];
    float rate_after_discount[NUM_PRODUCTS];
    float gst[NUM_PRODUCTS];
    float bill_amount[NUM_PRODUCTS];

    // Get input for each product
    for (int i = 0; i < NUM_PRODUCTS; i++) {
        printf("Enter product %d details:\n", i+1);
        printf("Product number: ");
        scanf("%d", &product_number[i]);
        printf("Price: ");
        scanf("%f", &price[i]);
        printf("Quantity: ");
        scanf("%d", &quantity[i]);
        printf("Rate: ");
        scanf("%f", &rate[i]);
        printf("Discount amount: ");
        scanf("%f", &discount_amount[i]);
        printf("Rate after discount: ");
        scanf("%f", &rate_after_discount[i]);
        printf("GST: ");
        scanf("%f", &gst[i]);

        // Calculate bill amount for this product
        bill_amount[i] = quantity[i] * rate_after_discount[i] * (1 + gst[i]/100);
    }

    // Print the bill amount for each product
    printf("\nProduct\tBill Amount\n");
    for (int i = 0; i < NUM_PRODUCTS; i++) {
        printf("%d\t%.2f\n", product_number[i], bill_amount[i]);
    }

    // Calculate and print the total bill amount for all products
    float total_bill_amount = 0;
    for (int i = 0; i < NUM_PRODUCTS; i++) {
        total_bill_amount += bill_amount[i];
    }
    printf("\nTotal bill amount: %.2f\n", total_bill_amount);

    return 0;
}