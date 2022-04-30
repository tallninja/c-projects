# include <stdio.h>
# include <stdlib.h>

float calculateBasePay(float basicPay, float hours);
float calculateOvertime(int baseTime, float hoursWorked, float basicPay);
float calculateTaxes(float gross);

int main()
{
  float basicPayRate = 20.00;
  int baseTime = 40;
  float numberOfHours;

  printf("Enter the number of hours worked: ");
  scanf("%f", &numberOfHours);

  float basePay = calculateBasePay(basicPayRate, numberOfHours);
  float overTime = calculateOvertime(baseTime, numberOfHours, basicPayRate);
  float grossPay = basePay + overTime;
  float taxes = calculateTaxes(grossPay);
  float netPay = grossPay - taxes;

  printf("\nBase Pay: %.2f\n", basePay);
  printf("Overtime: %.2f\n", overTime);
  printf("Gross Pay: %.2f\n", grossPay);
  printf("Taxes: %.2f\n", taxes);
  printf("Net Pay: %.2f\n\n", netPay);
}

float calculateBasePay(float basicPay, float hours)
{
  return basicPay * (float) hours;
}

float calculateOvertime(int baseTime, float hoursWorked, float basicPay)
{
  return hoursWorked > baseTime ? ((hoursWorked - baseTime) * (basicPay / 2)) : 0;
}

float calculateTaxes(float gross)
{
  if (gross <= 300 && gross > 0) {
    return gross * .15;
  } 

  else if (gross > 300 && gross <= 450) {
    return gross * .2;
  } 
  else if (gross > 450) {
    return gross * .25;
  }
  else {
    return 0;
  }
}
