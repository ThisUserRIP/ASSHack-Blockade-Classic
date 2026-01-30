#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Xml_SmallXmlParser.h"
namespace mscorlib::Mono::Xml { struct SmallXmlParser; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Xml
{
	struct SmallXmlParser_AttrListImpl : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* attrNames;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* attrValues;
		int32_t get_Length();
		mscorlib::System::String* GetName(int32_t i);
		mscorlib::System::String* GetValue(int32_t i);
		mscorlib::System::String* GetValue(mscorlib::System::String* name);
		IL2CPP::Array<mscorlib::System::String*>* get_Names();
		IL2CPP::Array<mscorlib::System::String*>* get_Values();
		void Clear();
		void Add(mscorlib::System::String* name, mscorlib::System::String* value);
		void _ctor();
	};
}

