//============================ Macro =============================
#define __weak     __attribute__((weak))
#define __inline   inline __attribute__((always_inline))
#define __alias(X) __attribute__((alias(X)))
#define __packed   __attribute__((packed))
#define P(X)       *X
//================================================================

//============================= Type =============================
typedef unsigned char  u8;
typedef unsigned short u16;
typedef unsigned int   u32;
typedef unsigned long  u64;
//================================================================

//============================= GPIO =============================
typedef u8 *PGPIO;

typedef enum __REGISTER_SET_LOW__ {
	LOW = 0, 
	HIGH
} REG_HL_t;

void HKHAL_GPIO_Reset(PGPIO, u8);
void HKHAL_GPIO_Set(PGPIO, u8);
void HKHAL_GPIO_Ex(PGPIO, u8, REG_HL_t);
//================================================================