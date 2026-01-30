#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct ActionItem : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t ItemID;
		int32_t ActionID;
		UnityEngine_CoreModule::UnityEngine::Texture2D* ActionText;
		UnityEngine_CoreModule::UnityEngine::Texture2D* ActionText_EN;
		UnityEngine_CoreModule::UnityEngine::Texture2D* ActionText_RU;
		void _ctor(int32_t _ItemID, int32_t _ActionID);
	};
}

