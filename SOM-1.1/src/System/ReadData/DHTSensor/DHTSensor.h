/*
 * DHTSensor.h
 *
 *  Created on: 18 Feb 2020
 *      Author: cmprharr
 */

#ifndef SYSTEM_READDATA_DHTSENSOR_DHTSENSOR_H_
#define SYSTEM_READDATA_DHTSENSOR_DHTSENSOR_H_
#include <vector>
class DHTSensor {
public:
	DHTSensor();
	virtual ~DHTSensor();
	std::vector<float> getHeat();
	std::vector<float> getHumidity();
	void readDHT();
	void wipe();
	void saveDHT();
	float getTempHumidity();
	float getTempHeat();
	std::vector<long int> getTime();

private:
	float tempHeat;
	float tempHumid;
	std::vector<long int> time;
	std::vector<float> heat;
	std::vector<float> humid;
};

#endif /* SYSTEM_READDATA_DHTSENSOR_DHTSENSOR_H_ */
