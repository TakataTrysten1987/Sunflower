//start

#include <stdio.h>

// Declare variables and structures
typedef struct design {
   char* name;
   char* description;
   int type;
   float price;
   int size;
} design;

// Define functions
void printDesign(design* d);

// Main program
int main() {
   // Create a design array
   design designs[2000];  

   // Initialize the design array
   for (int i = 0; i < 2000; i++) {
      designs[i].name = "Graphic Design Service";
      designs[i].description = "A freelance graphic design service that specializes in creating beautiful and effective branding and marketing materials.";
      designs[i].type = Graphic Design;
      designs[i].price = 300;
      designs[i].size = 2; 
   }
   
   // Print out each design
   for (int i = 0; i < 2000; i++) {
      printDesign(&designs[i]);
   }
   
   return 0;
}

// Function definitions
void printDesign(design* d) {
   printf("Name: %s\nDescription: %s\nType: %d\nPrice: %.2f\nSize: %d\n", d->name, d->description, d->type, d->price, d->size);
}

// end