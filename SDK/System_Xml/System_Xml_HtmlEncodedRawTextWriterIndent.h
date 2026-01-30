#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_HtmlEncodedRawTextWriter.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct TextWriter; };
namespace System_Xml::System::Xml { struct XmlWriterSettings; };
namespace mscorlib::System::IO { struct Stream; };

namespace System_Xml::System::Xml
{
	struct HtmlEncodedRawTextWriterIndent : System_Xml::System::Xml::HtmlEncodedRawTextWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t indentLevel;
		int32_t endBlockPos;
		mscorlib::System::String* indentChars;
		bool newLineOnAttributes;
		void _ctor(mscorlib::System::IO::TextWriter* writer, System_Xml::System::Xml::XmlWriterSettings* settings);
		void _ctor(mscorlib::System::IO::Stream* stream, System_Xml::System::Xml::XmlWriterSettings* settings);
		void WriteDocType(mscorlib::System::String* name, mscorlib::System::String* pubid, mscorlib::System::String* sysid, mscorlib::System::String* subset);
		void WriteStartElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void StartElementContent();
		void WriteEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteStartAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void FlushBuffer();
		void Init(System_Xml::System::Xml::XmlWriterSettings* settings);
		void WriteIndent();
	};
}

