#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr,"Usage: program <number>\n");
        return 1;
    }
    
    <h1>Evaluación</h1>

    <h3>adicione algunas cosas nuevas al codigo junto con la solcuiòn del ejercicio</h3>
    
    <a class="nav-link" href=https:https:"//confusion-snapper-025.notion.site/Evaluaci-n-Git-Github-y-Github-Classroom-93e515722ae844e38f525862d6cd536f">Solución Evaluación</a>

    <div class="row justify-content-center">
        <div class="col-5">
             <img src="img/imagen1.jpg_large" class="w-100 img-fluid" alt="">
        </div>
    </div>

    /*It must be verified that the entered number is greater than or equal to zero*/
      int number = atoi(argv[1]); //Convert the console input argument to an integer
    int main() {
    int number = 5; // Aquí asigna el valor que desees para 'number'

     if(number < 0)
    {
        perror("El núnmero debe ser mayor a cero");
        exit(1);
    }
    }
    /*Implement the function that calculates the factorial of the input argument*/
     int factorial = 1;
    int b;
    for (b = number; b > 1; b--)
    {
        factorial *= b;
    }
    
    /*Print the result*/
    printf("El factorial de %d es %d",number,factorial);
    /*Print the result*/
    
    /*Implement the function that calculates if the argument is a prime number*/
    int count = 0,index = 1;
    while (index < number)
    {
        if(number%index == 0)
            {
            count++;
            }
        index++;
    }
    
    /*Print the result*/
    if(count == 1)
    {
        printf("%d es número primo\n",number);
    }
    else
    {
        printf("%d no es número primo\n",number);
    }
    /*Print the result*/
    
    return 0;
}