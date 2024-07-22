#ifndef _AD9833_H_
#define _AD9833_H_

#include "stm32f4xx.h"

#define TRI_WAVE 	0  		//������ǲ�
#define SIN_WAVE 	1		//������Ҳ�
#define SQU_WAVE 	2		//�������

void AD9833InitConfig(void);
void AD9833_WaveSeting(double Freq,unsigned int Freq_SFR,unsigned int WaveMode,unsigned int Phase );
void AD9833_AmpSet(unsigned char amp);

#endif
