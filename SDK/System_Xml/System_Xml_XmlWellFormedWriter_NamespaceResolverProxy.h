#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_XmlWellFormedWriter.h"
namespace System_Xml::System::Xml { struct XmlWellFormedWriter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "System_Xml_XmlNamespaceScope.h"

namespace System_Xml::System::Xml
{
	struct XmlWellFormedWriter_NamespaceResolverProxy : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlWellFormedWriter* wfWriter;
		void _ctor(System_Xml::System::Xml::XmlWellFormedWriter* wfWriter);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(System_Xml::System::Xml::XmlNamespaceScope scope);
		mscorlib::System::String* System_Xml_IXmlNamespaceResolver_LookupNamespace(mscorlib::System::String* prefix);
		mscorlib::System::String* System_Xml_IXmlNamespaceResolver_LookupPrefix(mscorlib::System::String* namespaceName);
	};
}

