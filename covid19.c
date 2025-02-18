#include <stdio.h>

int main(){
    long long total_population;
    long long affected_people;
    long long deaths;
    long long hospitalised;
    long long healthy_people;

    // no of the total population 
    printf("\nenter the no of the total population:");
    scanf("12d",&total_population);
    // no of the affeted people
    printf("\n enter the no of people affected by COVID 19:");
    scanf("12d",&affected_people);
    // no of deaths
    printf("\n enter the no of deaths  by COVID 19:");
    scanf("12d",&deaths);
    // no of people hospitalised
    printf("\n enter the no of people hospitalised by COVID 19:");
    scanf("12d",&hospitalised);


    // calculate hte number of healthy people
    healthy_people=total_population-affected_people;

    // results of coronary infections
    printf("\n results\n");
    printf("\n total population:%12d\n",total_population);
    printf("\n affected people:%12d\n",affected_people);
    printf("\n deaths:%12d\n",deaths);
    printf("\n hospitalised:%12d",hospitalised);
    printf("\n healthy people:%12d",healthy_people);

    return 0;
}