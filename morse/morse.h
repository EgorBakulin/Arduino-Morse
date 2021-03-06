class morse
{

  private:
    short int pin;                      // pin used us a signal
    int signal_delay = 200;
    int dash_delay = 600;

  private:
    void dash()
    {
      digitalWrite( pin, HIGH );
      delay( dash_delay );
      digitalWrite( pin, LOW );
      delay ( signal_delay );
    }

  private:
    void dot()
    {
      digitalWrite ( pin, HIGH );
      delay ( signal_delay );
      digitalWrite ( pin, LOW );
      delay ( signal_delay );
    }

  public:
    void begin( short int begin_pin )
    {
      pin =  begin_pin;
      pinMode ( pin, OUTPUT );
    }
    
  public:
    void set_signal_delay(int delay)
    {
            signal_delay = delay;
    }

  public:
    void set_dash_delay(int delay)
    {
            dash_delay = delay;
    }

  public:
    void out_char ( char symbol )
    {
      if ( symbol >= 'A' &&   symbol <= 'Z' ) //register translation
      {
        symbol += 32;
      } 
      switch ( symbol )
      {
        case 'a':
          dot();
          dash();
          break;
        case 'b':
          dash();
          dot();
          dot();
          dot();
          break;
        case 'c':
          dash();
          dot();
          dash();
          dot();
          break;
        case 'd':
          dash();
          dot();
          dot();
          break;
        case 'e':
          dot();
          break;
        case 'f':
          dot();
          dot();
          dash();
          dot();
          break;
        case 'g':
          dash();
          dash();
          dot();
          break;
        case 'h':
          dot();
          dot();
          dot();
          dot();
          break;
        case 'i':
          dot();
          dot();
          break;
        case 'j':
          dot();
          dash();
          dash();
          dash();
          break;
        case 'k':
          dash();
          dot();
          dash();
          break;
        case 'l':
          dot();
          dash();
          dot();
          dot();
          break;
        case 'm':
          dash();
          dash();
          break;
        case 'n':
          dash();
          dot();
          break;
        case 'o':
          dash();
          dash();
          dash();
          break;
        case 'p':
          dot();
          dash();
          dash();
          dot();
          break;
        case 'q':
          dash();
          dash();
          dot();
          dash();
          break;
        case 'r':
          dot();
          dash();
          dot();
          break;
        case 's':
          dot();
          dot();
          dot();
          break;
        case 't':
          dash();
          break;
        case 'u':
          dot();
          dot();
          dash();
          break;
        case 'v':
          dot();
          dot();
          dot();
          dash();
          break;
        case 'w':
          dot();
          dash();
          dash();
          break;
        case 'x':
          dash();
          dot();
          dot();
          dash();
          break;
        case 'y':
          dash();
          dot();
          dash();
          dash();
          break;
        case 'z':
          dash();
          dash();
          dot();
          dot();
          break;
        case '1':
          dot();
          dash();
          dash();
          dash();
          dash();
          break;
        case '2':
          dot();
          dot();
          dash();
          dash();
          dash();
          break;
        case '3':
          dot();
          dot();
          dot();
          dash();
          dash();
          break;
        case '4':
          dot();
          dot();
          dot();
          dot();
          dash();
          break;
        case '5':
          dot();
          dot();
          dot();
          dot();
          dot();
          break;
        case '6':
          dash();
          dot();
          dot();
          dot();
          dot();
          break;
        case '7':
          dash();
          dash();
          dot();
          dot();
          dot();
          break;
        case '8':
          dash();
          dash();
          dash();
          dot();
          dot();
          break;
        case '9':
          dash();
          dash();
          dash();
          dash();
          dot();
          break;
        case '0':
          dash();
          dash();
          dash();
          dash();
          dash();
          break;
      }
    }
}; 

morse Morse;
