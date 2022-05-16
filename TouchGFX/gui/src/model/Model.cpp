#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"

float r[2];

extern "C"
{
	xQueueHandle messageQ;
	xQueueHandle messageQ2;
}

Model::Model() : modelListener(0)
{
	messageQ = xQueueGenericCreate(3, sizeof(float), 0);
	messageQ2 = xQueueGenericCreate(3, sizeof(float), 0);
}

void Model::tick()
{
	if (xQueueReceive(messageQ, &r, 0) == pdTRUE)
	{
		this->modelListener->updateData(r);
	}
}

void Model::sendRequest(float *data)
{
	xQueueSend(messageQ2, data, 0);
}
