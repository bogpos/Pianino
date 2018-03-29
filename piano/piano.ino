bool play=true;
char recivedChar;
char noteDuration;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
recvNote();
playNote();
}
void recvNote(){
  if(Serial.available()>0)
  {
    recivedChar = Serial.read();
    //Serial.println(recivedChar);
    play = true;
  }
  // if(Serial.available()>0)
  {
 //  noteDuration = Serial.read();
 
  }
   
  }
 void playNote(){
  if(play){
  tone(8,fromCharToFreq(recivedChar),20);
  //  tone(8,fromCharToFreq(recivedChar),fromCharToDuration(noteDuration));
  // delay(fromCharToDuration(noteDuration));
   play=false;
  }
  }
  int fromCharToDuration(char duration)
  {
    switch (duration)
  
    { 
      //1
      case '☺':
      return 4000;
      break;
      //2
      case '☻':
      return 2000;
      break;
      //3
      case '♥':
      return 1000;
      break;
      //4
      case '♦':
      return 500;
      break;
      default:
      return 1000;
      break;
    }
  }
  float fromCharToFreq(char recChar)
  {
    switch (recChar)
    { 
      //1
      case '☺':
      return 27.5;
      break;
      //2
      case '☻':
      return 29.1352;
      break;
      //3
      case '♥':
      return 30.8677;
      break;
      //4
      case '♦':
      return 32.7032;
      break;
      //5
      case '♣':
      return 34.6478;
      break;
      //6
      case '♠':
      return 36.7081;
      break;
      //7
      case '•':
      return 38.8909;
      break;
      //8
      case '◘':
      return 41.2034;
      break;
      //9
      case '○':
      return 43.6535;
      break;
      //10
      case '◙':
      return 46.2493;
      break;
      //11
      case '♂':
      return 48.9994;
      break;
      //12
      case '♀':
      return 51.9131;
      break;
      //13
      case '♪':
      return 55.0000;
      break;
      //14
      case '♫':
      return 58.2705;
      break;
      //15
      case '☼':
      return 61.737354;
      break;
      //16
      case '►':
      return 65.4064;
      break;
      //17
      case '◄':
      return 69.2957;
      break;
      //18
      case '↕':
      return 73.4162;
      break;
      //19
      case '‼':
      return 77.7817;
      break;
      //20
      case '¶':
      return 82.4069;
      break;
      //21
      case '§':
      return 87.3071;
      break;
      //22
      case '▬':
      return 92.4986;
      break;
      //23
      case '↨':
      return 97.9989;
      break;
      //24
      case '↑':
      return 103.826;
      break;
      //25
      case '↓':
      return 110.0000;
      break;
      //26
      case '→':
      return 116.541;
      break;
      //27
      case '←':
      return 123.471;
      break;
      //28
      case '∟':
      return 130.813;
      break;
      //29
      case '↔':
      return 138.591;
      break;
      //30
      case '▲':
      return 146.832;
      break;
      //31
      case '▼':
      return 155.563;
      break;
      //32
      case ' ':
      return 164.814;
      break;
      //33
      case '!':
      return 174.614;
      break;
      //34
      case '"':
      return 184.997;
      break;
      //35
      case '#':
      return 195.998;
      break;
      //36
      case '$':
      return 207.652;
      break;
      //37
      case '%':
      return 220.000;
      break;
      //38
      case '&':
      return 233.082;
      break;
      //39
      case '\'':
      return 246.942;
      break;
      //40
      case '(':
      return 261.626;
      break;
      //41
      case ')':
      return 277.183;
      break;
      //42
      case '*':
      return 293.665;
      break;
      //43
      case '+':
      return 311.127;
      break;
      //44
      case ',':
      return 329.628;
      break;
      //45
      case '-':
      return 349.228;
      break;
      //46
      case '.':
      return 369.994;
      break;
      //47
      case '/':
      return 391.995;
      break;
      //48
      case '0':
      return 415.305;
      break;
      //49
      case '1':
      return 440.000;
      break;
      //50
      case '2':
      return 466.164;
      break;
      //51
      case '3':
      return 493.883;
      break;
      //52
      case '4':
      return 523.251;
      break;
      //53
      case '5':
      return 554.365;
      break;
      //54
      case '6':
      return 587.330;
      break;
      //55
      case '7':
      return 622.254;
      break;
      //56
      case '8':
      return 659.255;
      break;
      //57
      case '9':
      return 698.456;
      break;
      //58
      case ':':
      return 739.989;
      break;
      //59
      case ';':
      return 783.991;
      break;
      //60
      case '<':
      return 830.609;
      break;
      //61
      case '=':
      return 880.000;
      break;
      //62
      case '>':
      return 932.328;
      break;
      //63
      case '?':
      return 987.767;
      break;
      //64
      case '@':
      return 1046.50;
      break;
      //65
      case 'A':
      return 1108.73;
      break;
      //66
      case 'B':
      return 1174.66;
      break;
      //67
      case 'C':
      return 1244.51;
      break;
      //68
      case 'D':
      return 1318.51;
      break;
      //69
      case 'E':
      return 1396.91;
      break;
      //70
      case 'F':
      return 1479.98;
      break;
      //71
      case 'G':
      return 1567.98;
      break;
      //72
      case 'H':
      return 1661.22;
      break;
      //73
      case 'I':
      return 1760.00;
      break;
      //74
      case 'J':
      return 1864.66;
      break;
      //75
      case 'K':
      return 1975.53;
      break;
      //76
      case 'L':
      return 2093.00;
      break;
      //77
      case 'M':
      return 2217.46;
      break;
      //78
      case 'N':
      return 2349.32;
      break;
      //79
      case 'O':
      return 2489.02;
      break;
      //80
      case 'P':
      return 2637.02;
      break;
      //81
      case 'Q':
      return 2793.83;
      break;
      //82
      case 'R':
      return 2959.96;
      break;
      //83
      case 'S':
      return 3135.96;
      break;
      //84
      case 'T':
      return 3322.44;
      break;
      //85
      case 'U':
      return 3520.00;
      break;
      //86
      case 'V':
      return 3729.31;
      break;
      //87
      case 'W':
      return 3951.07;
      break;
      //88
      case 'X':
      return 4186.01;
      break;
      //89
      case 'Y':
      return 16.3516;
      break;
      //90
      case 'Z':
      return 17.3239;
      break;
      //91
      case '[':
      return 18.3540;
      break;
      //92
      case '\\':
      return 19.4454;
      break;
      //93
      case ']':
      return 20.6017;
      break;
      //94
      case '^':
      return 21.8268;
      break;
      //95
      case '_':
      return 23.1247;
      break;
      //96
      case '`':
      return 24.4997;
      break;
      //97
      case 'a':
      return 25.9565;
      break;
      //98
      case 'b':
      return 4434.92;
      break;
      //99
      case 'c':
      return 4698.64;
      break;
      //100
      case 'd':
      return 4978.03;
      break;
      //101
      case 'e':
      return 5274.04;
      break;
      //102
      case 'f':
      return 5587.65;
      break;
     }
  }
