#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };

namespace DDebug::Doozy
{
	struct DDebug : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* get_CurrentClass();
		static void Log(mscorlib::System::Object* message);
		static void Log(mscorlib::System::Object* message, UnityEngine_CoreModule::UnityEngine::Object* context);
		static void LogError(mscorlib::System::Object* message);
		static void LogError(mscorlib::System::Object* message, UnityEngine_CoreModule::UnityEngine::Object* context);
	};
}

