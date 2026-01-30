#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct XmlNamespaceManager; };
namespace mscorlib::System { struct String; };
#include "System_Xml_XmlSpace.h"
namespace mscorlib::System::Text { struct Encoding; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Xml::System::Xml
{
	struct XmlParserContext : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlNameTable* _nt;
		System_Xml::System::Xml::XmlNamespaceManager* _nsMgr;
		mscorlib::System::String* _docTypeName;
		mscorlib::System::String* _pubId;
		mscorlib::System::String* _sysId;
		mscorlib::System::String* _internalSubset;
		mscorlib::System::String* _xmlLang;
		System_Xml::System::Xml::XmlSpace _xmlSpace;
		mscorlib::System::String* _baseURI;
		mscorlib::System::Text::Encoding* _encoding;
		void _ctor(System_Xml::System::Xml::XmlNameTable* nt, System_Xml::System::Xml::XmlNamespaceManager* nsMgr, mscorlib::System::String* docTypeName, mscorlib::System::String* pubId, mscorlib::System::String* sysId, mscorlib::System::String* internalSubset, mscorlib::System::String* baseURI, mscorlib::System::String* xmlLang, System_Xml::System::Xml::XmlSpace xmlSpace);
		void _ctor(System_Xml::System::Xml::XmlNameTable* nt, System_Xml::System::Xml::XmlNamespaceManager* nsMgr, mscorlib::System::String* docTypeName, mscorlib::System::String* pubId, mscorlib::System::String* sysId, mscorlib::System::String* internalSubset, mscorlib::System::String* baseURI, mscorlib::System::String* xmlLang, System_Xml::System::Xml::XmlSpace xmlSpace, mscorlib::System::Text::Encoding* enc);
		System_Xml::System::Xml::XmlNameTable* get_NameTable();
		System_Xml::System::Xml::XmlNamespaceManager* get_NamespaceManager();
		mscorlib::System::String* get_DocTypeName();
		mscorlib::System::String* get_PublicId();
		mscorlib::System::String* get_SystemId();
		mscorlib::System::String* get_BaseURI();
		mscorlib::System::String* get_InternalSubset();
		mscorlib::System::String* get_XmlLang();
		System_Xml::System::Xml::XmlSpace get_XmlSpace();
		mscorlib::System::Text::Encoding* get_Encoding();
		bool get_HasDtdInfo();
	};
}

