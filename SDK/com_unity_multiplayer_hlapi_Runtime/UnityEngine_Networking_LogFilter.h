#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Networking_LogFilter_FilterLevel.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct LogFilter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t Developer;
			int32_t SetInScripting;
			int32_t Debug;
			int32_t Info;
			int32_t Warn;
			int32_t Error;
			int32_t Fatal;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LogFilter_FilterLevel current;
			int32_t s_CurrentLogLevel;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t get_currentLogLevel();
		static void set_currentLogLevel(int32_t value);
		static bool get_logDev();
		static bool get_logDebug();
		static bool get_logInfo();
		static bool get_logWarn();
		static bool get_logError();
		static bool get_logFatal();
		void _ctor();
		static void _cctor();
	};
}

