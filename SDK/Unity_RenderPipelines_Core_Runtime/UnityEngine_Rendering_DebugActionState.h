#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_DebugActionState_DebugActionKeyType.h"
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugActionDesc; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DebugActionState : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugActionState_DebugActionKeyType m_Type;
		IL2CPP::Array<mscorlib::System::String*>* m_PressedButtons;
		mscorlib::System::String* m_PressedAxis;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::KeyCode>* m_PressedKeys;
		IL2CPP::Array<bool>* m_TriggerPressedUp;
		float m_Timer;
		bool _runningAction_k__BackingField;
		float _actionState_k__BackingField;
		bool get_runningAction();
		void set_runningAction(bool value);
		float get_actionState();
		void set_actionState(float value);
		void Trigger(int32_t triggerCount, float state);
		void TriggerWithButton(IL2CPP::Array<mscorlib::System::String*>* buttons, float state);
		void TriggerWithAxis(mscorlib::System::String* axis, float state);
		void TriggerWithKey(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::KeyCode>* keys, float state);
		void Reset();
		void Update(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugActionDesc* desc);
		void _ctor();
	};
}

