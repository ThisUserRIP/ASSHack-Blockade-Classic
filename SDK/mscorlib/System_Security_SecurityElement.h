#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct ArrayList; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Security { struct SecurityElement_SecurityAttribute; };

namespace mscorlib::System::Security
{
	struct SecurityElement : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* text;
		mscorlib::System::String* tag;
		mscorlib::System::Collections::ArrayList* attributes;
		mscorlib::System::Collections::ArrayList* children;
		struct StaticFields
		{
			IL2CPP::Array<wchar_t>* invalid_tag_chars;
			IL2CPP::Array<wchar_t>* invalid_text_chars;
			IL2CPP::Array<wchar_t>* invalid_attr_name_chars;
			IL2CPP::Array<wchar_t>* invalid_attr_value_chars;
			IL2CPP::Array<wchar_t>* invalid_chars;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* tag);
		void _ctor(mscorlib::System::String* tag, mscorlib::System::String* text);
		mscorlib::System::Collections::Hashtable* get_Attributes();
		mscorlib::System::Collections::ArrayList* get_Children();
		mscorlib::System::String* get_Tag();
		mscorlib::System::String* get_Text();
		void set_Text(mscorlib::System::String* value);
		void AddAttribute(mscorlib::System::String* name, mscorlib::System::String* value);
		void AddChild(mscorlib::System::Security::SecurityElement* child);
		static mscorlib::System::String* Escape(mscorlib::System::String* str);
		static mscorlib::System::String* Unescape(mscorlib::System::String* str);
		static mscorlib::System::Security::SecurityElement* FromString(mscorlib::System::String* xml);
		static bool IsValidAttributeName(mscorlib::System::String* name);
		static bool IsValidAttributeValue(mscorlib::System::String* value);
		static bool IsValidTag(mscorlib::System::String* tag);
		static bool IsValidText(mscorlib::System::String* text);
		mscorlib::System::Security::SecurityElement* SearchForChildByTag(mscorlib::System::String* tag);
		mscorlib::System::String* SearchForTextOfTag(mscorlib::System::String* tag);
		mscorlib::System::String* ToString();
		void ToXml(mscorlib::System::Text::StringBuilder& s, int32_t level);
		mscorlib::System::Security::SecurityElement_SecurityAttribute* GetAttribute(mscorlib::System::String* name);
		void set_m_strText(mscorlib::System::String* value);
		mscorlib::System::String* SearchForTextOfLocalName(mscorlib::System::String* strLocalName);
		static void _cctor();
	};
}

