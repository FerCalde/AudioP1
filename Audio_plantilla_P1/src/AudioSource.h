#pragma once
#include "MyVector2D.h"

class AudioBuffer;

class AudioSource
{
	AudioBuffer* m_audioBuffer;
public:
	AudioSource(AudioBuffer* _audioBuffer);

	float m_fPitch = 1.f;
	void SetPitch(float _fPitch = 1);
	float m_fGain = 1.f;
	void SetGain(float _fGain = 1);
	bool m_bLoop = false;
	void SetLooping(bool _bLoop);

	MyVec2D m_Position{0,0};
	void SetPosition(float _x = 0, float _y = 0, float _z = 0);
	void SetPosition(MyVec2D _pos);

	MyVec2D m_Velocity{0,0};
	void SetVelocity(float _x = 0, float _y = 0, float _z = 0);
	void SetVelocity(MyVec2D _vel);



	void Play();
	void Stop();
	void Pause();
	bool IsPlaying() const;



};