#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlRawWriter.h"
namespace System_Xml::System::Xml { struct XmlRawWriter; };
namespace System_Xml::System::Xml { struct OnRemoveWriter; };
namespace System_Xml::System::Xml { struct XmlWriterSettings; };
namespace System_Xml::System::Xml { struct XmlEventCache; };
namespace mscorlib::System::IO { struct TextWriter; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
#include "System_Xml_XmlStandalone.h"
#include "System_Xml_XmlOutputMethod.h"

namespace System_Xml::System::Xml
{
	struct XmlAutoDetectWriter : System_Xml::System::Xml::XmlRawWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlRawWriter* wrapped;
		System_Xml::System::Xml::OnRemoveWriter* onRemove;
		System_Xml::System::Xml::XmlWriterSettings* writerSettings;
		System_Xml::System::Xml::XmlEventCache* eventCache;
		mscorlib::System::IO::TextWriter* textWriter;
		mscorlib::System::IO::Stream* strm;
		void _ctor(System_Xml::System::Xml::XmlWriterSettings* writerSettings);
		void _ctor(mscorlib::System::IO::TextWriter* textWriter, System_Xml::System::Xml::XmlWriterSettings* writerSettings);
		void _ctor(mscorlib::System::IO::Stream* strm, System_Xml::System::Xml::XmlWriterSettings* writerSettings);
		void WriteDocType(mscorlib::System::String* name, mscorlib::System::String* pubid, mscorlib::System::String* sysid, mscorlib::System::String* subset);
		void WriteStartElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteStartAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteEndAttribute();
		void WriteCData(mscorlib::System::String* text);
		void WriteComment(mscorlib::System::String* text);
		void WriteProcessingInstruction(mscorlib::System::String* name, mscorlib::System::String* text);
		void WriteWhitespace(mscorlib::System::String* ws);
		void WriteString(mscorlib::System::String* text);
		void WriteChars(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(mscorlib::System::String* data);
		void WriteEntityRef(mscorlib::System::String* name);
		void WriteCharEntity(wchar_t ch);
		void WriteSurrogateCharEntity(wchar_t lowChar, wchar_t highChar);
		void WriteBase64(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count);
		void WriteBinHex(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count);
		void Close();
		void Flush();
		void WriteValue(mscorlib::System::Object* value);
		void WriteValue(mscorlib::System::String* value);
		void WriteValue(bool value);
		void WriteValue(mscorlib::System::DateTime value);
		void WriteValue(double value);
		void WriteValue(float value);
		void WriteValue(mscorlib::System::Decimal value);
		void WriteValue(int32_t value);
		void WriteValue(int64_t value);
		void set_NamespaceResolver(System_Xml::System::Xml::IXmlNamespaceResolver* value);
		void WriteXmlDeclaration(System_Xml::System::Xml::XmlStandalone standalone);
		void WriteXmlDeclaration(mscorlib::System::String* xmldecl);
		void StartElementContent();
		void WriteEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteFullEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteNamespaceDeclaration(mscorlib::System::String* prefix, mscorlib::System::String* ns);
		bool get_SupportsNamespaceDeclarationInChunks();
		void WriteStartNamespaceDeclaration(mscorlib::System::String* prefix);
		void WriteEndNamespaceDeclaration();
		static bool IsHtmlTag(mscorlib::System::String* tagName);
		void EnsureWrappedWriter(System_Xml::System::Xml::XmlOutputMethod outMethod);
		bool TextBlockCreatesWriter(mscorlib::System::String* textBlock);
		void CreateWrappedWriter(System_Xml::System::Xml::XmlOutputMethod outMethod);
	};
}

