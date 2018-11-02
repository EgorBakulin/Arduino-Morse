#include "morse.h"

void setup()
{
  Morse.begin ( 13 );
  Serial.begin(9600);
}

void loop()
{
  while ( Serial.available() )
  {
    Morse.out_char ( Serial.read() );
  }
}
