#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Xml_SmallXmlParser.h"
namespace mscorlib::Mono::Xml { struct SmallXmlParser; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };

namespace mscorlib::Mono::Xml
{
	struct SmallXmlParser_IAttrList
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t get_Length();
		mscorlib::System::String* GetName(int32_t i);
		mscorlib::System::String* GetValue(int32_t i);
		mscorlib::System::String* GetValue(mscorlib::System::String* name);
		IL2CPP::Array<mscorlib::System::String*>* get_Names();
		IL2CPP::Array<mscorlib::System::String*>* get_Values();
	};
}

