#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_XmlWellFormedWriter.h"
namespace System_Xml::System::Xml { struct XmlWellFormedWriter; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlWellFormedWriter_AttributeValueCache_Item; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace System_Xml::System::Xml { struct XmlWriter; };
#include "System_Xml_XmlWellFormedWriter_AttributeValueCache_ItemType.h"
namespace mscorlib::System { struct Object; };

namespace System_Xml::System::Xml
{
	struct XmlWellFormedWriter_AttributeValueCache : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Text::StringBuilder* stringValue;
		mscorlib::System::String* singleStringValue;
		IL2CPP::Array<System_Xml::System::Xml::XmlWellFormedWriter_AttributeValueCache_Item*>* items;
		int32_t firstItem;
		int32_t lastItem;
		mscorlib::System::String* get_StringValue();
		void WriteEntityRef(mscorlib::System::String* name);
		void WriteCharEntity(wchar_t ch);
		void WriteSurrogateCharEntity(wchar_t lowChar, wchar_t highChar);
		void WriteWhitespace(mscorlib::System::String* ws);
		void WriteString(mscorlib::System::String* text);
		void WriteChars(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(mscorlib::System::String* data);
		void WriteValue(mscorlib::System::String* value);
		void Replay(System_Xml::System::Xml::XmlWriter* writer);
		void Trim();
		void Clear();
		void StartComplexValue();
		void AddItem(System_Xml::System::Xml::XmlWellFormedWriter_AttributeValueCache_ItemType type, mscorlib::System::Object* data);
		void _ctor();
	};
}

