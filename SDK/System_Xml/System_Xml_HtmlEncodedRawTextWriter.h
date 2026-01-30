#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlEncodedRawTextWriter.h"
namespace System_Xml::System::Xml { struct ByteStack; };
#include "System_Xml_ElementProperties.h"
#include "System_Xml_AttributeProperties.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct TernaryTreeReadOnly; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct TextWriter; };
namespace System_Xml::System::Xml { struct XmlWriterSettings; };
namespace mscorlib::System::IO { struct Stream; };
#include "System_Xml_XmlStandalone.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System_Xml::System::Xml
{
	struct HtmlEncodedRawTextWriter : System_Xml::System::Xml::XmlEncodedRawTextWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::ByteStack* elementScope;
		System_Xml::System::Xml::ElementProperties currentElementProperties;
		System_Xml::System::Xml::AttributeProperties currentAttributeProperties;
		bool endsWithAmpersand;
		IL2CPP::Array<uint8_t>* uriEscapingBuffer;
		mscorlib::System::String* mediaType;
		bool doNotEscapeUriAttributes;
		struct StaticFields
		{
			System_Xml::System::Xml::TernaryTreeReadOnly* elementPropertySearch;
			System_Xml::System::Xml::TernaryTreeReadOnly* attributePropertySearch;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::IO::TextWriter* writer, System_Xml::System::Xml::XmlWriterSettings* settings);
		void _ctor(mscorlib::System::IO::Stream* stream, System_Xml::System::Xml::XmlWriterSettings* settings);
		void WriteXmlDeclaration(System_Xml::System::Xml::XmlStandalone standalone);
		void WriteXmlDeclaration(mscorlib::System::String* xmldecl);
		void WriteDocType(mscorlib::System::String* name, mscorlib::System::String* pubid, mscorlib::System::String* sysid, mscorlib::System::String* subset);
		void WriteStartElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void StartElementContent();
		void WriteEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteFullEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteStartAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteEndAttribute();
		void WriteProcessingInstruction(mscorlib::System::String* target, mscorlib::System::String* text);
		void WriteString(mscorlib::System::String* text);
		void WriteEntityRef(mscorlib::System::String* name);
		void WriteCharEntity(wchar_t ch);
		void WriteSurrogateCharEntity(wchar_t lowChar, wchar_t highChar);
		void WriteChars(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void Init(System_Xml::System::Xml::XmlWriterSettings* settings);
		void WriteMetaElement();
		void WriteHtmlElementTextBlock(wchar_t* pSrc, wchar_t* pSrcEnd);
		void WriteHtmlAttributeTextBlock(wchar_t* pSrc, wchar_t* pSrcEnd);
		void WriteHtmlAttributeText(wchar_t* pSrc, wchar_t* pSrcEnd);
		void WriteUriAttributeText(wchar_t* pSrc, wchar_t* pSrcEnd);
		void OutputRestAmps();
	};
}

