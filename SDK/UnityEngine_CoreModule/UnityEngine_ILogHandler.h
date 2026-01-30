#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_LogType.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Exception; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct ILogHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void LogFormat(UnityEngine_CoreModule::UnityEngine::LogType logType, UnityEngine_CoreModule::UnityEngine::Object* context, mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args);
		void LogException(mscorlib::System::Exception* exception, UnityEngine_CoreModule::UnityEngine::Object* context);
	};
}

