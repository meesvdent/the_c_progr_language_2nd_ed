#include <stdio.h>


/*  print celsius fahrenheit table
 *
 *  for cels = -100, -80, ..., 200 */


main()

{

  float celsius, fahr;

  int lower, upper, step;


  lower = -100;

  upper = 200;

  step = 20;
  

  celsius = lower;

  printf("%7s %7s\n", "Celsius", "Fahr");

  while(celsius <= 200) {
  
    fahr = (celsius * (9.0/5.0)) + 32.0;

    printf("%7.0f %7.2f\n", celsius, fahr);

    celsius = celsius + step;

  }

}
