#include "../lib/uopmsb/uop_msb_2_0_0.h"
using namespace uop_msb_200;

// You are to use these ojects to read the switch inputs
DigitalIn SW1(USER_BUTTON);
DigitalIn SW2(BTN1_PIN);
DigitalIn SW3(BTN2_PIN);
DigitalInOut SW4(BTN3_PIN,PIN_INPUT,PullDown,0);
DigitalInOut SW5(BTN4_PIN,PIN_INPUT,PullDown,0);

// You are to use this object to control the LEDs
BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);

//Use this to sound an error
Buzzer player;

// Note array. The string "-" is a rest
typedef struct {
    char note[3];
    Buzzer::OCTAVE_REGISTER octave;
    unsigned int time_ms;
} NOTE;

// https://en.wikipedia.org/wiki/List_of_musical_symbols
#define SEMIBREVE 1200          //Whole beat
#define MINIM (SEMIBREVE >> 1)  //Half
#define CROTCHET (MINIM >> 1)   //Quarter
#define QUAVER (CROTCHET >> 1)  //Eighth
#define SEMIQUAVER (QUAVER >> 1) //Sixteenth

//Triplets
#define SEMIBREVE_TRIP 900          //Whole beat
#define MINIM_TRIP (SEMIBREVE_TRIP >> 1)  //Half
#define CROTCHET_TRIP (MINIM_TRIP >> 1)   //Quarter
#define QUAVER_TRIP (CROTCHET_TRIP >> 1)  //Eighth
#define SEMIQUAVER_TRIP (QUAVER_TRIP >> 1) //Sixteenth

NOTE notes[] = {
    {"E", Buzzer::MIDDLE_OCTAVE, QUAVER},
    {"E", Buzzer::MIDDLE_OCTAVE, QUAVER},
    {"-", Buzzer::MIDDLE_OCTAVE, QUAVER},
    {"E", Buzzer::MIDDLE_OCTAVE, QUAVER},
    {"-", Buzzer::MIDDLE_OCTAVE, QUAVER},    
    {"C", Buzzer::MIDDLE_OCTAVE, QUAVER},
    {"E", Buzzer::MIDDLE_OCTAVE, CROTCHET},
    {"G", Buzzer::MIDDLE_OCTAVE, CROTCHET},
    {"-", Buzzer::MIDDLE_OCTAVE, CROTCHET},
    {"G", Buzzer::LOWER_OCTAVE,  CROTCHET},
    {"-", Buzzer::MIDDLE_OCTAVE, CROTCHET},

    {"C", Buzzer::MIDDLE_OCTAVE, QUAVER},
    {"-", Buzzer::MIDDLE_OCTAVE, CROTCHET}, 
    {"G", Buzzer::LOWER_OCTAVE,  QUAVER},
    {"-", Buzzer::MIDDLE_OCTAVE, CROTCHET}, 
    {"E", Buzzer::LOWER_OCTAVE,  QUAVER+CROTCHET},
    {"A", Buzzer::MIDDLE_OCTAVE, CROTCHET},
    {"B", Buzzer::MIDDLE_OCTAVE, CROTCHET},
    {"A#", Buzzer::MIDDLE_OCTAVE, QUAVER},
    {"A", Buzzer::MIDDLE_OCTAVE, CROTCHET},

    {"G", Buzzer::LOWER_OCTAVE,  CROTCHET_TRIP},
    {"E", Buzzer::MIDDLE_OCTAVE, CROTCHET_TRIP},
    {"G", Buzzer::MIDDLE_OCTAVE, CROTCHET_TRIP},
    {"A", Buzzer::HIGHER_OCTAVE, CROTCHET},
    {"F", Buzzer::MIDDLE_OCTAVE, QUAVER},
    {"G", Buzzer::MIDDLE_OCTAVE, QUAVER},

    {"-", Buzzer::MIDDLE_OCTAVE, QUAVER}, 
    {"E", Buzzer::MIDDLE_OCTAVE, CROTCHET},
    {"C", Buzzer::MIDDLE_OCTAVE, QUAVER},
    {"D", Buzzer::MIDDLE_OCTAVE, QUAVER},
    {"B", Buzzer::MIDDLE_OCTAVE, QUAVER+CROTCHET},    

    // Repeat

    {"C", Buzzer::MIDDLE_OCTAVE, QUAVER},
    {"-", Buzzer::MIDDLE_OCTAVE, CROTCHET}, 
    {"G", Buzzer::LOWER_OCTAVE,  QUAVER},
    {"-", Buzzer::MIDDLE_OCTAVE, CROTCHET}, 
    {"E", Buzzer::LOWER_OCTAVE,  QUAVER+CROTCHET},
    {"A", Buzzer::MIDDLE_OCTAVE, CROTCHET},
    {"B", Buzzer::MIDDLE_OCTAVE, CROTCHET},
    {"A#", Buzzer::MIDDLE_OCTAVE, QUAVER},
    {"A", Buzzer::MIDDLE_OCTAVE, CROTCHET},

    {"G", Buzzer::LOWER_OCTAVE,  CROTCHET_TRIP},
    {"E", Buzzer::MIDDLE_OCTAVE, CROTCHET_TRIP},
    {"G", Buzzer::MIDDLE_OCTAVE, CROTCHET_TRIP},
    {"A", Buzzer::HIGHER_OCTAVE, CROTCHET},
    {"F", Buzzer::MIDDLE_OCTAVE, QUAVER},
    {"G", Buzzer::MIDDLE_OCTAVE, QUAVER},

    {"-", Buzzer::MIDDLE_OCTAVE, QUAVER}, 
    {"E", Buzzer::MIDDLE_OCTAVE, CROTCHET},
    {"C", Buzzer::MIDDLE_OCTAVE, QUAVER},
    {"D", Buzzer::MIDDLE_OCTAVE, QUAVER},
    {"B", Buzzer::MIDDLE_OCTAVE, QUAVER+CROTCHET},    
};


int main()
{
    //Play an A for 

    player.playTone("A", Buzzer::MIDDLE_OCTAVE);
    wait_us(QUAVER*1000);
    player.rest();


    while (true)
    {   
        //Wait for the blue button
        while (SW1==0);

        // ***** MODIFY THE CODE BELOW HERE *****

        // 1. Write a loop to play the tune in the array `notes`
        //    You may recognise the tune :)
        //    Use player.playTone followed by a player.rest() to get the right duration of note as shown above

        
        // ***** MODIFY THE CODE ABOVE HERE *****
        
    }
}


