#include <stdio.h>

int main(void) {
    // Materialeinzelkosten
    float material_cost;
    printf("Materialeinzelkosten: ");
    scanf("%f", &material_cost);

    // Materialgemeinkosten
    float material_overhead_cost = 4.00f;

    // Materialkosten
    float material_total_cost = material_cost + material_overhead_cost;

    // Relative Steigerung der Materialkosten gegenüber den Materialeinzelkosten
    float material_cost_increase = (material_total_cost - material_cost) / material_cost * 100;
    printf("Materialkosten: %.2f EUR (relative Steigerung: %.2f%%)\n", material_total_cost, material_cost_increase);

    // Fertigungseinzelkosten
    float manufacturing_cost = 10.00f;

    // Fertigungsgemeinkosten
    float manufacturing_overhead_cost = 6.50f;

    // Herstellkosten
    float total_manufacturing_cost = material_total_cost + manufacturing_cost + manufacturing_overhead_cost;

    // Relative Steigerung der Herstellkosten gegenüber den Materialkosten
    float manufacturing_cost_increase = (total_manufacturing_cost - material_total_cost) / material_total_cost * 100;
    printf("Herstellkosten: %.2f EUR (relative Steigerung: %.2f%%)\n", total_manufacturing_cost,
           manufacturing_cost_increase);

    // Verwaltungsgemeinkosten
    float administrative_overhead_cost = 8.50f;

    // Vertriebsgemeinkosten
    float sales_overhead_cost = 3.50f;

    // Selbstkosten
    float self_cost = total_manufacturing_cost + administrative_overhead_cost + sales_overhead_cost;

    // Relative Steigerung der Selbstkosten gegenüber den Herstellkosten
    float self_cost_increase = (self_cost - total_manufacturing_cost) / total_manufacturing_cost * 100;
    printf("Selbstkosten: %.2f EUR (relative Steigerung: %.2f%%)\n", self_cost, self_cost_increase);

    // Gewinnmarge
    float profit_margin = 0.25f;

    // Gewinnmarge
    float profit = self_cost * profit_margin;

    // Total
    float total_cost = self_cost + profit;

    // Relative Steigerung des Totals gegenüber den Selbstkosten
    float total_cost_increase = (total_cost - self_cost) / self_cost * 100;

    printf("Total: %.2f EUR (relative Steigerung: %.2f%%)\n", total_cost, total_cost_increase);
}