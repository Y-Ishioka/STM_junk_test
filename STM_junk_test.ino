/*
 *  Copyright(C) by Yukiya Ishioka
 *    for STM32-Nucleo-64
 */

#define SIN1PIN         3
#define SIN2PIN         4
#define SIN3PIN         5
#define CLKPIN          6
#define LATPIN          7

#define BTNPIN          PC13

#define DEF_LED_WIDTH   16
#define DEF_LED_HIGHT   16
#define DEF_BRIGHT_TIME 10000
#define DEF_SLIDE       4
#define DEF_INIT_POS    (DEF_LED_WIDTH * 3 + 1)


unsigned char  adr_tbl[ DEF_LED_HIGHT ][ DEF_LED_WIDTH ] = {
 /* 0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 */
  { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /*  0 */
  { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /*  1 */
  { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /*  2 */
  { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /*  3 */
  { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /*  4 */
  { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /*  5 */
  { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /*  6 */
  { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, /*  7 */
  { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 }, /*  8 */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 }, /*  9 */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 }, /* 10 */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 }, /* 11 */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 }, /* 12 */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 }, /* 13 */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 }, /* 14 */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, /* 15 */
};


unsigned char  disp_pattern0[ DEF_LED_HIGHT ][ DEF_LED_WIDTH ] = {
 /* 0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /*  0 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /*  1 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /*  2 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /*  3 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /*  4 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /*  5 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /*  6 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /*  7 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /*  8 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /*  9 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /* 10 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /* 11 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /* 12 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /* 13 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /* 14 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /* 15 */
};

unsigned char  disp_pattern1[ DEF_LED_HIGHT ][ DEF_LED_WIDTH ] = {
 /* 0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 */
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, /*  0 */
  { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /*  1 */
  { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /*  2 */
  { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /*  3 */
  { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /*  4 */
  { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /*  5 */
  { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /*  6 */
  { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, /*  7 */
  { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 }, /*  8 */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 }, /*  9 */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 }, /* 10 */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 }, /* 11 */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 }, /* 12 */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 }, /* 13 */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 }, /* 14 */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, /* 15 */
};

unsigned char  disp_pattern2[ DEF_LED_HIGHT ][ DEF_LED_WIDTH ] = {
 /* 0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 */
  { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
  { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },
  { 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0 },
  { 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0 },
  { 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1 },
  { 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 },
  { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },
  { 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0 },
};

#define DEF_MAX_PAT    3


int  disp_pos;
int  pat_pos2;
int  pat_pos3;
int  pat_num;
int  disp_slide;
int  btn_flag;
unsigned char  (*pattern_pnt)[ DEF_LED_HIGHT ][ DEF_LED_WIDTH ];

static volatile  int  usec_cnt;

void  usec_delay( int usec )
{
    int  cnt;

    if( usec <= 1 ) {
        usec = 1;
    }
    cnt = usec;

    for( usec_cnt=0; usec_cnt< cnt ; usec_cnt++ ) ;
}


void  dev_led_clr_out( void )
{
    int  wd;

    for( wd=0 ; wd<DEF_LED_WIDTH ; wd++ ) {
        digitalWrite( SIN1PIN, adr_tbl[0][wd] );

        digitalWrite( SIN2PIN, 0 );
        digitalWrite( SIN3PIN, 0 );

        usec_delay( 1 );
        digitalWrite( CLKPIN, 1 );
        usec_delay( 1 );
        digitalWrite( CLKPIN, 0 );
    }

    digitalWrite( LATPIN, 0 );
    usec_delay( 1 );
    digitalWrite( LATPIN, 1 );
}


void setup( void )
{
  pinMode( SIN1PIN,  OUTPUT );
  pinMode( SIN2PIN,  OUTPUT );
  pinMode( SIN3PIN,  OUTPUT );
  pinMode( CLKPIN,  OUTPUT );
  pinMode( LATPIN,  OUTPUT );
  pinMode( BTNPIN,  INPUT_PULLUP );

  digitalWrite( SIN1PIN, LOW );
  digitalWrite( SIN2PIN, LOW );
  digitalWrite( SIN3PIN, LOW );
  digitalWrite( CLKPIN, LOW );
  digitalWrite( LATPIN, HIGH );

  dev_led_clr_out();

  disp_pos = DEF_INIT_POS;
  pat_num = 0;
  disp_slide = DEF_SLIDE;
  btn_flag = 0;
}


void loop( void )
{
  int  hi, wd;
  int  pos;
  int  btn_stat;

  switch( pat_num ) {
  case 0:
    pattern_pnt = &disp_pattern0;
    break;
  case 1:
    pattern_pnt = &disp_pattern1;
    break;
  case 2:
    pattern_pnt = &disp_pattern2;
    break;
  default:
    pattern_pnt = &disp_pattern1;
    break;
  }

  pat_pos2 = DEF_LED_WIDTH * 2 - disp_pos;
  pat_pos3 = DEF_LED_WIDTH * 3 - disp_pos;

  for( hi=0 ; hi<DEF_LED_HIGHT ; hi++ ) {
    for( wd=0 ; wd<DEF_LED_WIDTH ; wd++ ) {

      digitalWrite( SIN1PIN, adr_tbl[hi][wd] );

      /* for SIN2 */
      pos = pat_pos2 - wd;
      if( pos >= 0 && pos < DEF_LED_WIDTH ) {
        digitalWrite( SIN2PIN, (uint8_t)(*pattern_pnt)[hi][pos] );
      } else {
        digitalWrite( SIN2PIN, 0 );
      }

      /* for SIN3 */
      pos = pat_pos3 - wd;
      if( pos >= 0 && pos < DEF_LED_WIDTH ) {
        digitalWrite( SIN3PIN, (uint8_t)(*pattern_pnt)[hi][pos] );
      } else {
        digitalWrite( SIN3PIN, 0 );
      }

      usec_delay( 1 );
      digitalWrite( CLKPIN, 1 );
      usec_delay( 1 );
      digitalWrite( CLKPIN, 0 );
    }

    btn_stat = digitalRead( BTNPIN );
    if( btn_stat == LOW && btn_flag == 0 ) {
      if( ++pat_num >= DEF_MAX_PAT ) {
        pat_num = 0;
      }
      btn_flag = 1;
    }

    digitalWrite( LATPIN, 0 );
    usec_delay( 1 );
    digitalWrite( LATPIN, 1 );
    usec_delay( DEF_BRIGHT_TIME );
  }

  if( btn_flag != 0 && btn_stat == HIGH ) {
    btn_flag = 0;
  }

  if( --disp_slide <= 0 ) {
    if( --disp_pos <= 0 ) {
      disp_pos = DEF_INIT_POS;
    }
    disp_slide = DEF_SLIDE;
  }

  dev_led_clr_out();
}

