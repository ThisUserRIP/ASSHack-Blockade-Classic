#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Component.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace UnityEngine_Physics2DModule::UnityEngine
{
	struct Rigidbody2D : UnityEngine_CoreModule::UnityEngine::Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_position();
		void set_position(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		float get_rotation();
		void set_rotation(float value);
		void MovePosition(UnityEngine_CoreModule::UnityEngine::Vector2 position);
		void MoveRotation(float angle);
		void MoveRotation_Angle(float angle);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_velocity();
		void set_velocity(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		float get_angularVelocity();
		void set_angularVelocity(float value);
		void set_drag(float value);
		void get_position_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		void set_position_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& value);
		void MovePosition_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& position);
		void get_velocity_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		void set_velocity_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& value);
	};
}

