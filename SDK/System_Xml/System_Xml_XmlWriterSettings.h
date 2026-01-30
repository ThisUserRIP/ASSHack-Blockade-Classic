#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Text { struct Encoding; };
#include "System_Xml_NewLineHandling.h"
namespace mscorlib::System { struct String; };
#include "System_Xml_TriState.h"
#include "System_Xml_NamespaceHandling.h"
#include "System_Xml_ConformanceLevel.h"
#include "System_Xml_XmlOutputMethod.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Xml_XmlStandalone.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlWriter; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::IO { struct TextWriter; };

namespace System_Xml::System::Xml
{
	struct XmlWriterSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool useAsync;
		mscorlib::System::Text::Encoding* encoding;
		bool omitXmlDecl;
		System_Xml::System::Xml::NewLineHandling newLineHandling;
		mscorlib::System::String* newLineChars;
		System_Xml::System::Xml::TriState indent;
		mscorlib::System::String* indentChars;
		bool newLineOnAttributes;
		bool closeOutput;
		System_Xml::System::Xml::NamespaceHandling namespaceHandling;
		System_Xml::System::Xml::ConformanceLevel conformanceLevel;
		bool checkCharacters;
		bool writeEndDocumentOnClose;
		System_Xml::System::Xml::XmlOutputMethod outputMethod;
		mscorlib::System::Collections::Generic::List_1<System_Xml::System::Xml::XmlQualifiedName>* cdataSections;
		bool doNotEscapeUriAttributes;
		bool mergeCDataSections;
		mscorlib::System::String* mediaType;
		mscorlib::System::String* docTypeSystem;
		mscorlib::System::String* docTypePublic;
		System_Xml::System::Xml::XmlStandalone standalone;
		bool autoXmlDecl;
		bool isReadOnly;
		void _ctor();
		bool get_Async();
		mscorlib::System::Text::Encoding* get_Encoding();
		bool get_OmitXmlDeclaration();
		System_Xml::System::Xml::NewLineHandling get_NewLineHandling();
		mscorlib::System::String* get_NewLineChars();
		bool get_Indent();
		void set_Indent(bool value);
		mscorlib::System::String* get_IndentChars();
		bool get_NewLineOnAttributes();
		bool get_CloseOutput();
		System_Xml::System::Xml::ConformanceLevel get_ConformanceLevel();
		bool get_CheckCharacters();
		System_Xml::System::Xml::NamespaceHandling get_NamespaceHandling();
		bool get_WriteEndDocumentOnClose();
		System_Xml::System::Xml::XmlOutputMethod get_OutputMethod();
		void set_OutputMethod(System_Xml::System::Xml::XmlOutputMethod value);
		System_Xml::System::Xml::XmlWriterSettings* Clone();
		mscorlib::System::Collections::Generic::List_1<System_Xml::System::Xml::XmlQualifiedName>* get_CDataSectionElements();
		bool get_DoNotEscapeUriAttributes();
		bool get_MergeCDataSections();
		mscorlib::System::String* get_MediaType();
		mscorlib::System::String* get_DocTypeSystem();
		mscorlib::System::String* get_DocTypePublic();
		System_Xml::System::Xml::XmlStandalone get_Standalone();
		bool get_AutoXmlDeclaration();
		System_Xml::System::Xml::TriState get_IndentInternal();
		bool get_IsQuerySpecific();
		System_Xml::System::Xml::XmlWriter* CreateWriter(mscorlib::System::IO::Stream* output);
		System_Xml::System::Xml::XmlWriter* CreateWriter(mscorlib::System::IO::TextWriter* output);
		void set_ReadOnly(bool value);
		void CheckReadOnly(mscorlib::System::String* propertyName);
		void Initialize();
	};
}

