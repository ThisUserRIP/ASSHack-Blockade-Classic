#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Demos_GamepadTemplateUI_GamepadTemplateUI.h"
namespace Assembly_CSharp::Rewired::Demos::GamepadTemplateUI { struct GamepadTemplateUI; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp::Rewired::Demos::GamepadTemplateUI
{
	struct GamepadTemplateUI_Stick : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RectTransform* _transform;
		UnityEngine_CoreModule::UnityEngine::Vector2 _origPosition;
		int32_t _xAxisElementId;
		int32_t _yAxisElementId;
		UnityEngine_CoreModule::UnityEngine::Vector2 get_position();
		void set_position(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		void _ctor(UnityEngine_CoreModule::UnityEngine::RectTransform* transform, int32_t xAxisElementId, int32_t yAxisElementId);
		void Reset();
		bool ContainsElement(int32_t elementId);
		void SetAxisPosition(int32_t elementId, float value);
	};
}

