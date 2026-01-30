#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_Style : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_Name;
		int32_t m_HashCode;
		mscorlib::System::String* m_OpeningDefinition;
		mscorlib::System::String* m_ClosingDefinition;
		IL2CPP::Array<int32_t>* m_OpeningTagArray;
		IL2CPP::Array<int32_t>* m_ClosingTagArray;
		IL2CPP::Array<uint32_t>* m_OpeningTagUnicodeArray;
		IL2CPP::Array<uint32_t>* m_ClosingTagUnicodeArray;
		struct StaticFields
		{
			Unity_TextMeshPro::TMPro::TMP_Style* k_NormalStyle;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Unity_TextMeshPro::TMPro::TMP_Style* get_NormalStyle();
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		int32_t get_hashCode();
		void set_hashCode(int32_t value);
		mscorlib::System::String* get_styleOpeningDefinition();
		mscorlib::System::String* get_styleClosingDefinition();
		IL2CPP::Array<int32_t>* get_styleOpeningTagArray();
		IL2CPP::Array<int32_t>* get_styleClosingTagArray();
		void _ctor(mscorlib::System::String* styleName, mscorlib::System::String* styleOpeningDefinition, mscorlib::System::String* styleClosingDefinition);
		void RefreshStyle();
	};
}

