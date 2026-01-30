#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlRawWriter.h"
namespace System_Xml::System::Xml { struct XmlRawWriter; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace System_Xml::System::Xml { struct BitStack; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlWriterSettings; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
#include "System_Xml_XmlStandalone.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };

namespace System_Xml::System::Xml
{
	struct QueryOutputWriter : System_Xml::System::Xml::XmlRawWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlRawWriter* wrapped;
		bool inCDataSection;
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, mscorlib::System::Int32>* lookupCDataElems;
		System_Xml::System::Xml::BitStack* bitsCData;
		System_Xml::System::Xml::XmlQualifiedName* qnameCData;
		bool outputDocType;
		bool checkWellFormedDoc;
		bool hasDocElem;
		bool inAttr;
		mscorlib::System::String* systemId;
		mscorlib::System::String* publicId;
		int32_t depth;
		void _ctor(System_Xml::System::Xml::XmlRawWriter* writer, System_Xml::System::Xml::XmlWriterSettings* settings);
		void set_NamespaceResolver(System_Xml::System::Xml::IXmlNamespaceResolver* value);
		void WriteXmlDeclaration(System_Xml::System::Xml::XmlStandalone standalone);
		void WriteXmlDeclaration(mscorlib::System::String* xmldecl);
		void WriteDocType(mscorlib::System::String* name, mscorlib::System::String* pubid, mscorlib::System::String* sysid, mscorlib::System::String* subset);
		void WriteStartElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteFullEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void StartElementContent();
		void WriteStartAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteEndAttribute();
		void WriteNamespaceDeclaration(mscorlib::System::String* prefix, mscorlib::System::String* ns);
		bool get_SupportsNamespaceDeclarationInChunks();
		void WriteStartNamespaceDeclaration(mscorlib::System::String* prefix);
		void WriteEndNamespaceDeclaration();
		void WriteCData(mscorlib::System::String* text);
		void WriteComment(mscorlib::System::String* text);
		void WriteProcessingInstruction(mscorlib::System::String* name, mscorlib::System::String* text);
		void WriteWhitespace(mscorlib::System::String* ws);
		void WriteString(mscorlib::System::String* text);
		void WriteChars(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteEntityRef(mscorlib::System::String* name);
		void WriteCharEntity(wchar_t ch);
		void WriteSurrogateCharEntity(wchar_t lowChar, wchar_t highChar);
		void WriteRaw(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(mscorlib::System::String* data);
		void Close();
		void Flush();
		bool StartCDataSection();
		void EndCDataSection();
	};
}

