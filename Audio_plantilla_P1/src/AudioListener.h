#pragma once
#include "MyVector2D.h"

class AudioListener
{
	//static AudioListener Instance;
public:

	AudioListener();
	AudioListener(MyVec2D _pos, MyVec2D _vel, MyVec2D _ori);
	~AudioListener();

	MyVec2D m_Position{ 0, 0 };
	MyVec2D m_Velocity{ 0, 0 };
	MyVec2D m_Orientation{ 0, 0 };


	void SetPosition(MyVec2D _pos);
	void SetVelocity(MyVec2D _vel);
	void SetOrientation(MyVec2D _ori);
};