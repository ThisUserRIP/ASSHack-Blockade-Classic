#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct NamespaceList; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct ICollection; };

namespace System_Xml::System::Xml::Schema
{
	struct SymbolsDictionary : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t last;
		mscorlib::System::Collections::Hashtable* names;
		mscorlib::System::Collections::Hashtable* wildcards;
		mscorlib::System::Collections::ArrayList* particles;
		mscorlib::System::Object* particleLast;
		bool isUpaEnforced;
		void _ctor();
		int32_t get_Count();
		bool get_IsUpaEnforced();
		void set_IsUpaEnforced(bool value);
		int32_t AddName(System_Xml::System::Xml::XmlQualifiedName* name, mscorlib::System::Object* particle);
		void AddNamespaceList(System_Xml::System::Xml::Schema::NamespaceList* list, mscorlib::System::Object* particle, bool allowLocal);
		void AddWildcard(mscorlib::System::String* wildcard, mscorlib::System::Object* particle);
		mscorlib::System::Collections::ICollection* GetNamespaceListSymbols(System_Xml::System::Xml::Schema::NamespaceList* list);
		int32_t get_Item(System_Xml::System::Xml::XmlQualifiedName* name);
		bool Exists(System_Xml::System::Xml::XmlQualifiedName* name);
		mscorlib::System::Object* GetParticle(int32_t symbol);
		mscorlib::System::String* NameOf(int32_t symbol);
	};
}

