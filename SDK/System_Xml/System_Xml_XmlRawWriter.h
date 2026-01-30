#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlWriter.h"
namespace System_Xml::System::Xml { struct XmlRawWriterBase64Encoder; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_WriteState.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Object; };
#include "System_Xml_XmlStandalone.h"
#include "System_Xml_ConformanceLevel.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Xml::System::Xml
{
	struct XmlRawWriter : System_Xml::System::Xml::XmlWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlRawWriterBase64Encoder* base64Encoder;
		System_Xml::System::Xml::IXmlNamespaceResolver* resolver;
		void WriteStartDocument();
		void WriteDocType(mscorlib::System::String* name, mscorlib::System::String* pubid, mscorlib::System::String* sysid, mscorlib::System::String* subset);
		void WriteEndElement();
		void WriteFullEndElement();
		void WriteBase64(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count);
		mscorlib::System::String* LookupPrefix(mscorlib::System::String* ns);
		System_Xml::System::Xml::WriteState get_WriteState();
		void WriteCData(mscorlib::System::String* text);
		void WriteCharEntity(wchar_t ch);
		void WriteSurrogateCharEntity(wchar_t lowChar, wchar_t highChar);
		void WriteWhitespace(mscorlib::System::String* ws);
		void WriteChars(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(mscorlib::System::String* data);
		void WriteValue(mscorlib::System::Object* value);
		void WriteValue(mscorlib::System::String* value);
		void set_NamespaceResolver(System_Xml::System::Xml::IXmlNamespaceResolver* value);
		void WriteXmlDeclaration(System_Xml::System::Xml::XmlStandalone standalone);
		void WriteXmlDeclaration(mscorlib::System::String* xmldecl);
		void StartElementContent();
		void OnRootElement(System_Xml::System::Xml::ConformanceLevel conformanceLevel);
		void WriteEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteFullEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteNamespaceDeclaration(mscorlib::System::String* prefix, mscorlib::System::String* ns);
		bool get_SupportsNamespaceDeclarationInChunks();
		void WriteStartNamespaceDeclaration(mscorlib::System::String* prefix);
		void WriteEndNamespaceDeclaration();
		void WriteEndBase64();
		void Close(System_Xml::System::Xml::WriteState currentState);
		void _ctor();
	};
}

