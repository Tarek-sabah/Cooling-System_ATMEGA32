/*
 * L298N_int.h
 *
 *  Created on: Mar 4, 2023
 *      Author: tarek
 */

#ifndef L298N_L298N_INT_H_
#define L298N_L298N_INT_H_

void L298N_Init(u8 DIR,u8 EN);
void L298N_Start(u8 freq,u8 duty);

#endif /* L298N_L298N_INT_H_ */
