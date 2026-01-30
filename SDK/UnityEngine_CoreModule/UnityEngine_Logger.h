#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct ILogHandler; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_LogType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace mscorlib::System { struct Exception; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Logger : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::ILogHandler* _logHandler_k__BackingField;
		bool _logEnabled_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::LogType _filterLogType_k__BackingField;
		void _ctor(UnityEngine_CoreModule::UnityEngine::ILogHandler* logHandler);
		UnityEngine_CoreModule::UnityEngine::ILogHandler* get_logHandler();
		void set_logHandler(UnityEngine_CoreModule::UnityEngine::ILogHandler* value);
		bool get_logEnabled();
		void set_logEnabled(bool value);
		UnityEngine_CoreModule::UnityEngine::LogType get_filterLogType();
		void set_filterLogType(UnityEngine_CoreModule::UnityEngine::LogType value);
		bool IsLogTypeAllowed(UnityEngine_CoreModule::UnityEngine::LogType logType);
		static mscorlib::System::String* GetString(mscorlib::System::Object* message);
		void Log(UnityEngine_CoreModule::UnityEngine::LogType logType, mscorlib::System::Object* message);
		void Log(UnityEngine_CoreModule::UnityEngine::LogType logType, mscorlib::System::Object* message, UnityEngine_CoreModule::UnityEngine::Object* context);
		void Log(mscorlib::System::String* tag, mscorlib::System::Object* message);
		void LogWarning(mscorlib::System::String* tag, mscorlib::System::Object* message);
		void LogError(mscorlib::System::String* tag, mscorlib::System::Object* message);
		void LogException(mscorlib::System::Exception* exception, UnityEngine_CoreModule::UnityEngine::Object* context);
		void LogFormat(UnityEngine_CoreModule::UnityEngine::LogType logType, mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args);
		void LogFormat(UnityEngine_CoreModule::UnityEngine::LogType logType, UnityEngine_CoreModule::UnityEngine::Object* context, mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args);
	};
}

