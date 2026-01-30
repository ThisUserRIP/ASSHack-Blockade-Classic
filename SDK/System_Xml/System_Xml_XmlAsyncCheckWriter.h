#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlWriter.h"
namespace System_Xml::System::Xml { struct XmlWriter; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Xml_WriteState.h"
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

namespace System_Xml::System::Xml
{
	struct XmlAsyncCheckWriter : System_Xml::System::Xml::XmlWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlWriter* coreWriter;
		mscorlib::System::Threading::Tasks::Task* lastTask;
		void _ctor(System_Xml::System::Xml::XmlWriter* writer);
		void CheckAsync();
		void WriteStartDocument();
		void WriteDocType(mscorlib::System::String* name, mscorlib::System::String* pubid, mscorlib::System::String* sysid, mscorlib::System::String* subset);
		void WriteStartElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteEndElement();
		void WriteFullEndElement();
		void WriteStartAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteEndAttribute();
		void WriteCData(mscorlib::System::String* text);
		void WriteComment(mscorlib::System::String* text);
		void WriteProcessingInstruction(mscorlib::System::String* name, mscorlib::System::String* text);
		void WriteEntityRef(mscorlib::System::String* name);
		void WriteCharEntity(wchar_t ch);
		void WriteWhitespace(mscorlib::System::String* ws);
		void WriteString(mscorlib::System::String* text);
		void WriteSurrogateCharEntity(wchar_t lowChar, wchar_t highChar);
		void WriteChars(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(mscorlib::System::String* data);
		void WriteBase64(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count);
		void WriteBinHex(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count);
		System_Xml::System::Xml::WriteState get_WriteState();
		void Close();
		void Flush();
		mscorlib::System::String* LookupPrefix(mscorlib::System::String* ns);
		void WriteValue(mscorlib::System::Object* value);
		void WriteValue(mscorlib::System::String* value);
		void WriteValue(bool value);
		void WriteValue(mscorlib::System::DateTime value);
		void WriteValue(double value);
		void WriteValue(float value);
		void WriteValue(mscorlib::System::Decimal value);
		void WriteValue(int32_t value);
		void WriteValue(int64_t value);
		void Dispose(bool disposing);
	};
}

