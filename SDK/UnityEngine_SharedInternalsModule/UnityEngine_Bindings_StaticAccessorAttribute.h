#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "UnityEngine_Bindings_StaticAccessorType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_SharedInternalsModule::UnityEngine::Bindings
{
	struct StaticAccessorAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Name_k__BackingField;
		UnityEngine_SharedInternalsModule::UnityEngine::Bindings::StaticAccessorType _Type_k__BackingField;
		void set_Name(mscorlib::System::String* value);
		void set_Type(UnityEngine_SharedInternalsModule::UnityEngine::Bindings::StaticAccessorType value);
		void _ctor(mscorlib::System::String* name);
		void _ctor(mscorlib::System::String* name, UnityEngine_SharedInternalsModule::UnityEngine::Bindings::StaticAccessorType type);
	};
}

