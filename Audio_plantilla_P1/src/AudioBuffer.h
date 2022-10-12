#pragma once
#include "AL/al.h"



class AudioBuffer
{
private:
	ALuint* m_bufferID;
	
	
public:
	AudioBuffer();
	~AudioBuffer();

	static AudioBuffer* load(const char* filename);
	ALuint* GetAlBufferID() const;

};