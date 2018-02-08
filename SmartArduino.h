#ifndef __SMARTARDUINO__
#define __SMARTARDUINO__



#define ADE_ADDRESS  0x38
#define BUFSIZE 4
#define PI 3.141592654
#define ADE7878_CLOCK   256000
#define FACTOR_CIRCLE   360
#define   FACTOR_1   256
#define   FACTOR_2   65536
#define   FACTOR_3   16777216
#define   RMS_FACTOR_VOLTAGE   2427873
#define   CURRENT_RESISTOR_A   7.07107
#define   CURRENT_RESISTOR_B   7.07107
#define   CURRENT_RESISTOR_C   7.07107
#define   CURRENT_RESISTOR_N   7.07107
#define   CURRENT_CLAMP_FACTOR_A   0.05
#define   CURRENT_CLAMP_FACTOR_B   0.05
#define   CURRENT_CLAMP_FACTOR_C   0.05
#define   CURRENT_CLAMP_FACTOR_N   0.05
#define   OFFSET_CURRENT_A   0.97129167
#define   OFFSET_CURRENT_B   0.97129167
#define   OFFSET_CURRENT_C   0.97129167
#define   OFFSET_CURRENT_N   0.97129167
#define   OFFSET_VOLTAGE_A   1.0
#define   OFFSET_VOLTAGE_B   1.0
#define   OFFSET_VOLTAGE_C   1.0
#define  POWER_CORRECTION_FACTOR_A   0.019413
#define   POWER_CORRECTION_FACTOR_B   0.019413
#define   POWER_CORRECTION_FACTOR_C   0.019413

class SmartArduino {
private:
	int write_i2c(char data[],unsigned char length);
	int read_i2c(char * data, int length);
public:
	double ua=230,ub=230,uc=230,ia=0,ib=0,ic=0,pa=0,pb=0,pc=0,pac=0,cosa=1,cosb=1,cosc=1,hza=50,hzb=50,hzc=50,pfa,pfb,pfc;
    double awatt,ava,avar,bwatt,bva,bvar,cwatt,cva,cvar;
	
	SmartArduino();
	int read();
	int init();
};
#endif