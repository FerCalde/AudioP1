#include "AudioSource.h"
#include "AudioBuffer.h"
//#include "MyVector2D.h"


AudioSource::AudioSource(AudioBuffer* _audioBuffer) 
	: m_audioBuffer(_audioBuffer)
{
}

void AudioSource::SetPitch(float _fPitch)
{
	m_fPitch = _fPitch;
}

void AudioSource::SetGain(float _fGain)
{
	m_fGain = _fGain;
}

void AudioSource::SetLooping(bool _bLoop)
{
	m_bLoop = _bLoop;
}

void AudioSource::SetPosition(float _x, float _y, float _z)
{
	m_Position.x = _x;
	m_Position.y = _y;
	//m_Position->z = _z;

}

void AudioSource::SetPosition(MyVec2D _pos)
{
	m_Position = _pos;
}

void AudioSource::SetVelocity(float _x, float _y, float _z)
{
	m_Velocity.x = _x;
	m_Velocity.y = _y;
}

void AudioSource::SetVelocity(MyVec2D _vel)
{
	m_Velocity = _vel;
}

void AudioSource::Play()
{
}

void AudioSource::Stop()
{
}

void AudioSource::Pause()
{
}

bool AudioSource::IsPlaying() const
{
	return false;
}
