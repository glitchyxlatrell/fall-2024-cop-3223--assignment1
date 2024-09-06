// fracturing.c
// Author: Latrell Kong
// UcfID: 5624427
// Class: COP 3223, Professor Parra
// Purpose: This program will use different functions to calculate the different aspects of two points 
// of a circle.
// Input: The position of the two points in a circle
//
// Output: The distance between the points and the perimeter, area, width, and height of the circle

#include <stdio.h>
//library for input and output functions

#include <math.h>
//library for mathematical operations

#define PI 3.14159
//declaring the value of PI

double askForUserInput(){
    //function that gets user input

    double userInput = 0;
    scanf("%lf", &userInput);
    //asking user for their input for value

    return userInput;
}

double findDistance(){
    //function that gets the distance between two points, but only outputs the position of the points 
    //and returns the distance value

    double x1 = askForUserInput();  //asking user input for x1
    double x2 = askForUserInput();  //asking user input for x2
    double y1 = askForUserInput();  //asking user input for y1
    double y2 = askForUserInput();  //asking user input for y2

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    //print statements that tell the position of the points entered

    double distance = sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
    //calculating distance between the points

    return distance;
    //returning the distance value
}

double calculateDistance(){
    //function that calculates the distance between two points and outputs value

    double x1 = askForUserInput();  //asking user input for x1
    double x2 = askForUserInput();  //asking user input for x2
    double y1 = askForUserInput();  //asking user input for y1
    double y2 = askForUserInput();  //asking user input for y2

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    //print statements that tell the position of the points entered

    
    double distance = sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
    printf("The distance between the two points is %lf\n", distance);
    //outputting the disntace between the two points

    return distance;
    //returning the distance value
}

double calculatePerimeter(){
    //function that will calculate perimeter of a circle encompassing a city and outputs the value

    double radius = findDistance()/2;   
    //using calculateDistance function to get diameter then dividing by half to find radius

    double perimeter = 2*PI*radius;     
    //finding perimeter using circumference of a circle formula

    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);
    //outputting the perimeter of circle

    return 3.4;
    //returing a double that indicates my difficulty level with this function

}

double calculateArea(){
    //function that will calculate the area of a circle given two points which indicate it's diameter

    double radius = findDistance()/2;
    //using calculateDistance function to get diameter then dividing by half to find radius

    double area = PI*pow(radius,2);
    //calculating the area of the cirlce using area of a circle formula

    printf("The area of the city encompassed by your request is %lf\n", area);
    //outputting area of the circle

    return 2.0;
    //returing a double that indicates my difficulty level with this function   
}

double calculateWidth(){
    double width = findDistance();
    //since width is equal to diameter, width is set equal to the return of findDistance

    printf("The width of the city encompassed by your request is %lf\n", width);
    //outputting width of the circle

     return 1.0;
    //returing a double that indicates my difficulty level with this function  
}

double calculateHeight(){
    double height = findDistance();
    //since height is equal to diameter, width is set equal to the return of findDistance

    printf("The height of the city encompassed by your request is %lf\n", height);
    //outputting height of the circle

     return 1.0;
    //returing a double that indicates my difficulty level with this function  
}


//main code that calls functions to calculate aspects of a circle given two points

int main(int argc, char **argv){
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

