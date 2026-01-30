#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_LogType.h"
#include "UnityEngine_LogOption.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct DebugLogHandler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Internal_Log(UnityEngine_CoreModule::UnityEngine::LogType level, UnityEngine_CoreModule::UnityEngine::LogOption options, mscorlib::System::String* msg, UnityEngine_CoreModule::UnityEngine::Object* obj);
		static void Internal_LogException(mscorlib::System::Exception* ex, UnityEngine_CoreModule::UnityEngine::Object* obj);
		void LogFormat(UnityEngine_CoreModule::UnityEngine::LogType logType, UnityEngine_CoreModule::UnityEngine::Object* context, mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args);
		void LogException(mscorlib::System::Exception* exception, UnityEngine_CoreModule::UnityEngine::Object* context);
		void _ctor();
	};
}

