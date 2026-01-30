#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct PlayerMouse; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct PlayerMouseSpriteExample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t playerId;
		mscorlib::System::String* horizontalAction;
		mscorlib::System::String* verticalAction;
		mscorlib::System::String* wheelAction;
		mscorlib::System::String* leftButtonAction;
		mscorlib::System::String* rightButtonAction;
		mscorlib::System::String* middleButtonAction;
		float distanceFromCamera;
		float spriteScale;
		UnityEngine_CoreModule::UnityEngine::GameObject* pointerPrefab;
		UnityEngine_CoreModule::UnityEngine::GameObject* clickEffectPrefab;
		bool hideHardwarePointer;
		UnityEngine_CoreModule::UnityEngine::GameObject* pointer;
		Rewired_Core::Rewired::PlayerMouse* mouse;
		void Awake();
		void Update();
		void OnDestroy();
		void CreateClickEffect(UnityEngine_CoreModule::UnityEngine::Color color);
		void OnScreenPositionChanged(UnityEngine_CoreModule::UnityEngine::Vector2 position);
		void _ctor();
	};
}

