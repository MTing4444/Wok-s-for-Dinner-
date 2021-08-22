/* Authors: Michael Ting and Christine Ting
 * Date: August 22, 2021
 * Description: This program receives user input in the form of meal preferences. It then recommends a Chinese meal to the user for dinner and provides a link
 * to an online recipe for the meal.
 */


#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
    int meatOrPlant;
    int meat;
    int meatStyle;
    int plant;
    int plantStyle;
    bool findRecipe = true;
    int continueLooking;

    // Introduction to the program
    printf("Wok's for Dinner?: Your Chinese Dinner Selector\n\nThis program will provide you with a link to a "
           "delicious recipe for a Chinese dish based on your preferences.\n\n");
    printf("For each question below, please enter the corresponding number of your choice.\n\n");

    while(findRecipe) {

        // User is prompted to enter their dinner preferences
        printf("Would you like a meat-based or plant-based option?\n");
        printf("1. Meat-based\n2. Plant-based\n");
        scanf("%d", &meatOrPlant);
        if(meatOrPlant == 1) {
            printf("What meat would you like to be the main component of the dish?\n");
            printf("1. Beef\n2. Chicken\n3. Pork\n4. Fish\n");
            scanf("%d", &meat);
            printf("How would you like the meat cooked?\n");
            printf("1. Steamed\n2. Fried\n");
            scanf("%d", &meatStyle);
            printf("\n");

            // The recommended dish and corresponding link to the recipe are displayed
            printf("Recommended Dish: ");
            if(meat == 1) {
                if(meatStyle == 1) {
                    printf("Steamed Beef Meatballs - https://whattocooktoday.com/chinese-steamed-meat-balls.html");
                } else {
                    printf("Stir Fried Broccoli and Beef - https://www.simplyrecipes.com/recipes/broccoli_beef/");
                }
            } else if(meat == 2) {
                if(meatStyle == 1) {
                    printf("Steamed Chicken with Mushroom - https://redhousespice.com/steamed-chicken-mushroom/");
                } else {
                    printf("Stir-Fried Kung Pao Chicken - https://cafedelites.com/kung-pao-chicken/");
                }
            } else if(meat == 3) {
                if(meatStyle == 1) {
                    printf("Steamed Pork Patty - https://madewithlau.com/recipes/steamed-pork-patty");
                } else {
                    printf("Fried Pork Chops - https://www.food.com/recipe/chinese-style-fried-pork-chops-124290");
                }
            } else {
                if(meatStyle == 1) {
                    printf(
                        "Steamed Fish with Ginger and Scallions - https://thewoksoflife.com/cantonese-steamed-fish/");
                } else {
                    printf("Fried Salt and Pepper Fish - https://christieathome.com/blog/chinese-salt-pepper-fish/");
                }
            }
            printf("\n");

        } else {
            printf("What plant-based option would you like to be the main component of the dish?\n");
            printf("1. Tofu\n2. Mushrooms\n3. Bok Choy\n4. Cabbage\n");
            scanf("%d", &plant);
            printf("How would you like the plant-based option cooked?\n");
            printf("1. Steamed\n2. Fried\n");
            scanf("%d", &plantStyle);
            printf("\n");
            printf("Recommended Dish: ");
            if(plant == 1) {
                if(plantStyle == 1) {
                    printf("Steamed Tofu - https://www.chinasichuanfood.com/steamed-tofu/");
                } else {
                    printf("Crispy Marinated Tofu - https://omnivorescookbook.com/crispy-marinated-tofu/");
                }
            } else if(plant == 2) {
                if(plantStyle == 1) {
                    printf("Steamed Enoki Mushrooms - https://www.chinasichuanfood.com/steamed-enoki-mushrooms/");
                } else {
                    printf(
                        "Asian Stir-Fried Mushrooms - https://www.aspicyperspective.com/asian-stir-fried-mushrooms/");
                }
            } else if(plant == 3) {
                if(plantStyle == 1) {
                    printf("Steamed Baby Bok Choy - https://rouxbe.com/recipes/68-steamed-baby-bok-choy");
                } else {
                    printf("Stir-Fried Bok Choy with Peanut Sauce - "
                           "https://www.foodandwine.com/recipes/stir-fried-bok-choy-peanut-sauce");
                }
            } else {
                if(plantStyle == 1) {
                    printf("Chinese Steamed Cabbage with Chopped Pepper - "
                           "https://www.mychineserecipes.com/recipe/"
                           "chinese-steamed-cabbage-with-chopped-pepper-recipe/");
                } else {
                    printf(
                        "Stir-Fried Cabbage - https://www.allrecipes.com/recipe/174210/super-easy-stir-fried-cabbage/");
                }
            }
            printf("\n");
        }

        printf("\n\nWould you like to continue looking for recipes?\n1. Yes\n2. No\n");
        scanf("%d", &continueLooking);
        printf("\n");
        if(continueLooking == 2) {
            findRecipe = false;
        }
    }

    printf("Enjoy your meal!\n");

    return 0;
}