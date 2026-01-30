#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_XmlNamespaceManager_NamespaceDeclaration.h"
namespace System_Xml::System::Xml { struct XmlNamespaceManager_NamespaceDeclaration; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "System_Xml_XmlNamespaceScope.h"

namespace System_Xml::System::Xml
{
	struct XmlNamespaceManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<System_Xml::System::Xml::XmlNamespaceManager_NamespaceDeclaration>* nsdecls;
		int32_t lastDecl;
		System_Xml::System::Xml::XmlNameTable* nameTable;
		int32_t scopeId;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int32>* hashTable;
		bool useHashtable;
		mscorlib::System::String* xml;
		mscorlib::System::String* xmlNs;
		void _ctor();
		void _ctor(System_Xml::System::Xml::XmlNameTable* nameTable);
		System_Xml::System::Xml::XmlNameTable* get_NameTable();
		mscorlib::System::String* get_DefaultNamespace();
		void PushScope();
		bool PopScope();
		void AddNamespace(mscorlib::System::String* prefix, mscorlib::System::String* uri);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* GetNamespacesInScope(System_Xml::System::Xml::XmlNamespaceScope scope);
		mscorlib::System::String* LookupNamespace(mscorlib::System::String* prefix);
		int32_t LookupNamespaceDecl(mscorlib::System::String* prefix);
		mscorlib::System::String* LookupPrefix(mscorlib::System::String* uri);
	};
}

