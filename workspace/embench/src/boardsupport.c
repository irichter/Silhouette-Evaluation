#include "support.h"
#include "stm32f4xx.h"
#include "stm32469i_discovery.h"

static uint32_t t_start;

void
initialise_board ()
{
//	printf("Initialized with clock speed: %lu, MHz=%u\n", SystemCoreClock, CPU_MHZ);
}

void
start_trigger ()
{
	printf("Start to run %s.\n", BENCHMARK_NAME);
	t_start = HAL_GetTick();
}

void
stop_trigger ()
{
    uint32_t t = HAL_GetTick();
    t -= t_start;
    printf("Finished in %u ms", t);
}
