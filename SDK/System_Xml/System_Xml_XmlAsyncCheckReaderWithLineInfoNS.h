#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlAsyncCheckReaderWithLineInfo.h"
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlReader; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "System_Xml_XmlNamespaceScope.h"

namespace System_Xml::System::Xml
{
	struct XmlAsyncCheckReaderWithLineInfoNS : System_Xml::System::Xml::XmlAsyncCheckReaderWithLineInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::IXmlNamespaceResolver* readerAsIXmlNamespaceResolver;
		void _ctor(System_Xml::System::Xml::XmlReader* reader);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(System_Xml::System::Xml::XmlNamespaceScope scope);
		mscorlib::System::String* System_Xml_IXmlNamespaceResolver_LookupNamespace(mscorlib::System::String* prefix);
		mscorlib::System::String* System_Xml_IXmlNamespaceResolver_LookupPrefix(mscorlib::System::String* namespaceName);
	};
}

