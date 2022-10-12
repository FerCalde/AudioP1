#include "AudioBuffer.h"

//#include "AL/alc.h"
//#include "AL/alext.h"
//#include "AL/alut.h"
//#include "AL/efx.h"
//#include "AL/efx-creative.h"
//#include "AL/efx-presets.h"




AudioBuffer::AudioBuffer()
{
	m_bufferID = new ALuint;
}

AudioBuffer::~AudioBuffer()
{
	alDeleteBuffers(1, m_bufferID);
	m_bufferID = nullptr;
}

ALuint* AudioBuffer::GetAlBufferID() const
{
	return m_bufferID;
}
