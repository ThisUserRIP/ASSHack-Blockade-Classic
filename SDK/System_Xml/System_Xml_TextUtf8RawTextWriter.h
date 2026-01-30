#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlUtf8RawTextWriter.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
namespace System_Xml::System::Xml { struct XmlWriterSettings; };
#include "System_Xml_XmlStandalone.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System_Xml::System::Xml
{
	struct TextUtf8RawTextWriter : System_Xml::System::Xml::XmlUtf8RawTextWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::IO::Stream* stream, System_Xml::System::Xml::XmlWriterSettings* settings);
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
		void WriteCData(mscorlib::System::String* text);
		void WriteComment(mscorlib::System::String* text);
		void WriteProcessingInstruction(mscorlib::System::String* name, mscorlib::System::String* text);
		void WriteEntityRef(mscorlib::System::String* name);
		void WriteCharEntity(wchar_t ch);
		void WriteSurrogateCharEntity(wchar_t lowChar, wchar_t highChar);
		void WriteWhitespace(mscorlib::System::String* ws);
		void WriteString(mscorlib::System::String* textBlock);
		void WriteChars(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(mscorlib::System::String* data);
	};
}

