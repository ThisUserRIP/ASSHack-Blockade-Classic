#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct ResourcesAPI : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::ResourcesAPI* s_DefaultAPI;
			UnityEngine_CoreModule::UnityEngine::ResourcesAPI* _overrideAPI_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::ResourcesAPI* get_ActiveAPI();
		static UnityEngine_CoreModule::UnityEngine::ResourcesAPI* get_overrideAPI();
		void _ctor();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* FindObjectsOfTypeAll(mscorlib::System::Type* systemTypeInstance);
		UnityEngine_CoreModule::UnityEngine::Shader* FindShaderByName(mscorlib::System::String* name);
		UnityEngine_CoreModule::UnityEngine::Object* Load(mscorlib::System::String* path, mscorlib::System::Type* systemTypeInstance);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* LoadAll(mscorlib::System::String* path, mscorlib::System::Type* systemTypeInstance);
		static void _cctor();
	};
}

