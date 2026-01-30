#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_SharedInternalsModule::UnityEngine
{
	struct AssetFileNameExtensionAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _preferredExtension_k__BackingField;
		mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* _otherExtensions_k__BackingField;
		void _ctor(mscorlib::System::String* preferredExtension, IL2CPP::Array<mscorlib::System::String*>* otherExtensions);
	};
}

