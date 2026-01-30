#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Schema_XmlAtomicValue.h"
namespace System_Xml::System::Xml::Schema { struct XmlAtomicValue; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "System_Xml_XmlNamespaceScope.h"

namespace System_Xml::System::Xml::Schema
{
	struct XmlAtomicValue_NamespacePrefixForQName : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* prefix;
		mscorlib::System::String* ns;
		void _ctor(mscorlib::System::String* prefix, mscorlib::System::String* ns);
		mscorlib::System::String* LookupNamespace(mscorlib::System::String* prefix);
		mscorlib::System::String* LookupPrefix(mscorlib::System::String* namespaceName);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* GetNamespacesInScope(System_Xml::System::Xml::XmlNamespaceScope scope);
	};
}

