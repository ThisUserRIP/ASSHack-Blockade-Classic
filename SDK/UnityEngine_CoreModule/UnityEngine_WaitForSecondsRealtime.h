#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_CustomYieldInstruction.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct WaitForSecondsRealtime : UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float _waitTime_k__BackingField;
		float m_WaitUntilTime;
		float get_waitTime();
		void set_waitTime(float value);
		bool get_keepWaiting();
		void _ctor(float time);
		void Reset();
	};
}

