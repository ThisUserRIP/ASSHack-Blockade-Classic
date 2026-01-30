#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::IO { struct TextWriter; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "System_Xml_XmlCharType.h"
namespace System_Xml::System::Xml { struct XmlCharType; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System_Xml::System::Xml
{
	struct XmlTextEncoder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::TextWriter* textWriter;
		bool inAttribute;
		wchar_t quoteChar;
		mscorlib::System::Text::StringBuilder* attrValue;
		bool cacheAttrValue;
		System_Xml::System::Xml::XmlCharType xmlCharType;
		void _ctor(mscorlib::System::IO::TextWriter* textWriter);
		void set_QuoteChar(wchar_t value);
		void StartAttribute(bool cacheAttrValue);
		void EndAttribute();
		mscorlib::System::String* get_AttributeValue();
		void WriteSurrogateChar(wchar_t lowChar, wchar_t highChar);
		void Write(IL2CPP::Array<wchar_t>* array, int32_t offset, int32_t count);
		void WriteSurrogateCharEntity(wchar_t lowChar, wchar_t highChar);
		void Write(mscorlib::System::String* text);
		void WriteRawWithSurrogateChecking(mscorlib::System::String* text);
		void WriteRaw(IL2CPP::Array<wchar_t>* array, int32_t offset, int32_t count);
		void WriteCharEntity(wchar_t ch);
		void WriteEntityRef(mscorlib::System::String* name);
		void WriteStringFragment(mscorlib::System::String* str, int32_t offset, int32_t count, IL2CPP::Array<wchar_t>* helperBuffer);
		void WriteCharEntityImpl(wchar_t ch);
		void WriteCharEntityImpl(mscorlib::System::String* strVal);
		void WriteEntityRefImpl(mscorlib::System::String* name);
	};
}

