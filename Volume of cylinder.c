#include <stdio.h>

float cylinder_volume(float radius, float height){
    //Returns the  volume of a cylinder with the given radius and height
    const float pi = 3.142; //Define pi as a constant
    float volume = pi*radius*radius*height;
    return volume;
    
}

int main(){
    float radius, height, volume;
    printf("Enter the radius of the cylinder:");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder:");
    scanf("%f", &height);
    volume = cylinder_volume(radius, height);
    printf("The volume of the cylinder with radius %.2f and height %.2f is %.2f\n", radius, height, volume);
    return 0;
}