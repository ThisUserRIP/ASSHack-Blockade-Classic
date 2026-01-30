#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Time : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static float get_time();
		static float get_timeSinceLevelLoad();
		static float get_deltaTime();
		static float get_unscaledTime();
		static float get_unscaledDeltaTime();
		static float get_fixedDeltaTime();
		static void set_fixedDeltaTime(float value);
		static float get_smoothDeltaTime();
		static float get_timeScale();
		static void set_timeScale(float value);
		static int32_t get_frameCount();
		static float get_realtimeSinceStartup();
	};
}

