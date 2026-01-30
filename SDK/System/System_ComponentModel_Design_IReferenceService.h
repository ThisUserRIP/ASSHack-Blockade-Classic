#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace System::System::ComponentModel::Design
{
	struct IReferenceService
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* GetReference(mscorlib::System::String* name);
		mscorlib::System::String* GetName(mscorlib::System::Object* reference);
		IL2CPP::Array<mscorlib::System::Object*>* GetReferences(mscorlib::System::Type* baseType);
	};
}

