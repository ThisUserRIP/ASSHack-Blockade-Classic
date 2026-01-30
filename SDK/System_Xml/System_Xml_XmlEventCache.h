#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlRawWriter.h"
#include "System_Xml_XmlEventCache_XmlEvent.h"
namespace System_Xml::System::Xml { struct XmlEventCache_XmlEvent; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Xml_Xsl_Runtime_StringConcat.h"
namespace System_Xml::System::Xml::Xsl::Runtime { struct StringConcat; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlWriter; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Object; };
#include "System_Xml_XmlStandalone.h"
#include "System_Xml_XmlEventCache_XmlEventType.h"

namespace System_Xml::System::Xml
{
	struct XmlEventCache : System_Xml::System::Xml::XmlRawWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<System_Xml::System::Xml::XmlEventCache_XmlEvent>>* pages;
		IL2CPP::Array<System_Xml::System::Xml::XmlEventCache_XmlEvent>* pageCurr;
		int32_t pageSize;
		bool hasRootNode;
		System_Xml::System::Xml::Xsl::Runtime::StringConcat singleText;
		mscorlib::System::String* baseUri;
		void _ctor(mscorlib::System::String* baseUri, bool hasRootNode);
		void EndEvents();
		void EventsToWriter(System_Xml::System::Xml::XmlWriter* writer);
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
		void Dispose(bool disposing);
		void WriteXmlDeclaration(System_Xml::System::Xml::XmlStandalone standalone);
		void WriteXmlDeclaration(mscorlib::System::String* xmldecl);
		void StartElementContent();
		void WriteEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteFullEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteNamespaceDeclaration(mscorlib::System::String* prefix, mscorlib::System::String* ns);
		void WriteEndBase64();
		void AddEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType);
		void AddEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType, mscorlib::System::String* s1);
		void AddEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType, mscorlib::System::String* s1, mscorlib::System::String* s2);
		void AddEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType, mscorlib::System::String* s1, mscorlib::System::String* s2, mscorlib::System::String* s3);
		void AddEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType, mscorlib::System::String* s1, mscorlib::System::String* s2, mscorlib::System::String* s3, mscorlib::System::Object* o);
		void AddEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType, mscorlib::System::Object* o);
		int32_t NewEvent();
		static IL2CPP::Array<uint8_t>* ToBytes(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count);
	};
}

