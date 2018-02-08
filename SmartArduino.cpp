#include <Wire.h>
#include <Arduino.h>
#include <SmartArduino.h>


SmartArduino::SmartArduino()
{
  Wire.begin();
  /*char data[10];
  int i;

  data[0] = 0xEC;//0xEC01 (CONFIG2-REGISTER)
  data[1] = 0x01;
  data[2] = 0x02;//00000010 --> Bedeutet I2C-Lock (I2C ist nun die gewählte Übertragungsart)
  write_i2c( data, 3);


  data[0] = 0xEC;//0xEC01 (CONFIG2-REGISTER)
  write_i2c( data, 1);

  data[0] = 0xE7;//0xE7FE writeprotection
  data[1] = 0xFE;
  data[2] = 0xAD;
  write_i2c( data, 3);
  
  data[0] = 0xE7;//0xE7E3 writeprotection OFF
  data[1] = 0xE3;
  data[2] = 0x00;
  write_i2c( data, 3);
  
  data[0] = 0xE6;//0xE60E (COMPMODE-REGISTER)
  data[1] = 0x0E;
  data[2] = 0x01;//50HZ 0x60 60HZ
  data[3] = 0xFF;
  write_i2c( data, 3);

  data[0] = 0x43;//0x43B5 (DICOEFF-REGISTER)
  data[1] = 0xB5;
  data[2] = 0xFF;
  data[3] = 0x80;
  data[4] = 0x00;
  write_i2c( data, 5);
  
  data[0] = 0x43;//0x43AB (WTHR1-REGISTER)
  data[1] = 0xAB;
  data[2] = 0x00;
  data[3] = 0x00;
  data[4] = 0x00;
  data[5] = 0x17;
  write_i2c( data, 6);
  
  data[0] = 0x43;//0x43AC (WTHR0-REGISTER)
  data[1] = 0xAC;
  data[2] = 0x00;
  data[3] = 0x85;
  data[4] = 0x60;
  data[5] = 0x16;
  write_i2c( data, 6);
  
  data[0] = 0x43;//0x43B3 (VLEVEL-REGISTER)
  data[1] = 0xB3;
  data[2] = 0x00;
  data[3] = 0x0C;
  data[4] = 0xEC;
  data[5] = 0x85;
  write_i2c( data, 6);
  
  delay(875);
  
  data[0] = 0x43;//0x4381 (AVGAIN-REGISTER)
  data[1] = 0x81;
  data[2] = 0xFF;
  data[3] = 0xFC;
  data[4] = 0x1C;
  data[5] = 0xC2;
  write_i2c( data, 6);
  
  data[0] = 0x43;//0x4383 (BVGAIN-REGISTER)
  data[1] = 0x83;
  data[2] = 0xFF;
  data[3] = 0xFC;
  data[4] = 0x1C;
  data[5] = 0xC2;
  write_i2c( data, 6);
  
  data[0] = 0x43;//0x4385 (CVGAIN-REGISTER)
  data[1] = 0x85;
  data[2] = 0xFF;
  data[3] = 0xFC;
  data[4] = 0x1C;
  data[5] = 0xC2;
  write_i2c( data, 6);
  
  data[0] = 0xE7;//0xE702 LCYCMODE
  data[1] = 0x02;
  data[2] = 0x0F;
  write_i2c( data, 3);
  
  data[0] = 0xE6;//0xE60C LINECYC
  data[1] = 0x0C;
  data[2] = 0xC8;
  write_i2c( data, 3);
  
  data[0] = 0xE7;//0xE7FE writeprotection
  data[1] = 0xFE;
  data[2] = 0xAD;
  write_i2c( data, 3);
  
  data[0] = 0xE7;//0xE7E3 writeprotection
  data[1] = 0xE3;
  data[2] = 0x80;
  write_i2c( data, 3);
  
  data[0] = 0xE2;//0xE228 (RUN-Register)
  data[1] = 0x28;
  data[2] = 0x00;
  data[3] = 0x01;
  write_i2c( data, 4);*/
  
}



int SmartArduino::init()
{
  Wire.begin();
  char data[10];
  int i;

  data[0] = 0xEC;//0xEC01 (CONFIG2-REGISTER)
  data[1] = 0x01;
  data[2] = 0x02;//00000010 --> Bedeutet I2C-Lock (I2C ist nun die gewählte Übertragungsart)
  write_i2c( data, 3);

 

  data[0] = 0xEC;//0xEC01 (CONFIG2-REGISTER)
  write_i2c( data, 1);

  data[0] = 0xE7;//0xE7FE writeprotection
  data[1] = 0xFE;
  data[2] = 0xAD;
  write_i2c( data, 3);
  
  data[0] = 0xE7;//0xE7E3 writeprotection OFF
  data[1] = 0xE3;
  data[2] = 0x00;
  write_i2c( data, 3);
  
  data[0] = 0xE6;//0xE60E (COMPMODE-REGISTER)
  data[1] = 0x0E;
  data[2] = 0x01;//50HZ 0x60 60HZ
  data[3] = 0xFF;
  write_i2c( data, 3);

  data[0] = 0x43;//0x43B5 (DICOEFF-REGISTER)
  data[1] = 0xB5;
  data[2] = 0xFF;
  data[3] = 0x80;
  data[4] = 0x00;
  write_i2c( data, 5);
  
  data[0] = 0x43;//0x43AB (WTHR1-REGISTER)
  data[1] = 0xAB;
  data[2] = 0x00;
  data[3] = 0x00;
  data[4] = 0x00;
  data[5] = 0x17;
  write_i2c( data, 6);
  
  data[0] = 0x43;//0x43AC (WTHR0-REGISTER)
  data[1] = 0xAC;
  data[2] = 0x00;
  data[3] = 0x85;
  data[4] = 0x60;
  data[5] = 0x16;
  write_i2c( data, 6);
  
  data[0] = 0x43;//0x43B3 (VLEVEL-REGISTER)
  data[1] = 0xB3;
  data[2] = 0x00;
  data[3] = 0x0C;
  data[4] = 0xEC;
  data[5] = 0x85;
  write_i2c( data, 6);
  
  delay(875);
  
  data[0] = 0x43;//0x4381 (AVGAIN-REGISTER)
  data[1] = 0x81;
  data[2] = 0xFF;
  data[3] = 0xFC;
  data[4] = 0x1C;
  data[5] = 0xC2;
  write_i2c( data, 6);
  
  data[0] = 0x43;//0x4383 (BVGAIN-REGISTER)
  data[1] = 0x83;
  data[2] = 0xFF;
  data[3] = 0xFC;
  data[4] = 0x1C;
  data[5] = 0xC2;
  write_i2c( data, 6);
  
  data[0] = 0x43;//0x4385 (CVGAIN-REGISTER)
  data[1] = 0x85;
  data[2] = 0xFF;
  data[3] = 0xFC;
  data[4] = 0x1C;
  data[5] = 0xC2;
  write_i2c( data, 6);
  
  data[0] = 0xE7;//0xE702 LCYCMODE
  data[1] = 0x02;
  data[2] = 0x0F;
  write_i2c( data, 3);
  
  data[0] = 0xE6;//0xE60C LINECYC
  data[1] = 0x0C;
  data[2] = 0xC8;
  write_i2c( data, 3);
  
  data[0] = 0xE7;//0xE7FE writeprotection
  data[1] = 0xFE;
  data[2] = 0xAD;
  write_i2c( data, 3);
  
  data[0] = 0xE7;//0xE7E3 writeprotection
  data[1] = 0xE3;
  data[2] = 0x80;
  write_i2c( data, 3);
  
  data[0] = 0xE2;//0xE228 (RUN-Register)
  data[1] = 0x28;
  data[2] = 0x00;
  data[3] = 0x01;
  write_i2c( data, 4);
  
}

int SmartArduino::read()
{
    
    char data[30],data_out[20];
    float ergebnis;
    double VAL = PI / 180.0;
    double rms_factor_current = 4191910;
    double ia_corr=1,ib_corr=1,ic_corr=1;
    char ua_gemessen=1,ub_gemessen=1,uc_gemessen=1;
    char string[100];
    double data_temp;
    const char *date;
    unsigned int i;
	
    ua_gemessen=1;
    ub_gemessen=1;
    uc_gemessen=1;
    //0 current phase a
    data_out[0] = 0x43;//0x43C0 (AIRMS; Current rms an A)
    data_out[1] = 0xC0;
    if(write_i2c(data_out, 2) != 2)
	{
		Wire.flush();
		//Wire.reset();
		return -1;
	}
    if(read_i2c(data, 4) != 4) return -1;
    ergebnis=(double) (FACTOR_2*data[1])+(FACTOR_1*data[2])+data[3];

    ia=((((ergebnis * 0.3535) / rms_factor_current) / CURRENT_RESISTOR_A) / CURRENT_CLAMP_FACTOR_A) * 100.0 * OFFSET_CURRENT_A;

    //1 current phase b
    data_out[0] = 0x43;//0x43C2 (BIRMS; Current rms an B)
    data_out[1] = 0xC2;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, BUFSIZE) != BUFSIZE) return -1;
    ergebnis=(double) (FACTOR_2*data[1])+(FACTOR_1*data[2])+data[3];
    ib=((((ergebnis * 0.3535) / rms_factor_current) / CURRENT_RESISTOR_B) / CURRENT_CLAMP_FACTOR_B) * 100.0 * OFFSET_CURRENT_B;

    //2 current phase c
    data_out[0] = 0x43;//0x43C4 (CIRMS; Current rms an C)
    data_out[1] = 0xC4;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, BUFSIZE) != BUFSIZE) return -1;
    ergebnis=(double) (FACTOR_2*data[1])+(FACTOR_1*data[2])+data[3];
    ic=((((ergebnis * 0.3535) / rms_factor_current) / CURRENT_RESISTOR_C) / CURRENT_CLAMP_FACTOR_C) * 100.0 * OFFSET_CURRENT_C;
    
    //3 current phase n
    
    //4 voltage phase a
    data_out[0] = 0x43;//0x43C1 (AVRMS; Voltage rms an A)
    data_out[1] = 0xC1;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, BUFSIZE) != BUFSIZE) return -1;
    ergebnis=(FACTOR_2*data[1])+(FACTOR_1*data[2])+data[3];
    if( ergebnis/10000 > 100) ua=ergebnis/10000;
    else ua_gemessen=0;
    
    //5 voltage phase b
    data_out[0] = 0x43;//0x43C3 (BVRMS; Voltage rms an B)
    data_out[1] = 0xC3;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, BUFSIZE) != BUFSIZE) return -1;
    ergebnis=(FACTOR_2*data[1])+(FACTOR_1*data[2])+data[3];
    if( ergebnis/10000 > 100) ub=ergebnis/10000;
    else ub_gemessen=0;

    //6 voltage phase c
    data_out[0] = 0x43;//0x43C5 (CVRMS; Voltage rms an C)
    data_out[1] = 0xC5;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, BUFSIZE) != BUFSIZE) return -1;
    ergebnis=(FACTOR_2*data[1])+(FACTOR_1*data[2])+data[3];
    if( ergebnis/10000 > 100) uc=ergebnis/10000;
    else uc_gemessen=0;
    
    //7  Phase A total active power.
    data_out[0] = 0xE5;//0xE513 (AWATT total active power an A)
    data_out[1] = 0x13;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, BUFSIZE) != BUFSIZE) return -1;
    ergebnis=(FACTOR_3*data[0])+(FACTOR_2*data[1])+(FACTOR_1*data[2])+data[3];
    if( ua_gemessen) awatt=(ergebnis*POWER_CORRECTION_FACTOR_A);
    else awatt=ia*ua;
    
    //8  Phase B total active power.
    data_out[0] = 0xE5;//0xE514 (BWATT total active power an B)
    data_out[1] = 0x14;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, BUFSIZE) != BUFSIZE) return -1;
    ergebnis=(FACTOR_3*data[0])+(FACTOR_2*data[1])+(FACTOR_1*data[2])+data[3];
    if( ub_gemessen) bwatt=(ergebnis*POWER_CORRECTION_FACTOR_B);
    else bwatt=ib*ub;
    
    //9  Phase C total active power.
    data_out[0] = 0xE5;//0xE515 (CWATT total active power an C)
    data_out[1] = 0x15;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, BUFSIZE) != BUFSIZE) return -1;
    ergebnis=(FACTOR_3*data[0])+(FACTOR_2*data[1])+(FACTOR_1*data[2])+data[3];
    if( uc_gemessen) cwatt=(ergebnis*POWER_CORRECTION_FACTOR_C);
    else cwatt=ic*uc;

    //10 cosphi phase a
    data_out[0] = 0xE6;//0xE601 (ANGLE0 cosphi an A)
    data_out[1] = 0x01;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, 2) != 2) return -1;
    ergebnis=(FACTOR_1*data[0])+data[1];
    if( ua_gemessen) cosa=cos(ergebnis * FACTOR_CIRCLE * 50 / ADE7878_CLOCK * VAL);
    else cosa=1;

    //11 cosphi phase b
    data_out[0] = 0xE6;//0xE601 (ANGLE1 cosphi an B)
    data_out[1] = 0x02;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, 2) != 2) return -1;
    ergebnis=(FACTOR_1*data[0])+data[1];
    if( ub_gemessen) cosb=cos(ergebnis * FACTOR_CIRCLE * 50 / ADE7878_CLOCK * VAL);
    else cosb=1;

    //12 cosphi phase c
    data_out[0] = 0xE6;//0xE601 (ANGLE2 cosphi an C)
    data_out[1] = 0x03;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, 2) != 2) return -1;
    ergebnis=(FACTOR_1*data[0])+data[1];
    if( uc_gemessen) cosc=cos(ergebnis * FACTOR_CIRCLE * 50 / ADE7878_CLOCK * VAL);
    else cosc=1;

    //13 frequency phase a
    data_out[0] = 0xE7;//MMODE-Register measure frequency at VA
    data_out[1] = 0x00;
    data_out[2] = 0x1C;
    if(write_i2c(data_out, 3) != 3) return -1;
    delay(50);
    data_out[0] = 0xE6;//0xE607 (PERIOD)
    data_out[1] = 0x07;
    if(write_i2c(data_out, 2) != 2) return -1;
    if (read_i2c(data, 2) != 2) return -1;
    ergebnis=(FACTOR_1*data[0])+data[1];
    hza=(double) ADE7878_CLOCK / (ergebnis +1 );
    
    //14 frequency phase b
    data_out[0] = 0xE7;//MMODE-Register measure frequency at VB
    data_out[1] = 0x00;
    data_out[2] = 0x1D;
    if(write_i2c(data_out, 3) != 3) return -1;
    delay(50);
    data_out[0] = 0xE6;//0xE607 (PERIOD)
    data_out[1] = 0x07;
    if(write_i2c(data_out, 2) != 2) return -1;
    if (read_i2c(data, 2) != 2) return -1;
    ergebnis=(FACTOR_1*data[0])+data[1];
    hzb=(double) ADE7878_CLOCK / (ergebnis +1 );
    
    //15 frequency phase c
    data_out[0] = 0xE7;//MMODE-Register measure frequency at VC
    data_out[1] = 0x00;
    data_out[2] = 0x1E;
    if(write_i2c(data_out, 3) != 3) return -1;
    delay(50);
    data_out[0] = 0xE6;//0xE607 (PERIOD)
    data_out[1] = 0x07;
    if(write_i2c(data_out, 2) != 2) return -1;
    if (read_i2c(data, 2) != 2) return -1;
    ergebnis=(FACTOR_1*data[0])+data[1];
    hzc=(double) ADE7878_CLOCK / (ergebnis +1 );
    
    //16 Phase A total apparent power.
    data_out[0] = 0xE5;//0xE519 (AVA total apparent power an A)
    data_out[1] = 0x19;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, BUFSIZE) != BUFSIZE) return -1;
    ergebnis=(FACTOR_3*data[0])+(FACTOR_2*data[1])+(FACTOR_1*data[2])+data[3];
    ava=ergebnis;
    
    //17 Phase B total apparent power.
    data_out[0] = 0xE5;//0xE519 (BVA total apparent power an B)
    data_out[1] = 0x1A;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, BUFSIZE) != BUFSIZE) return -1;
    ergebnis=(FACTOR_3*data[0])+(FACTOR_2*data[1])+(FACTOR_1*data[2])+data[3];
    bva=ergebnis;
    
    //18 Phase C total apparent power.
    data_out[0] = 0xE5;//0xE519 (CVA total apparent power an C)
    data_out[1] = 0x1B;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, BUFSIZE) != BUFSIZE) return -1;
    ergebnis=(FACTOR_3*data[0])+(FACTOR_2*data[1])+(FACTOR_1*data[2])+data[3];
    cva=ergebnis;
    
    //19 Phase A total reactive power.
    data_out[0] = 0xE5;//0xE516 (AVAR total reactive power an A)
    data_out[1] = 0x16;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, BUFSIZE) != BUFSIZE) return -1;
    ergebnis=(FACTOR_3*data[0])+(FACTOR_2*data[1])+(FACTOR_1*data[2])+data[3];
    avar=ergebnis;
    
    //20 Phase A total reactive power.
    data_out[0] = 0xE5;//0xE516 (AVAR total reactive power an B)
    data_out[1] = 0x17;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, BUFSIZE) != BUFSIZE) return -1;
    ergebnis=(FACTOR_3*data[0])+(FACTOR_2*data[1])+(FACTOR_1*data[2])+data[3];
    bvar=ergebnis;
    
    //21 Phase A total reactive power.
    data_out[0] = 0xE5;//0xE516 (AVAR total reactive power an C)
    data_out[1] = 0x18;
    if(write_i2c(data_out, 2) != 2) return -1;
    if(read_i2c(data, BUFSIZE) != BUFSIZE) return -1;
    ergebnis=(FACTOR_3*data[0])+(FACTOR_2*data[1])+(FACTOR_1*data[2])+data[3];
    cvar=ergebnis;

    pa=awatt*(-1.0);
    pb=bwatt*(-1.0);
    pc=cwatt*(-1.0);

    if( ua_gemessen)
    {
      if(avar<0)
        pfa=awatt/POWER_CORRECTION_FACTOR_A/ava;
      else
        pfa=awatt/POWER_CORRECTION_FACTOR_A/ava*(-1.0);
      ia=ia*fabs(pfa);
    }

    if( ub_gemessen)
    {
      if(bvar<0)
        pfb=bwatt/POWER_CORRECTION_FACTOR_B/bva;
      else
        pfb=bwatt/POWER_CORRECTION_FACTOR_B/bva*(-1.0);
      ib=ib*fabs(pfb);
    }

    if( uc_gemessen)
    {
      if(cvar<0)
        pfc=cwatt/POWER_CORRECTION_FACTOR_C/cva;
      else
        pfc=cwatt/POWER_CORRECTION_FACTOR_C/cva*(-1.0);
      ic=ic*fabs(pfc);
    }

    pac=pa+pb+pc;
    
    return 0;
}

int SmartArduino::write_i2c(char data[],unsigned char length)
{
   unsigned char i;
    Wire.beginTransmission(ADE_ADDRESS);
  for(i=0;i<length;i++)
   {
     Wire.write(data[i]);
   }
   Wire.endTransmission();
   return i;
}

int SmartArduino::read_i2c(char * data, int length)
{
  unsigned char i;
  unsigned char ret;
  Wire.requestFrom(ADE_ADDRESS,length);
  ret=Wire.available();
  if(ret!=length) return -1; 

  for(i=0;i<ret;i++)
    data[i] = Wire.read(); 
  
  return ret;
}
  