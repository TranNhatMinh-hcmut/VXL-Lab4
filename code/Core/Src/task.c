

#include "task.h"


void Toggle_Red(){
	HAL_GPIO_TogglePin(Led_Red_GPIO_Port, Led_Red_Pin);
}

void Toggle_Yellow(){
	HAL_GPIO_TogglePin(Led_Yellow_GPIO_Port, Led_Yellow_Pin);
}

void Toggle_Green(){
	HAL_GPIO_TogglePin(Led_Green_GPIO_Port, Led_Green_Pin);
}

