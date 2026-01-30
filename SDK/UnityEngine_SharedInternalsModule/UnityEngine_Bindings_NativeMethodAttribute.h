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

namespace UnityEngine_SharedInternalsModule::UnityEngine::Bindings
{
	struct NativeMethodAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Name_k__BackingField;
		bool _IsThreadSafe_k__BackingField;
		bool _IsFreeFunction_k__BackingField;
		bool _ThrowsException_k__BackingField;
		bool _HasExplicitThis_k__BackingField;
		void set_Name(mscorlib::System::String* value);
		void set_IsThreadSafe(bool value);
		void set_IsFreeFunction(bool value);
		void set_ThrowsException(bool value);
		void set_HasExplicitThis(bool value);
		void _ctor();
		void _ctor(mscorlib::System::String* name);
		void _ctor(mscorlib::System::String* name, bool isFreeFunction);
		void _ctor(mscorlib::System::String* name, bool isFreeFunction, bool isThreadSafe);
	};
}

