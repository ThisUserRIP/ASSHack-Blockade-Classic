#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct ResourcesAPIInternal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* FindObjectsOfTypeAll(mscorlib::System::Type* type);
		static UnityEngine_CoreModule::UnityEngine::Shader* FindShaderByName(mscorlib::System::String* name);
		static UnityEngine_CoreModule::UnityEngine::Object* Load(mscorlib::System::String* path, mscorlib::System::Type* systemTypeInstance);
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* LoadAll(mscorlib::System::String* path, mscorlib::System::Type* systemTypeInstance);
	};
}

