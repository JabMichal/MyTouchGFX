#ifndef MODEL_HPP
#define MODEL_HPP

#include <touchgfx/hal/types.hpp>

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    void saveTime(uint16_t save_time){
		time = save_time;
	}

	uint16_t getTime(){
		return time;
	}

protected:
    ModelListener* modelListener;

    uint16_t time;
};

#endif // MODEL_HPP
