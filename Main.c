#include <stdio.h>
#include <stdlib.h>
//Function to sum two numbers asked from user's console.
double Sum()
{
    printf("Inserisci due numeri : ");
    //scanning int
    double a,b;
    scanf("%lf %lf",&a,&b);
    //print user chooice
    printf("Hai inserito i numeri %lf e %lf\n",a,b);
    //returning
    return a+b;
}
//Function to multiply two numbers asked from user's console.
double Muliply()
{
    printf("Inserisci due numeri : ");
    //scanning int
    double a,b;
    scanf("%lf %lf",&a,&b);
    //print user chooice
    printf("Hai inserito i numeri %lf e %lf\n",a,b);
    //returning
    return a*b;
}
//Function to divide two numbers asked from user's console.
double Divide()
{
    printf("Inserisci due interi : ");
    //scanning int
    double a,b;
    scanf("%lf %lf",&a,&b);
    //print user chooice
    printf("Hai inserito i numeri %lf e %lf\n",a,b);
    //returning
    return a/b;
}
//Function to substract two numbers asked from user's console.
double Substract()
{
    printf("Inserisci due numeri : ");
    //scanning int
    double a,b;
    scanf("%lf %lf",&a,&b);
    //print user chooice
    printf("Hai inserito i numeri %lf e %lf\n",a,b);
    //returning
    return a-b;
}
int main()
{
    int exit = 0;
    do
    {
        printf("Seleziona l'operazione da effettuare e premi invio : \n 1 - SUM \n 2 - MULTIPLY \n 3 - DIVIDE \n 4 - SUBSTRACT \n 5 - EXIT ");
        int a;
        scanf("%d",&a);
        switch(a)
        {
        case 1 :
                printf("Perfetto vuoi eseguire una somma!!!!\n");
                //requesting numberrs
                double sum = Sum();
                //printing results
                printf("La somma dei numeri inseriti e' %lf\n",sum);
                break;
        case 2 :
                printf("Perfetto vuoi eseguire una moltiplicazione!!!!\n");
                //requesting numberrs
                double product = Muliply();
                //printing results
                printf("Il prodotto dei numeri inseriti e' %lf\n",product);
                break;
        case 3 :
                printf("Perfetto vuoi eseguire una divisione!!!!\n");
                //requesting numberrs
                double divisor = Divide();
                //printing results
                printf("Il quoziente dei numeri inseriti e' %lf\n",divisor);
                break;
        case 4 :
                printf("Perfetto vuoi eseguire una sottrazione!!!!\n");
                //requesting numberrs
                double substractionResult = Substract();
                //printing results
                printf("La sottrazione dei numeri inseriti equivale a %lf\n",substractionResult);
                break;
        case 5 :
                exit = 1;
                break;

        }
    }while(exit == 0);
    /*system("pause"); Comando per ottenere far si che il programma non esca immediatamente alla fine dell'esecuzione ,ma richieda un invio per continuare.*/
    return 0;
}
