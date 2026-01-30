#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlNamespaceManager.h"
#include "System_Xml_XmlTextReaderImpl.h"
namespace System_Xml::System::Xml { struct XmlTextReaderImpl; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "System_Xml_XmlNamespaceScope.h"

namespace System_Xml::System::Xml
{
	struct XmlTextReaderImpl_NoNamespaceManager : System_Xml::System::Xml::XmlNamespaceManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::String* get_DefaultNamespace();
		void PushScope();
		bool PopScope();
		void AddNamespace(mscorlib::System::String* prefix, mscorlib::System::String* uri);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* GetNamespacesInScope(System_Xml::System::Xml::XmlNamespaceScope scope);
		mscorlib::System::String* LookupNamespace(mscorlib::System::String* prefix);
		mscorlib::System::String* LookupPrefix(mscorlib::System::String* uri);
	};
}

