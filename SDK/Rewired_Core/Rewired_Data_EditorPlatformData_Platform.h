#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_EditorPlatformData.h"
namespace Rewired_Core::Rewired::Data { struct EditorPlatformData; };
namespace UnityEngine_CoreModule::UnityEngine { struct TextAsset; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data
{
	struct EditorPlatformData_Platform : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::TextAsset*>* libraries;
		void _ctor();
	};
}

