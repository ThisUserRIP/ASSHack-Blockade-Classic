#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct ArrayList; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlSerializerNamespaces : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* namespaces;
		void _ctor();
		void Add(mscorlib::System::String* prefix, mscorlib::System::String* ns);
		void AddInternal(mscorlib::System::String* prefix, mscorlib::System::String* ns);
		IL2CPP::Array<System_Xml::System::Xml::XmlQualifiedName*>* ToArray();
		int32_t get_Count();
		mscorlib::System::Collections::ArrayList* get_NamespaceList();
		mscorlib::System::Collections::Hashtable* get_Namespaces();
		void set_Namespaces(mscorlib::System::Collections::Hashtable* value);
	};
}

