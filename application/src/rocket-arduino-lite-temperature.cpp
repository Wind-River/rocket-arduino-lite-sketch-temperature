/*
 * Copyright (c) 2015,2016 Wind River Systems, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software distributed
 * under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES
 * OR CONDITIONS OF ANY KIND, either express or implied. See the License for
 * the specific language governing permissions and limitations under the License.
 */

#include "Arduino-lite.h"
#include "Serial.h"

int temperature = A0;

const int B = 3975;


void setup() {
	// initialize pins as an input / output.
	pinMode(temperature, INPUT);
}

void loop() {
	// the loop function runs over and over again forever
	int input = 0;
	float resistance, temp;

	input = analogRead(temperature);

	resistance = (10230000 - (input * 10000)) / input;

    temp = 1 / ( log(resistance/10000) / B + (1/298.15)) - 273.15;

    Serial.print("Temperature is ");
    Serial.println(temp);
	delay(1000);
}
