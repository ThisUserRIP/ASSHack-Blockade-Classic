#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_CoreModule::UnityEngine { struct ILogHandler; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_LogType.h"
namespace mscorlib::System { struct Object; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct ILogger
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::ILogHandler* get_logHandler();
		bool get_logEnabled();
		void Log(UnityEngine_CoreModule::UnityEngine::LogType logType, mscorlib::System::Object* message);
		void Log(UnityEngine_CoreModule::UnityEngine::LogType logType, mscorlib::System::Object* message, UnityEngine_CoreModule::UnityEngine::Object* context);
		void Log(mscorlib::System::String* tag, mscorlib::System::Object* message);
		void LogWarning(mscorlib::System::String* tag, mscorlib::System::Object* message);
		void LogError(mscorlib::System::String* tag, mscorlib::System::Object* message);
		void LogFormat(UnityEngine_CoreModule::UnityEngine::LogType logType, mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args);
	};
}

