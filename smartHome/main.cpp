#include <wiringPi.h>

// LED Pin - wiringPi pin 0 �� BCM_GPIO 17��
//���� wiringPiSetupSys ���г�ʼ��ʱ����ʹ�� BCM ���
//ѡ������ pin ���ʱ����ͬʱʹ�� BCM ���
//���� Property Pages - Build Events - Remote Post-Build Event ����
//��ʹ�� gpio �������� wiringPiSetupSys ������
#define	LED	17

int main(void)
{
	wiringPiSetupSys();

	pinMode(LED, OUTPUT);

	while (true)
	{
		digitalWrite(LED, HIGH);  //��
		delay(500); // ����
		digitalWrite(LED, LOW);	  //��
		delay(500);
	}
	return 0;
}