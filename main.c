#include<stdio.h>
 #include<stdlib.h>
  int main(){
 int inventory[6][5]={{5,4500,0},
{40,1800,0},
{2,10000,0},
{10,4000,0},
{30,500,0},
{50,1000,0}};
printf("items quantity\tUnit price\tTotal sales\tNew Price\tNew Expected Income\n");
for (int i = 0; i < 6; i++) {
 for (int j = 0; j < 5; j++) {
 printf("%d\t\t", inventory[i][j]); }
 printf("\n"); }
//to get the value in the third column we are to multiply the value in column 1 by those in column 2
 for (int i = 0; i < 6; i++) {
 for (int j = 0; j < 5; j++) { inventory[i][2] = inventory[i][0]*inventory[i][1]; } }
 //to get the value in the new price column, we multiply the value in the price column by 12/100 and the add the previous value which is the same as 1.12
 for (int i = 0; i < 6; i++) { for (int j = 0; j < 5; j++) {
 inventory[i][3] = inventory[i][1] * 1.12; } }
 //to get the value in the new expected income column, we multiply the value in the new price column by the quantity of the commodities
 for (int i = 0; i < 6; i++) {
 for (int j = 0; j < 5; j++) {
 inventory[i][4] = inventory[i][3] * inventory[i][0]; } }
 printf("\n");
 int newtotalincome=0;//we give it an initial value
 printf("items quantity\tUnit price\tTotal sales\tNew Price\tNew Expected Income\n");
 for (int i = 0; i < 6; i++) {
 for (int j = 0; j < 5; j++) {
printf("%d\t\t", inventory[i][j]); }
 newtotalincome = newtotalincome + inventory[i][4];
 printf("\n"); }
printf(" The NewTotal Income is %d shillings", newtotalincome);
 return 0; }
