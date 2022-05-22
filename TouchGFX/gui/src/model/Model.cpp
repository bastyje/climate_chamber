#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"

float r[3];
int firstRun = 1;

extern "C"
{
	xQueueHandle messageQ1;
	xQueueHandle messageQ2;
}

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	xQueueReceive(messageQ1, &(r[0]), 0);
	xQueueReceive(messageQ1, &(r[1]), 0);
	xQueueReceive(messageQ1, &(r[2]), 0);

	if (r[0] == -240)
	{
		this->modelListener->reportError((int) r[0]);
	}

	if (firstRun == 1 && r[2] == 0)
	{
		this->modelListener->setData(r);
		firstRun = 0;
	}
	else
	{
		this->modelListener->updateData(r);
		this->modelListener->setStatus(r[2]);
	}
}

void Model::sendRequest(float *data)
{
	xQueueSend(messageQ2, &(data[0]), 0);
	xQueueSend(messageQ2, &(data[1]), 0);
	xQueueSend(messageQ2, &(data[2]), 0);
}
