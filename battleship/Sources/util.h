//Header file containing prototypes and globals of misc fucntions

//LCD Macros
#define LCD_DATA PORTK
#define LCD_CTRL PORTK
#define RS 0x01
#define EN 0x02



//Utility Assembly Functions---------------------------------------------------

//enableLEDs--------------------------------------------------------------------
// Initialize LEDs as display on dragon board
// Arguments: 	none
// Output:		none
extern void enableLEDs(void);

//msDelay--------------------------------------------------------------------
// Creates delay of specified milliseconds
// Arguments:	number of ms to be delayed
// Output: 		none
extern void msDelay(int);

//clockSet--------------------------------------------------------------------
// Sets up PPL to achieve 24Mhz always
// Arguments:	none
// Output: 		none
extern void clockSet(void);





extern char hexKeypad(void);

extern void COMWRT4(unsigned char);
extern void DATWRT4(unsigned char);
void dispLCD(char);
void lcdInit(void);

//extern void lcdInit(void);

//extern void dispLCD(unsigned char);




