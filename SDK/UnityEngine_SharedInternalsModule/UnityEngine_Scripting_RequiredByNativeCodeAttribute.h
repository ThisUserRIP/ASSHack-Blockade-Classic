#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_SharedInternalsModule::UnityEngine::Scripting
{
	struct RequiredByNativeCodeAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Name_k__BackingField;
		bool _Optional_k__BackingField;
		bool _GenerateProxy_k__BackingField;
		void _ctor();
		void _ctor(mscorlib::System::String* name);
		void set_Name(mscorlib::System::String* value);
		void set_Optional(bool value);
		void set_GenerateProxy(bool value);
	};
}

