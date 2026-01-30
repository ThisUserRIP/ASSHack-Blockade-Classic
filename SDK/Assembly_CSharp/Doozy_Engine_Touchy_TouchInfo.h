#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_InputLegacyModule\UnityEngine_Touch.h"
namespace UnityEngine_InputLegacyModule::UnityEngine { struct Touch; };
#include "Doozy_Engine_Touchy_Swipe.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::Doozy::Engine::Touchy
{
	struct TouchInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_InputLegacyModule::UnityEngine::Touch Touch;
		Assembly_CSharp::Doozy::Engine::Touchy::Swipe Direction;
		UnityEngine_CoreModule::UnityEngine::Vector2 RawDirection;
		UnityEngine_CoreModule::UnityEngine::Vector2 StartPosition;
		UnityEngine_CoreModule::UnityEngine::Vector2 EndPosition;
		UnityEngine_CoreModule::UnityEngine::Vector2 Velocity;
		float StartTime;
		float EndTime;
		float Duration;
		bool Tap;
		bool LongTap;
		float Distance;
		float LongestDistance;
		UnityEngine_CoreModule::UnityEngine::GameObject* GameObject;
		UnityEngine_CoreModule::UnityEngine::GameObject* DraggedObject;
		UnityEngine_CoreModule::UnityEngine::Vector2 CurrentTouchPosition;
		UnityEngine_CoreModule::UnityEngine::Vector2 PreviousTouchPosition;
		float TouchDeltaTime;
		bool get_IsDragging();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_TouchVelocity();
		void Update(UnityEngine_InputLegacyModule::UnityEngine::Touch touch, UnityEngine_CoreModule::UnityEngine::GameObject* gameObject);
		mscorlib::System::String* ToString();
	};
}

