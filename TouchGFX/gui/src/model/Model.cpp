#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"
#include "transferData.h"

transfer r2, t2;
int firstRun = 1;

int mess;

extern "C"
{
	xQueueHandle messageQ1;
	xQueueHandle messageQ2;
}

Model::Model() : modelListener(0)
{
	r2.flag = -1;
}

void Model::tick()
{
	xQueueReceive(messageQ1, &r2, 0);

	if (r2.flag == -240)
	{
		this->modelListener->reportError(r2.flag);
	}

	if (r2.flag == -250)
	{
		this->modelListener->reportError(r2.flag);
	}

	float data[] = { r2.temp, r2.hum };

	if (firstRun == 1 && r2.flag == 0)
	{
		this->modelListener->setData(data);
		firstRun = 0;
	}
	else
	{
		this->modelListener->updateData(data);
		this->modelListener->setStatus(r2.flag);
	}
}

void Model::sendRequest(float *data)
{
	t2.flag = 1;
	t2.temp = data[0];
	t2.hum = data[1];

	xQueueSend(messageQ2, &t2, 0);
}
