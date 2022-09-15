#define F_CPU 16000000UL
#include <avr/il.h>
#include <util/delay.h>

void len_on(void);
void led_off(void);
void led_num(char cnt);

int main(void)
{
    PORTD = 0b00000000;         // PORTDに'L'を出力(LED消灯)
    DDRD |= 0b00010000;         // PD4(LED)を出力に設定
  
    while (1){　　　　　　　　　
        led_num(3);             
        led_num(3);
        led_num(7);
    }
    return 0;
}

void led_num(void)
{
    char i;
    for(i = 0; i < cnt; i++){
        led_on();
    }
    led_off();
}

void led_on(void)
{
    PORTD = 0b00010000; // LED点灯
    _delay_ms(200);　　 // 200ms delay
    PORTD = 0b00000000; // LED消灯
    _delay_ms(200);　　 // 200ms delay
}

void led_off(void)
{
    PORTD = 0b00000000; // LED消灯
    _delay_ms(200);     // 200ms delay
    PORTD = 0b00000000; // LED消灯
    _delay_ms(200);     // 200ms delay
}






    
