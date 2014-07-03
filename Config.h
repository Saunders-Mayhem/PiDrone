/*
  Pi Drone - 2014
  www.saundersmayhem.com
  Copyright (c) 2014 Saunders Mayhem.  All rights reserved.
  An Open Source Arduino based multicopter.

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program. If not, see <http://www.gnu.org/licenses/>.

  Created on: 13 Jun 2014
  Author: thezak48
*/

/****************************************************************************
				The Pi Drone Manual can be found here:
TODO
 ****************************************************************************/

/****************************************************************************
 ************************* Hardware Configuration ***************************
 ****************************************************************************/
// Select which hardware you wish to use with the Pi Drone Flight Software
// Use only one of the following definitions

//#define PiDrone_Micro		// Arduino Micro												EXPERIMENTAL Not tested
//#define PiDrone_Mini		// Arduino Mini													EXPERIMENTAL Not tested
//#define PiDrone_Nano168	// Arduino Nano with ATmega168									EXPERIMENTAL Not tested
#define PiDrone_Nano328		// Arduino Nano with ATmega328
//#define PiDrone_Uno		// Arduino Uno Rev3												EXPERIMENTAL Not tested
//#define PiDrone_Mega2560	// Arduino Mega 2560											EXPERIMENTAL Not tested


/****************************************************************************
 *********************** Define Flight Configuration ************************
 ****************************************************************************/
// Use only one of the following definitions

#define quadXConfig
//#define quadPlusConfig

/****************************************************************************
 *************************** Sensor Configuration ***************************
 ****************************************************************************/
// Use only one of the following DOF definitions

//	DOF
#define 6DOF		// 6 Degrees of Freedom IMU Accelerometer & Gyro
//#define 7DOF		// 7 Degrees of Freedom IMU Accelerometer, Gyro & Barometric			EXPERIMENTAL Not tested
//#define 9DOF		// 9 Degrees of Freedom IMU Accelerometer, Gyro & Compass				EXPERIMENTAL Not tested
//#define 10DOF		// 10 Degrees of Freedom IMU Accelerometer, Gyro, Barometric & Compass	EXPERIMENTAL Not tested

//GPS
//#define UseGPS 	//Use GPS																EXPERIMENTAL Not tested

/****************************************************************************
 ***************************** Receiver Setup *******************************
 ****************************************************************************/

#define NormalReceiver		// Use normal receiver
//#define RemotePCReceiver	// EXPERIMENTAL Use PC BaseStation with use of XBEE				EXPERIMENTAL Not tested
//#define RemotePiReceiver	// Use Raspberry Pi BaseStation with use of XBEE				EXPERIMENTAL Not tested
//#define XBEEStation		// Use a custom BaseStation with use of XBEE					EXPERIMENTAL Not tested
//#define ReceiverPPM		// Use a PPM receiver											EXPERIMENTAL Not tested

// You need to select one of these channel order definitions for PPM receiver
//#define SKETCH_SERIAL_SUM_PPM SERIAL_SUM_PPM_1	//For Graupner/Spektrum (DEFAULT)		EXPERIMENTAL Not tested
#define SKETCH_SERIAL_SUM_PPM SERIAL_SUM_PPM_2		//For Robe/Hitec/Futaba/Turnigy9X+Er9X	EXPERIMENTAL Not tested
//#define SKETCH_SERIAL_SUM_PPM SERIAL_SUM_PPM_3	//For some Hitec/Sanwa/Others			EXPERIMENTAL Not tested

// How many channels are you running
#define LASTCHANNEL 4
//#define LASTCHANNEL 6 	// EXPERIMENTAL Not tested
//#define LASTCHANNEL 8 	// EXPERIMENTAL Not tested
//#define LASTCHANNEL 10 	// EXPERIMENTAL Not tested


/****************************************************************************
 ****************************** End of Config *******************************
 ****************************************************************************/
