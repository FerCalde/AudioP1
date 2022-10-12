#include "AudioBuffer.h"

#include "AL/alc.h"
#include "AL/alext.h"
#include "AL/alut.h"
#include "AL/efx.h"
#include "AL/efx-creative.h"
#include "AL/efx-presets.h"




ALuint* AudioBuffer::getAlBuffer() const
{
	return m_bufferID;
}
