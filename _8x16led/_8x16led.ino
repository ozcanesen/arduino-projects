// font data
boolean font[28][8][5] =
{
  {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0}
  },{
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,0,0,0,0}
  },{
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
    {0,0,0,0,0}
  },{    
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,1},
    {0,1,1,1,0},
    {0,0,0,0,0}
  },{    
    {1,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,1,0},
    {1,1,1,0,0},
    {0,0,0,0,0}
  },{  
    {1,1,1,1,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,1},
    {0,0,0,0,0}
  },{
    {1,1,1,1,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {0,0,0,0,0}
  },{
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,0},
    {1,0,1,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,1},
    {0,0,0,0,0}
  },{
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,0,0,0,0}
  },{
    {0,1,1,1,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,1,1,1,0},
    {0,0,0,0,0}
  },{
    {0,0,1,1,1},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {1,0,0,1,0},
    {0,1,1,0,0},
    {0,0,0,0,0}
  },{
    {1,0,0,0,1},
    {1,0,0,1,0},
    {1,0,1,0,0},
    {1,1,0,0,0},
    {1,0,1,0,0},
    {1,0,0,1,0},
    {1,0,0,0,1},
    {0,0,0,0,0}
  },{
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,1},
    {0,0,0,0,0}
  },{
    {1,0,0,0,1},
    {1,1,0,1,1},
    {1,0,1,0,1},
    {1,0,1,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,0,0,0,0}
  },{
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,0,0,1},
    {1,0,1,0,1},
    {1,0,0,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,0,0,0,0}
  },{
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
    {0,0,0,0,0}
  },{
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {0,0,0,0,0}
  },{ 
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,1,0,1},
    {1,0,0,1,0},
    {0,1,1,0,1},
    {0,0,0,0,0}
  },{ 
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
    {1,0,1,0,0},
    {1,0,0,1,0},
    {1,0,0,0,1},
    {0,0,0,0,0}
  },{ 
    {0,1,1,1,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {0,1,1,1,0},
    {0,0,0,0,1},
    {0,0,0,0,1},
    {1,1,1,1,0},
    {0,0,0,0,0}
  },{ 
    {1,1,1,1,1},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,0,0,0}
  },{
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
    {0,0,0,0,0}
  },{
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0},
    {0,0,0,0,0}
  },{
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,1,0,1},
    {1,0,1,0,1},
    {1,0,1,0,1},
    {0,1,0,1,0},
    {0,0,0,0,0}
  },{
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0},
    {0,1,0,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,0,0,0,0}
  },{
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,0,0,0}
  },{
    {1,1,1,1,1},
    {0,0,0,0,1},
    {0,0,0,1,0},
    {0,0,1,0,0},
    {0,1,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,1},
    {0,0,0,0,0}
  },{
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,1,1,0,0},
    {0,1,1,0,0},
    {0,0,0,0,0}
  }
};
  int pos =0;
  int last=millis();

// char to font id
int getCharId(char pchar)
{
   if (pchar==' ') return 0;    
   if (pchar=='A') return 1;  
   if (pchar=='B') return 2;
   if (pchar=='C') return 3;
   if (pchar=='D') return 4;
   if (pchar=='E') return 5;
   if (pchar=='F') return 6;
   if (pchar=='G') return 7;
   if (pchar=='H') return 8;
   if (pchar=='I') return 9;
   if (pchar=='J') return 10;
   if (pchar=='K') return 11;
   if (pchar=='L') return 12;
   if (pchar=='M') return 13;
   if (pchar=='N') return 14;
   if (pchar=='O') return 15;
   if (pchar=='P') return 16;
   if (pchar=='Q') return 17;
   if (pchar=='R') return 18;
   if (pchar=='S') return 19;
   if (pchar=='T') return 20;
   if (pchar=='U') return 21;
   if (pchar=='V') return 22;
   if (pchar=='W') return 23;
   if (pchar=='X') return 24;
   if (pchar=='Y') return 25;
   if (pchar=='Z') return 26;
   if (pchar=='.') return 27;


}
String message = "HELLO WORLD";
void setup() {
    
    for (int i=2; i < 15; i++)
        pinMode(i,OUTPUT);
  
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);

    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(14,LOW);    

  
}  
  

void loop() {
    for (int i=0; i < 16; i++)
    {
        //set col
        digitalWrite(2,i%2);
        digitalWrite(3,(i/2)%2);
        digitalWrite(4,(i/4)%2);
        digitalWrite(5,(i/8)%2);
        //set rows
        for (int y=0; y< 8; y++)
        {
           if ((i+pos < 16) || (((i+pos)-16)%6==0) || ((i+pos)>(16+message.length()*6)))
           {
             digitalWrite(7+y,LOW);
             continue;
           }
           else
           {
              int x=i+pos-16;
              x = x -(x%6);
              x = x / 6;
              if (font[getCharId(message.charAt(x))][y][(i+pos-17)%6])
              {
                digitalWrite(7+y,HIGH);
              }
              else
              {
                digitalWrite(7+y,LOW);
              }
           }
        }
        //enable col demux
        digitalWrite(6,LOW);
        //wait
        delayMicroseconds(900);
        //disable col demux
        digitalWrite(6,HIGH);
    }
      int next = millis();
  
  if (last+75 < next )
  {
    last = next;
    pos++;
    if (pos > 15+message.length()*6)
    {
      pos=0;
    }
  }
     
}
