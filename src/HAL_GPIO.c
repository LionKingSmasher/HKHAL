#include <HKHAL.h>

__inline void HKHAL_GPIO_Reset(PGPIO reg, u8 pin){
	P(reg) &= ~(0x0fu & (P(reg) << pin));
}

__inline void HKHAL_GPIO_Set(PGPIO reg, u8 pin){
	HKHAL_GPIO_Reset(reg, n); // Reset Pin First
	P(reg) |= (0x0fu & (P(reg) << pin))
}