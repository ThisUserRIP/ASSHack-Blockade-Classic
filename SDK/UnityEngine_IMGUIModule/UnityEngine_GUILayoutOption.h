#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_GUILayoutOption_Type.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUILayoutOption : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption_Type type;
		mscorlib::System::Object* value;
		void _ctor(UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption_Type type, mscorlib::System::Object* value);
	};
}

