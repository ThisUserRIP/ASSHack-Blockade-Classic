#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech
{
	struct SemanticMeaning
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* key;
		IL2CPP::Array<mscorlib::System::String*>* values;
	};
}

