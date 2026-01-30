#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "System_Xml_XmlNamespaceScope.h"

namespace System_Xml::System::Xml
{
	struct IXmlNamespaceResolver
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* GetNamespacesInScope(System_Xml::System::Xml::XmlNamespaceScope scope);
		mscorlib::System::String* LookupNamespace(mscorlib::System::String* prefix);
		mscorlib::System::String* LookupPrefix(mscorlib::System::String* namespaceName);
	};
}

