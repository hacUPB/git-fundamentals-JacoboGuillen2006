#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr,"Usage: program <number>\n");
        return 1;
    }
    
    <h1>Evaluación</h1>

    <h3>En esta Evaluaciòn deberan verificar que el numero entero es mayor o igual a 0, esta nota vale el 15% de la materia</h3>

    int number = atoi(argv[1]); //Convert the console input argument to an integer
    
    /*It must be verified that the entered number is greater than or equal to zero*/
    
    <div class="row justify-content-center">
        <div class="col-5">
             <img src="img/imagen1.jpg_large" class="w-100 img-fluid" alt="">
        </div>
    </div>


      <a class="nav-link" href=https:"//www.youtube.com/watch?v=_tG70FWd1Ds&list=RDGMEM2VCIgaiSqOfVzBAjPJm-ag&index=2">video</a>
    if (number < 0) {
        perror("El número debe ser mayor a cero");
        exit(1);
    } else if (number > 0) {
        printf("El número es mayor que cero\n");
    } else {
        printf("El número es cero\n");
    }
    /*It must be verified that the entered number is greater than or equal to zero*/
    
    /*Implement the function that calculates the factorial of the input argument*/
    
    /*Print the result*/
    
    /*Implement the function that calculates if the argument is a prime number*/

    /*Print the result*/
    
    return 0;
}