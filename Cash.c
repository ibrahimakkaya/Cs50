#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float d;                  
    do
    {
        d = get_float("Change: ");
    }
    while (d < 0);

    int c = round(d * 100);    

    int t;
    t = c - c % 25;            
    int f = t / 25;           

    c = c - f * 25;            

    int e;                    
    e = c - c % 10;             
    int n = e / 10;             

    c = c - n * 10;              


    int v;                      
    v = c - c % 5;              
    int r = v / 5;               

    c = c - r * 5;                

    int o;                     
    o = c - c % 1;              
    int u = o / 1;            

    c = c - u * 1;               

    int q = r + u + n + f;

    printf("%i", q);

    printf("\n");

}
